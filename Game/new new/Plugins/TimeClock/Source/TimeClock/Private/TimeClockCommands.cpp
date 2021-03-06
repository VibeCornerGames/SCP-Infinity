// Copyright Lambda Works, Samuel Metters 2019. All rights reserved.
// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TimeClockCommands.h"
#include "TimeClock.h"
#include "Framework/Commands/InputChord.h"
#include "InputCoreTypes.h"

#define LOCTEXT_NAMESPACE "FTimeClockModule"

void FTimeClockCommands::RegisterCommands()
{
	UI_COMMAND(OpenTimeClockCommand, "Open Time Clock", "Open the Time Clock interface.", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
