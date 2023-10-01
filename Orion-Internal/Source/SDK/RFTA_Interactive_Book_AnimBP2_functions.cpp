// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_Book_AnimBP2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interactive_Book_AnimBP2.Interactive_Book_AnimBP2_C.ExecuteUbergraph_Interactive_Book_AnimBP2
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteractive_Book_AnimBP2_C::ExecuteUbergraph_Interactive_Book_AnimBP2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Book_AnimBP2.Interactive_Book_AnimBP2_C.ExecuteUbergraph_Interactive_Book_AnimBP2");

	UInteractive_Book_AnimBP2_C_ExecuteUbergraph_Interactive_Book_AnimBP2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
