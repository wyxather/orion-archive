// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPGameMode_Default_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPGameMode_Default.BPGameMode_Default_C.FindPlayerStart
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString*                 IncomingName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ABPGameMode_Default_C::FindPlayerStart(class AController** Player, class FString* IncomingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGameMode_Default.BPGameMode_Default_C.FindPlayerStart");

	ABPGameMode_Default_C_FindPlayerStart_Params params;
	params.Player = Player;
	params.IncomingName = IncomingName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPGameMode_Default.BPGameMode_Default_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPGameMode_Default_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGameMode_Default.BPGameMode_Default_C.UserConstructionScript");

	ABPGameMode_Default_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
