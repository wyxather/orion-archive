#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARand_Beastmaster_DLCSkill_Start_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARand_Beastmaster_DLCSkill_Start.ARand_Beastmaster_DLCSkill_Start_C
// 0x0000 (0x0070 - 0x0070)
class UARand_Beastmaster_DLCSkill_Start_C : public UGbxAction_RandomContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARand_Beastmaster_DLCSkill_Start.ARand_Beastmaster_DLCSkill_Start_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
