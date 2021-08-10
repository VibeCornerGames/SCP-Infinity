// Copyright 2019 Mookie. All Rights Reserved.

#ifdef WITH_EDITOR
#include "EBBarrel.h"
#include "PrimitiveSceneProxy.h"

FPrimitiveSceneProxy* UEBBarrel::CreateSceneProxy() {
	{
		class FBarrelProxy : public FPrimitiveSceneProxy
		{
		public:
			FBarrelProxy(UEBBarrel* InComponent) : FPrimitiveSceneProxy(InComponent)
			{
				bWillEverBeLit = false;
				Component = InComponent;
			}

			virtual void GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, FMeshElementCollector& Collector) const override
			{
				QUICK_SCOPE_CYCLE_COUNTER(STAT_BarrelSceneProxy_GetDynamicMeshElements);

				const FMatrix& Transform = GetLocalToWorld();

				for (int32 ViewIndex = 0; ViewIndex < Views.Num(); ViewIndex++)
				{
					if (VisibilityMap && ((1 << ViewIndex)!=0))
					{
						const FSceneView* View = Views[ViewIndex];
						const FLinearColor DrawColor = GetViewSelectionColor(FColor::Green, *View, IsSelected(), IsHovered(), true, IsIndividuallySelected());

						FPrimitiveDrawInterface* PDI = Collector.GetPDI(ViewIndex);
						DrawDirectionalArrow(PDI, Transform, DrawColor, Component->DebugArrowSize, Component->DebugArrowSize*0.1f, 16, Component->DebugArrowSize*0.01f);
					}
				}
			}

			virtual FPrimitiveViewRelevance GetViewRelevance(const FSceneView* View) const override
			{
				const bool bProxyVisible = IsSelected();

				FPrimitiveViewRelevance Result;
				Result.bDrawRelevance = (IsShown(View));
				Result.bDynamicRelevance = true;
				Result.bShadowRelevance = false;
				Result.bEditorPrimitiveRelevance = UseEditorCompositing(View);
				return Result;
			}
			virtual uint32 GetMemoryFootprint(void) const override { return(sizeof(*this) + GetAllocatedSize()); }
			uint32 GetAllocatedSize(void) const { return(FPrimitiveSceneProxy::GetAllocatedSize()); }
			virtual SIZE_T GetTypeHash() const override { return 0; }

		private:
			UEBBarrel* Component;
		};

		return new FBarrelProxy(this);
	}
};

#endif