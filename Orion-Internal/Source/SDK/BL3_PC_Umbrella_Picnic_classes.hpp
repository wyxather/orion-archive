#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PC_Umbrella_Picnic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PC_Umbrella_Picnic.PC_Umbrella_Picnic_C
// 0x0000 (0x05EC - 0x05EC)
class APC_Umbrella_Picnic_C : public APC_OakClothActor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PC_Umbrella_Picnic.PC_Umbrella_Picnic_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
