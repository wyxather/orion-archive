#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionKeyCont_PlayerMelee_Miss_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActionKeyCont_PlayerMelee_Miss.ActionKeyCont_PlayerMelee_Miss_C
// 0x0000 (0x0068 - 0x0068)
class UActionKeyCont_PlayerMelee_Miss_C : public UGbxAction_KeyedContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActionKeyCont_PlayerMelee_Miss.ActionKeyCont_PlayerMelee_Miss_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
