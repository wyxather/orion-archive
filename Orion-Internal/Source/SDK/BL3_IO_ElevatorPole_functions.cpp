// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_ElevatorPole_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_ElevatorPole.IO_ElevatorPole_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_ElevatorPole_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElevatorPole.IO_ElevatorPole_C.UserConstructionScript");

	AIO_ElevatorPole_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
