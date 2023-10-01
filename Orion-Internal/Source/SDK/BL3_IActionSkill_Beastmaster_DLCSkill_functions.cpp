// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IActionSkill_Beastmaster_DLCSkill_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IActionSkill_Beastmaster_DLCSkill.IActionSkill_Beastmaster_DLCSkill_C.TrapFailedToSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIActionSkill_Beastmaster_DLCSkill_C::TrapFailedToSpawn(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IActionSkill_Beastmaster_DLCSkill.IActionSkill_Beastmaster_DLCSkill_C.TrapFailedToSpawn");

	UIActionSkill_Beastmaster_DLCSkill_C_TrapFailedToSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function IActionSkill_Beastmaster_DLCSkill.IActionSkill_Beastmaster_DLCSkill_C.EndTrapEarly
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIActionSkill_Beastmaster_DLCSkill_C::EndTrapEarly(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function IActionSkill_Beastmaster_DLCSkill.IActionSkill_Beastmaster_DLCSkill_C.EndTrapEarly");

	UIActionSkill_Beastmaster_DLCSkill_C_EndTrapEarly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
