// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_GunfireTechRequirementsSteam_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GunfireTechRequirementsSteam.GunfireTechRequirementsImplSteam.TriggerOnExteralAuthFailed
// 00007FF6F8320980
// (Final, Native, Protected)

void UGunfireTechRequirementsImplSteam::TriggerOnExteralAuthFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirementsSteam.GunfireTechRequirementsImplSteam.TriggerOnExteralAuthFailed");

	UGunfireTechRequirementsImplSteam_TriggerOnExteralAuthFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
