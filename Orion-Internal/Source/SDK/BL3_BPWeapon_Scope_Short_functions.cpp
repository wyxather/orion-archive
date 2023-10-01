// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeapon_Scope_Short_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeapon_Scope_Short.BPWeapon_Scope_Short_C.ExecuteUbergraph_BPWeapon_Scope_Short
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeapon_Scope_Short_C::ExecuteUbergraph_BPWeapon_Scope_Short(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeapon_Scope_Short.BPWeapon_Scope_Short_C.ExecuteUbergraph_BPWeapon_Scope_Short");

	UBPWeapon_Scope_Short_C_ExecuteUbergraph_BPWeapon_Scope_Short_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
