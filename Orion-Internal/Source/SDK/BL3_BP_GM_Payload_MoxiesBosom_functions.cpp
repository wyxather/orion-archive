// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Payload_MoxiesBosom_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GM_Payload_MoxiesBosom.BP_GM_Payload_MoxiesBosom_C.K2_UpdateChildGeneration
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGrenadeChildGenerationData* InGenerationData               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGrenadeChildGenerationData GenerationData                 (Parm, OutParm)

void UBP_GM_Payload_MoxiesBosom_C::K2_UpdateChildGeneration(struct FGrenadeChildGenerationData* InGenerationData, struct FGrenadeChildGenerationData* GenerationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_MoxiesBosom.BP_GM_Payload_MoxiesBosom_C.K2_UpdateChildGeneration");

	UBP_GM_Payload_MoxiesBosom_C_K2_UpdateChildGeneration_Params params;
	params.InGenerationData = InGenerationData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GenerationData != nullptr)
		*GenerationData = params.GenerationData;
}


// Function BP_GM_Payload_MoxiesBosom.BP_GM_Payload_MoxiesBosom_C.K2_GrenadeBeginPlay
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AGrenade**               Grenade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGrenadeMod**            GrenadeMod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPayloadInstanceData    InstanceData                   (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UBP_GM_Payload_MoxiesBosom_C::K2_GrenadeBeginPlay(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_MoxiesBosom.BP_GM_Payload_MoxiesBosom_C.K2_GrenadeBeginPlay");

	UBP_GM_Payload_MoxiesBosom_C_K2_GrenadeBeginPlay_Params params;
	params.Grenade = Grenade;
	params.GrenadeMod = GrenadeMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InstanceData != nullptr)
		*InstanceData = params.InstanceData;
}


// Function BP_GM_Payload_MoxiesBosom.BP_GM_Payload_MoxiesBosom_C.K2_NativeDelayCallback
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AGrenade**               Grenade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGrenadeMod**            GrenadeMod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPayloadInstanceData    InstanceData                   (BlueprintVisible, Parm, OutParm, ReferenceParm)
// struct FName*                  DelayName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GM_Payload_MoxiesBosom_C::K2_NativeDelayCallback(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FName* DelayName, struct FPayloadInstanceData* InstanceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_MoxiesBosom.BP_GM_Payload_MoxiesBosom_C.K2_NativeDelayCallback");

	UBP_GM_Payload_MoxiesBosom_C_K2_NativeDelayCallback_Params params;
	params.Grenade = Grenade;
	params.GrenadeMod = GrenadeMod;
	params.DelayName = DelayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InstanceData != nullptr)
		*InstanceData = params.InstanceData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
