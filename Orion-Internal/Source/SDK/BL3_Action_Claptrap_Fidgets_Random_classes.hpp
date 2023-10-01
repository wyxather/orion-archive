#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Claptrap_Fidgets_Random_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Claptrap_Fidgets_Random.Action_Claptrap_Fidgets_Random_C
// 0x0000 (0x0070 - 0x0070)
class UAction_Claptrap_Fidgets_Random_C : public UGbxAction_RandomContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Claptrap_Fidgets_Random.Action_Claptrap_Fidgets_Random_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
