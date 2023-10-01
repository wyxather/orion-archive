// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_VarkidLarva_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_VarkidLarva.BPChar_VarkidLarva_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_VarkidLarva_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_VarkidLarva.BPChar_VarkidLarva_C.UserConstructionScript");

	ABPChar_VarkidLarva_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
