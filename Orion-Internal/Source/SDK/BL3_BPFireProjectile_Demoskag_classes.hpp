#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPFireProjectile_Demoskag_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPFireProjectile_Demoskag.BPFireProjectile_Demoskag_C
// 0x0008 (0x0960 - 0x0958)
class UBPFireProjectile_Demoskag_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPFireProjectile_Demoskag.BPFireProjectile_Demoskag_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void CheckTimeOfDay();
	void ExecuteUbergraph_BPFireProjectile_Demoskag(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
