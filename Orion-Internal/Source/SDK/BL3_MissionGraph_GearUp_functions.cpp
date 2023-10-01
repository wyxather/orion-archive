// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_MissionGraph_GearUp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionGraph_GearUp.MissionGraph_GearUp_C.[Shlooting Spree: Introduction]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// void*                          Unlocks                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// void*                          Next_Mission                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionGraph_GearUp_C::_Shlooting_Spree__Introduction_(void* Unlocks, void* Next_Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionGraph_GearUp.MissionGraph_GearUp_C.[Shlooting Spree: Introduction]");

	UMissionGraph_GearUp_C__Shlooting_Spree__Introduction__Params params;
	params.Unlocks = Unlocks;
	params.Next_Mission = Next_Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionGraph_GearUp.MissionGraph_GearUp_C.[Shlooting Spree]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// void*                          Unlocks                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// void*                          Next_Mission                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionGraph_GearUp_C::_Shlooting_Spree_(void* Unlocks, void* Next_Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionGraph_GearUp.MissionGraph_GearUp_C.[Shlooting Spree]");

	UMissionGraph_GearUp_C__Shlooting_Spree__Params params;
	params.Unlocks = Unlocks;
	params.Next_Mission = Next_Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionGraph_GearUp.MissionGraph_GearUp_C.ExecuteUbergraph_MissionGraph_GearUp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionGraph_GearUp_C::ExecuteUbergraph_MissionGraph_GearUp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionGraph_GearUp.MissionGraph_GearUp_C.ExecuteUbergraph_MissionGraph_GearUp");

	UMissionGraph_GearUp_C_ExecuteUbergraph_MissionGraph_GearUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
