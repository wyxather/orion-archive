#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Splitter_ChampionClone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Root_Splitter_ChampionClone.Character_Root_Splitter_ChampionClone_C
// 0x0008 (0x0D48 - 0x0D40)
class ACharacter_Root_Splitter_ChampionClone_C : public ACharacter_Root_Splitter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Root_Splitter_ChampionClone.Character_Root_Splitter_ChampionClone_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnNotifyTakeDamage_Event_1(struct FDamageInfo* DamageInfo);
	void ExecuteUbergraph_Character_Root_Splitter_ChampionClone(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
