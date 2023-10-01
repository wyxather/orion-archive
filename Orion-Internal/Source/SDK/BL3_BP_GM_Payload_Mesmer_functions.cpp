// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Payload_Mesmer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GM_Payload_Mesmer.BP_GM_Payload_Mesmer_C.K2_GrenadeDamageDealt
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AGrenade**               Grenade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGrenadeMod**            GrenadeMod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPayloadInstanceData    InstanceData                   (BlueprintVisible, Parm, OutParm, ReferenceParm)
// class AOakCharacter**          Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageDataEventDetails* DamageEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_GM_Payload_Mesmer_C::K2_GrenadeDamageDealt(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, class AOakCharacter** Character, struct FDamageDataEventDetails* DamageEvent, struct FPayloadInstanceData* InstanceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_Mesmer.BP_GM_Payload_Mesmer_C.K2_GrenadeDamageDealt");

	UBP_GM_Payload_Mesmer_C_K2_GrenadeDamageDealt_Params params;
	params.Grenade = Grenade;
	params.GrenadeMod = GrenadeMod;
	params.Character = Character;
	params.DamageEvent = DamageEvent;

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
