#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_GenericKeyed_Vehicle_Spawn_DoorOpen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_GenericKeyed_Vehicle_Spawn_DoorOpen.A_GenericKeyed_Vehicle_Spawn_DoorOpen_C
// 0x0000 (0x0068 - 0x0068)
class UA_GenericKeyed_Vehicle_Spawn_DoorOpen_C : public UGbxAction_KeyedContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_GenericKeyed_Vehicle_Spawn_DoorOpen.A_GenericKeyed_Vehicle_Spawn_DoorOpen_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
