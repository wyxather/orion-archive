// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIActionTree_DigiClone_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIActionTree_DigiClone.AIActionTree_DigiClone_C.ExecuteUbergraph_AIActionTree_DigiClone
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIActionTree_DigiClone_C::ExecuteUbergraph_AIActionTree_DigiClone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIActionTree_DigiClone.AIActionTree_DigiClone_C.ExecuteUbergraph_AIActionTree_DigiClone");

	UAIActionTree_DigiClone_C_ExecuteUbergraph_AIActionTree_DigiClone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
