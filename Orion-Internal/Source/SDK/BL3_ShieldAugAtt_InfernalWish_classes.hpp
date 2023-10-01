#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAugAtt_InfernalWish_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShieldAugAtt_InfernalWish.ShieldAugAtt_InfernalWish_C
// 0x0000 (0x0198 - 0x0198)
class UShieldAugAtt_InfernalWish_C : public UShieldAugment_Attribute
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAugAtt_InfernalWish.ShieldAugAtt_InfernalWish_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
