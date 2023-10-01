#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_VehicleHostileEscortTarget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIAction_VehicleHostileEscortTarget.AIAction_VehicleHostileEscortTarget_C
// 0x0008 (0x0170 - 0x0168)
class UAIAction_VehicleHostileEscortTarget_C : public UAIAction_Random
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0168(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIAction_VehicleHostileEscortTarget.AIAction_VehicleHostileEscortTarget_C");
		return ptr;
	}


	void ExecuteUbergraph_AIAction_VehicleHostileEscortTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
