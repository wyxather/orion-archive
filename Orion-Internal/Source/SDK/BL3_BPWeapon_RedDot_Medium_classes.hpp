#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeapon_RedDot_Medium_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeapon_RedDot_Medium.BPWeapon_RedDot_Medium_C
// 0x0008 (0x03E8 - 0x03E0)
class UBPWeapon_RedDot_Medium_C : public UWeaponRedDotComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeapon_RedDot_Medium.BPWeapon_RedDot_Medium_C");
		return ptr;
	}


	void ExecuteUbergraph_BPWeapon_RedDot_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
