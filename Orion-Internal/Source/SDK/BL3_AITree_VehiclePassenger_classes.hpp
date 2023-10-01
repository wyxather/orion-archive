#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_VehiclePassenger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AITree_VehiclePassenger.AITree_VehiclePassenger_C
// 0x0020 (0x0190 - 0x0170)
class UAITree_VehiclePassenger_C : public UAIAction_AITree
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)
	class AGbxCharacter*                               WorldContext;                                             // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     World_Context;                                            // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AOakVehicle*                                 Vehicle;                                                  // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AITree_VehiclePassenger.AITree_VehiclePassenger_C");
		return ptr;
	}


	void BndEvt__LeapOnVehicle_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_VehiclePassenger(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void ExecuteUbergraph_AITree_VehiclePassenger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
