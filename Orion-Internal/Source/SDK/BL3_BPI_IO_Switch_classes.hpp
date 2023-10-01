#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_IO_Switch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_IO_Switch.BPI_IO_Switch_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_IO_Switch_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_IO_Switch.BPI_IO_Switch_C");
		return ptr;
	}


	void GetSwitchFeedbackState(TEnumAsByte<Enum_States_SwitchFeedback>* FeedbackState);
	void SetSwitchFeedbackState(TEnumAsByte<Enum_States_SwitchFeedback> FeedbackState);
	void GetSwitchInteractiveState(bool* Interactive);
	void GetSwitchLockedState(bool* Locked);
	void GetSwitchState(TEnumAsByte<Enum_Switch_State>* SwitchState);
	void SetSwitchInteractiveState(bool Interactive);
	void SetSwitchLockedState(bool Locked);
	void SetSwitchState(TEnumAsByte<Enum_Switch_State> SwitchState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
