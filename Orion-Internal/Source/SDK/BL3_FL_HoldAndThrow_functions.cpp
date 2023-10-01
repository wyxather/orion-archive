// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_FL_HoldAndThrow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FL_HoldAndThrow.FL_HoldAndThrow_C.HNT_Throw
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_HoldAndThrow_C::STATIC_HNT_Throw(class AActor* Projectile, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_HoldAndThrow.FL_HoldAndThrow_C.HNT_Throw");

	UFL_HoldAndThrow_C_HNT_Throw_Params params;
	params.Projectile = Projectile;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FL_HoldAndThrow.FL_HoldAndThrow_C.HNT_Drop
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_HoldAndThrow_C::STATIC_HNT_Drop(class AActor* Projectile, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_HoldAndThrow.FL_HoldAndThrow_C.HNT_Drop");

	UFL_HoldAndThrow_C_HNT_Drop_Params params;
	params.Projectile = Projectile;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FL_HoldAndThrow.FL_HoldAndThrow_C.HNT_Prime
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFL_HoldAndThrow_C::STATIC_HNT_Prime(class AActor* Projectile, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FL_HoldAndThrow.FL_HoldAndThrow_C.HNT_Prime");

	UFL_HoldAndThrow_C_HNT_Prime_Params params;
	params.Projectile = Projectile;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
