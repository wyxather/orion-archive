#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionContainer_TEDLeap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActionContainer_TEDLeap.ActionContainer_TEDLeap_C
// 0x0000 (0x0078 - 0x0078)
class UActionContainer_TEDLeap_C : public UGbxAction_ConditionContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActionContainer_TEDLeap.ActionContainer_TEDLeap_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
