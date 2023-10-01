// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_GunfireTechRequirementsEOS_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GunfireTechRequirementsEOS.GunfireTechRequirementsImplEOS.DLCEntitlementsUpdated
// 00007FF6F8322450
// (Final, Native, Protected)

void UGunfireTechRequirementsImplEOS::DLCEntitlementsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunfireTechRequirementsEOS.GunfireTechRequirementsImplEOS.DLCEntitlementsUpdated");

	UGunfireTechRequirementsImplEOS_DLCEntitlementsUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
