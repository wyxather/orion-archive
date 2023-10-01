#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Elevator_Ep04_Prologue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Elevator_Ep04_Prologue.Elevator_Ep04_Prologue_C
// 0x0000 (0x06F0 - 0x06F0)
class AElevator_Ep04_Prologue_C : public AElevator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Elevator_Ep04_Prologue.Elevator_Ep04_Prologue_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
