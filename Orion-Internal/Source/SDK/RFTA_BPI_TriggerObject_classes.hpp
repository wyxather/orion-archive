#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BPI_TriggerObject_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_TriggerObject.BPI_TriggerObject_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_TriggerObject_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_TriggerObject.BPI_TriggerObject_C");
		return ptr;
	}


	void SetTriggerState(bool* State);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
