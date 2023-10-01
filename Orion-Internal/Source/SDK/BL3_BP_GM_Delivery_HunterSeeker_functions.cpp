// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Delivery_HunterSeeker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GM_Delivery_HunterSeeker.BP_GM_Delivery_HunterSeeker_C.K2_GrenadeImpact
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AGrenade**               Grenade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGrenadeMod**            GrenadeMod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBP_GM_Delivery_HunterSeeker_C::K2_GrenadeImpact(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FHitResult* HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_Delivery_HunterSeeker.BP_GM_Delivery_HunterSeeker_C.K2_GrenadeImpact");

	UBP_GM_Delivery_HunterSeeker_C_K2_GrenadeImpact_Params params;
	params.Grenade = Grenade;
	params.GrenadeMod = GrenadeMod;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_Delivery_HunterSeeker.BP_GM_Delivery_HunterSeeker_C.K2_GrenadeBeginPlay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AGrenade**               Grenade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGrenadeMod**            GrenadeMod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GM_Delivery_HunterSeeker_C::K2_GrenadeBeginPlay(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_Delivery_HunterSeeker.BP_GM_Delivery_HunterSeeker_C.K2_GrenadeBeginPlay");

	UBP_GM_Delivery_HunterSeeker_C_K2_GrenadeBeginPlay_Params params;
	params.Grenade = Grenade;
	params.GrenadeMod = GrenadeMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_Delivery_HunterSeeker.BP_GM_Delivery_HunterSeeker_C.K2_NativeDelayCallback
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AGrenade**               Grenade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGrenadeMod**            GrenadeMod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  DelayName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GM_Delivery_HunterSeeker_C::K2_NativeDelayCallback(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FName* DelayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_Delivery_HunterSeeker.BP_GM_Delivery_HunterSeeker_C.K2_NativeDelayCallback");

	UBP_GM_Delivery_HunterSeeker_C_K2_NativeDelayCallback_Params params;
	params.Grenade = Grenade;
	params.GrenadeMod = GrenadeMod;
	params.DelayName = DelayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_Delivery_HunterSeeker.BP_GM_Delivery_HunterSeeker_C.K2_GrenadeInitialized
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AGrenade**               Grenade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGrenadeMod**            GrenadeMod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GM_Delivery_HunterSeeker_C::K2_GrenadeInitialized(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_Delivery_HunterSeeker.BP_GM_Delivery_HunterSeeker_C.K2_GrenadeInitialized");

	UBP_GM_Delivery_HunterSeeker_C_K2_GrenadeInitialized_Params params;
	params.Grenade = Grenade;
	params.GrenadeMod = GrenadeMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
