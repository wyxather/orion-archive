// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Wasteland_Skull_Champion_Projectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Wasteland_Skull_Champion_Projectile.Wasteland_Skull_Champion_Projectile_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AWasteland_Skull_Champion_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wasteland_Skull_Champion_Projectile.Wasteland_Skull_Champion_Projectile_C.ReceiveBeginPlay");

	AWasteland_Skull_Champion_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wasteland_Skull_Champion_Projectile.Wasteland_Skull_Champion_Projectile_C.ExecuteUbergraph_Wasteland_Skull_Champion_Projectile
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWasteland_Skull_Champion_Projectile_C::ExecuteUbergraph_Wasteland_Skull_Champion_Projectile(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wasteland_Skull_Champion_Projectile.Wasteland_Skull_Champion_Projectile_C.ExecuteUbergraph_Wasteland_Skull_Champion_Projectile");

	AWasteland_Skull_Champion_Projectile_C_ExecuteUbergraph_Wasteland_Skull_Champion_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
