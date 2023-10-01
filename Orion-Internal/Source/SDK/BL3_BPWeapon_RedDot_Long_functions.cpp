// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeapon_RedDot_Long_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeapon_RedDot_Long.BPWeapon_RedDot_Long_C.ExecuteUbergraph_BPWeapon_RedDot_Long
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeapon_RedDot_Long_C::ExecuteUbergraph_BPWeapon_RedDot_Long(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeapon_RedDot_Long.BPWeapon_RedDot_Long_C.ExecuteUbergraph_BPWeapon_RedDot_Long");

	UBPWeapon_RedDot_Long_C_ExecuteUbergraph_BPWeapon_RedDot_Long_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
