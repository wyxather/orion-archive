#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_JAK_Fakobs_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectileComponent_JAK_Fakobs.BPWeaponFireProjectileComponent_JAK_Fakobs_C
// 0x0008 (0x0988 - 0x0980)
class UBPWeaponFireProjectileComponent_JAK_Fakobs_C : public UWeaponJAKFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0980(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_JAK_Fakobs.BPWeaponFireProjectileComponent_JAK_Fakobs_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void UsedWeapon(unsigned char InputChannel);
	void ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Fakobs(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
