// Copyright 2016 Mookie. All Rights Reserved.

#include "EBBullet.h"

FVector AEBBullet::GetWind_Implementation(UWorld* World, FVector Location) const{
	return Wind;
}

float AEBBullet::GetAirDensity_Implementation(UWorld* World, FVector Location) const{
	switch (AtmosphereType) {
		case (EEBAtmosphereType::AT_Curve): {
			float airmp = SeaLevelAirDensity / GetCurveValue(AirDensityCurve, 0, SeaLevelAirDensity);
			return GetCurveValue(AirDensityCurve, GetAltitude(World, Location) / WorldScale, SeaLevelAirDensity)* airmp;
		}
		case (EEBAtmosphereType::AT_Earth): {
			return GetAltitudeDensity(GetAltitude(World, Location) / WorldScale / 100.0f);
		}
		default:{
			return SeaLevelAirDensity;
		}
	}
}

float AEBBullet::GetSpeedOfSound_Implementation(UWorld* World, FVector Location) const{
	if (!SpeedOfSoundVariesWithAltitude) {
		return SeaLevelSpeedOfSound * WorldScale;
	}
		
	float Altitude = GetAltitude(World, Location);
	float soundvmp = SeaLevelSpeedOfSound / GetCurveValue(SpeedOfSoundCurve, 0, SeaLevelSpeedOfSound);
	return GetCurveValue(SpeedOfSoundCurve, Altitude, SeaLevelSpeedOfSound)*WorldScale*soundvmp;
}


float AEBBullet::GetAltitudePressure(float AltitudeMeter) const {
	return FMath::Max(SeaLevelAirPressure * FMath::Pow((1 - (0.0000225577 * AltitudeMeter)), 5.25588), 0.0f);
}

float AEBBullet::GetAltitudeTemperature(float AltitudeMeter) const {
	return SeaLevelAirTemperature - (TemperatureLapseRate * FMath::Min(AltitudeMeter, TropopauseAltitude));
}

float AEBBullet::GetAltitudeDensity(float AltitudeMeter) const {
	float Temperature = GetAltitudeTemperature(AltitudeMeter);
	float Pressure = GetAltitudePressure(AltitudeMeter);
	return Pressure * 100.0f / ((Temperature + 273.15) * SpecificGasConstant);
}

float AEBBullet::GetAltitude(UWorld* World, FVector Location) const{
	FVector DistanceFromOrigin = (Location - WorldCenterLocation + FVector(World->OriginLocation));
	if (SphericalAltitude)
	{
		return (DistanceFromOrigin.Size() - SeaLevelRadius);
	}
	else {
		return DistanceFromOrigin.Z;
	}
}