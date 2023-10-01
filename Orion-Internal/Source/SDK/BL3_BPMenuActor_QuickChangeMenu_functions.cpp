// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPMenuActor_QuickChangeMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPMenuActor_QuickChangeMenu.BPMenuActor_QuickChangeMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPMenuActor_QuickChangeMenu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPMenuActor_QuickChangeMenu.BPMenuActor_QuickChangeMenu_C.UserConstructionScript");

	ABPMenuActor_QuickChangeMenu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
