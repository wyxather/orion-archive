// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_KickBan_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dialog_KickBan.Dialog_KickBan_C.OnBeginDialog
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ADialog_KickBan_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_KickBan.Dialog_KickBan_C.OnBeginDialog");

	ADialog_KickBan_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dialog_KickBan.Dialog_KickBan_C.ExecuteUbergraph_Dialog_KickBan
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADialog_KickBan_C::ExecuteUbergraph_Dialog_KickBan(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_KickBan.Dialog_KickBan_C.ExecuteUbergraph_Dialog_KickBan");

	ADialog_KickBan_C_ExecuteUbergraph_Dialog_KickBan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
