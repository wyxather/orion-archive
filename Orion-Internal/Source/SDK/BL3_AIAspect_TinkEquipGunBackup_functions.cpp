// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAspect_TinkEquipGunBackup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAspect_TinkEquipGunBackup.AIAspect_TinkEquipGunBackup_C.BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_TinkEquipGunBackup
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAIAspect_TinkEquipGunBackup_C::BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_TinkEquipGunBackup(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAspect_TinkEquipGunBackup.AIAspect_TinkEquipGunBackup_C.BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_TinkEquipGunBackup");

	UAIAspect_TinkEquipGunBackup_C_BndEvt__OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAspect_TinkEquipGunBackup_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIAspect_TinkEquipGunBackup.AIAspect_TinkEquipGunBackup_C.ExecuteUbergraph_AIAspect_TinkEquipGunBackup
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAspect_TinkEquipGunBackup_C::ExecuteUbergraph_AIAspect_TinkEquipGunBackup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAspect_TinkEquipGunBackup.AIAspect_TinkEquipGunBackup_C.ExecuteUbergraph_AIAspect_TinkEquipGunBackup");

	UAIAspect_TinkEquipGunBackup_C_ExecuteUbergraph_AIAspect_TinkEquipGunBackup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
