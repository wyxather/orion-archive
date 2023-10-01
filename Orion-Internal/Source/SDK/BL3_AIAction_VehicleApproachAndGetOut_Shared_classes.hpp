#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_VehicleApproachAndGetOut_Shared_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIAction_VehicleApproachAndGetOut_Shared.AIAction_VehicleApproachAndGetOut_Shared_C
// 0x0018 (0x0200 - 0x01E8)
class UAIAction_VehicleApproachAndGetOut_Shared_C : public UAIAction_Sequence
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E8(0x0008) (Transient, DuplicateTransient)
	class AGbxCharacter*                               WorldContext;                                             // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOakVehicle*                                 Vehicle;                                                  // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_VehicleApproachAndGetOut_Shared.AIAction_VehicleApproachAndGetOut_Shared_C");
		return ptr;
	}


	void ExecuteUbergraph_AIAction_VehicleApproachAndGetOut_Shared(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
