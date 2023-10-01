// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Payload_ToiletBombs_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GM_Payload_ToiletBombs.BP_GM_Payload_ToiletBombs_C.K2_GrenadeExplode
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AGrenade**               Grenade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGrenadeMod**            GrenadeMod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPayloadInstanceData    InstanceData                   (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UBP_GM_Payload_ToiletBombs_C::K2_GrenadeExplode(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_ToiletBombs.BP_GM_Payload_ToiletBombs_C.K2_GrenadeExplode");

	UBP_GM_Payload_ToiletBombs_C_K2_GrenadeExplode_Params params;
	params.Grenade = Grenade;
	params.GrenadeMod = GrenadeMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InstanceData != nullptr)
		*InstanceData = params.InstanceData;
}


// Function BP_GM_Payload_ToiletBombs.BP_GM_Payload_ToiletBombs_C.K2_GrenadeInitialized
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AGrenade**               Grenade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGrenadeMod**            GrenadeMod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPayloadInstanceData    InstanceData                   (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UBP_GM_Payload_ToiletBombs_C::K2_GrenadeInitialized(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_ToiletBombs.BP_GM_Payload_ToiletBombs_C.K2_GrenadeInitialized");

	UBP_GM_Payload_ToiletBombs_C_K2_GrenadeInitialized_Params params;
	params.Grenade = Grenade;
	params.GrenadeMod = GrenadeMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InstanceData != nullptr)
		*InstanceData = params.InstanceData;
}


// Function BP_GM_Payload_ToiletBombs.BP_GM_Payload_ToiletBombs_C.K2_UpdateChildGeneration
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGrenadeChildGenerationData* InGenerationData               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGrenadeChildGenerationData GenerationData                 (Parm, OutParm)

void UBP_GM_Payload_ToiletBombs_C::K2_UpdateChildGeneration(struct FGrenadeChildGenerationData* InGenerationData, struct FGrenadeChildGenerationData* GenerationData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_ToiletBombs.BP_GM_Payload_ToiletBombs_C.K2_UpdateChildGeneration");

	UBP_GM_Payload_ToiletBombs_C_K2_UpdateChildGeneration_Params params;
	params.InGenerationData = InGenerationData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GenerationData != nullptr)
		*GenerationData = params.GenerationData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
