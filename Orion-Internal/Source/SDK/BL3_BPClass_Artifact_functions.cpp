// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPClass_Artifact_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPClass_Artifact.BPClass_Artifact_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPClass_Artifact_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPClass_Artifact.BPClass_Artifact_C.UserConstructionScript");

	ABPClass_Artifact_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
