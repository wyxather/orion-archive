#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Beastmaster_Cloak_Var2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Beastmaster_Cloak_Var2.Action_Beastmaster_Cloak_Var2_C
// 0x0000 (0x0270 - 0x0270)
class UAction_Beastmaster_Cloak_Var2_C : public UAction_Beastmaster_Cloak_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Beastmaster_Cloak_Var2.Action_Beastmaster_Cloak_Var2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
