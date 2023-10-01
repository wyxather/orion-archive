#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_RemnantSaveGameProfile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RemnantSaveGameProfile.BP_RemnantSaveGameProfile_C
// 0x0006 (0x0136 - 0x0130)
class UBP_RemnantSaveGameProfile_C : public URemnantSaveGameProfile
{
public:
	int                                                LoadscreenTipIndex;                                       // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RunAutoVisSetting;                                        // 0x0134(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	ELastSearchType                                    PublicSearchType;                                         // 0x0135(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RemnantSaveGameProfile.BP_RemnantSaveGameProfile_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
