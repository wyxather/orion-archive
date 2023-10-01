#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_VehicleTechnical_SwapFromTurret_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_VehicleTechnical_SwapFromTurret.Action_VehicleTechnical_SwapFromTurret_C
// 0x0008 (0x0228 - 0x0220)
class UAction_VehicleTechnical_SwapFromTurret_C : public UAction_Vehicle_SharedSettings_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_VehicleTechnical_SwapFromTurret.Action_VehicleTechnical_SwapFromTurret_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_Action_VehicleTechnical_SwapFromTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
