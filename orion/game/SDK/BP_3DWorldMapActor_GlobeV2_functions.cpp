#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_3DWorldMapActor_GlobeV2.BP_3DWorldMapActor_GlobeV2_C
// (Actor)

class UClass* ABP_3DWorldMapActor_GlobeV2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_3DWorldMapActor_GlobeV2_C");

	return Clss;
}


// BP_3DWorldMapActor_GlobeV2_C BP_3DWorldMapActor_GlobeV2.Default__BP_3DWorldMapActor_GlobeV2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_3DWorldMapActor_GlobeV2_C* ABP_3DWorldMapActor_GlobeV2_C::GetDefaultObj()
{
	static class ABP_3DWorldMapActor_GlobeV2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_3DWorldMapActor_GlobeV2_C*>(ABP_3DWorldMapActor_GlobeV2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_3DWorldMapActor_GlobeV2.BP_3DWorldMapActor_GlobeV2_C.ReceiveBeginPlay
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_3DWorldMapActor_GlobeV2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActor_GlobeV2_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_3DWorldMapActor_GlobeV2.BP_3DWorldMapActor_GlobeV2_C.SetIsEnableMasksForPlayerSelect
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_3DWorldMapActor_GlobeV2_C::SetIsEnableMasksForPlayerSelect(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActor_GlobeV2_C", "SetIsEnableMasksForPlayerSelect");

	Params::ABP_3DWorldMapActor_GlobeV2_C_SetIsEnableMasksForPlayerSelect_Params Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActor_GlobeV2.BP_3DWorldMapActor_GlobeV2_C.SetIsDisplayedIslandLayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWorldMapIslandLayerAreaMaskArea                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDisplayed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_3DWorldMapActor_GlobeV2_C::SetIsDisplayedIslandLayer(enum class EWorldMapIslandLayerArea MaskArea, bool IsDisplayed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActor_GlobeV2_C", "SetIsDisplayedIslandLayer");

	Params::ABP_3DWorldMapActor_GlobeV2_C_SetIsDisplayedIslandLayer_Params Parms{};

	Parms.MaskArea = MaskArea;
	Parms.IsDisplayed = IsDisplayed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActor_GlobeV2.BP_3DWorldMapActor_GlobeV2_C.SetIsMaskedPrologueArea
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWorldMapPrologueMaskAreaMaskArea                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMasked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_3DWorldMapActor_GlobeV2_C::SetIsMaskedPrologueArea(enum class EWorldMapPrologueMaskArea MaskArea, bool IsMasked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActor_GlobeV2_C", "SetIsMaskedPrologueArea");

	Params::ABP_3DWorldMapActor_GlobeV2_C_SetIsMaskedPrologueArea_Params Parms{};

	Parms.MaskArea = MaskArea;
	Parms.IsMasked = IsMasked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActor_GlobeV2.BP_3DWorldMapActor_GlobeV2_C.SetIsMaskedArea
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWorldMapMaskArea       MaskArea                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMasked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_3DWorldMapActor_GlobeV2_C::SetIsMaskedArea(enum class EWorldMapMaskArea MaskArea, bool IsMasked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActor_GlobeV2_C", "SetIsMaskedArea");

	Params::ABP_3DWorldMapActor_GlobeV2_C_SetIsMaskedArea_Params Parms{};

	Parms.MaskArea = MaskArea;
	Parms.IsMasked = IsMasked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActor_GlobeV2.BP_3DWorldMapActor_GlobeV2_C.SetIsEnableMask
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_3DWorldMapActor_GlobeV2_C::SetIsEnableMask(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActor_GlobeV2_C", "SetIsEnableMask");

	Params::ABP_3DWorldMapActor_GlobeV2_C_SetIsEnableMask_Params Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_3DWorldMapActor_GlobeV2.BP_3DWorldMapActor_GlobeV2_C.GetGlobeMeshComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*        GlobeMesh                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_3DWorldMapActor_GlobeV2_C::GetGlobeMeshComponent(class UStaticMeshComponent** GlobeMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActor_GlobeV2_C", "GetGlobeMeshComponent");

	Params::ABP_3DWorldMapActor_GlobeV2_C_GetGlobeMeshComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GlobeMesh != nullptr)
		*GlobeMesh = Parms.GlobeMesh;

}


// Function BP_3DWorldMapActor_GlobeV2.BP_3DWorldMapActor_GlobeV2_C.GetAllPivots
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWorldMapPivotComponentBase*>ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UWorldMapPivotComponentBase*> ABP_3DWorldMapActor_GlobeV2_C::GetAllPivots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActor_GlobeV2_C", "GetAllPivots");

	Params::ABP_3DWorldMapActor_GlobeV2_C_GetAllPivots_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_3DWorldMapActor_GlobeV2.BP_3DWorldMapActor_GlobeV2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_3DWorldMapActor_GlobeV2_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_3DWorldMapActor_GlobeV2_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


