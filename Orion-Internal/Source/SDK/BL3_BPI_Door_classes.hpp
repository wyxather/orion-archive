#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Door_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Door.BPI_Door_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Door_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Door.BPI_Door_C");
		return ptr;
	}


	void GetDoorFeedbackState(TEnumAsByte<Enum_States_DoorLocked>* FeedbackState);
	void SetDoorFeedbackState(TEnumAsByte<Enum_States_DoorLocked> FeedbackState);
	void GetDoorInteractiveState(bool* Interactive);
	void GetDoorLockedState(bool* Locked);
	void GetDoorState(TEnumAsByte<Enum_Door_State>* DoorState);
	void SetDoorInteractiveState(bool Interactive_);
	void SetDoorLockedState(bool Locked_);
	void SetDoorState(TEnumAsByte<Enum_Door_State> DoorState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
