#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_HW_TOR_BaseWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_HW_TOR_BaseWeapon.BPWeap_HW_TOR_BaseWeapon_C
// 0x000F (0x0A00 - 0x09F1)
class ABPWeap_HW_TOR_BaseWeapon_C : public ABPWeap_Torgue_BaseWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x09F1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09F8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_HW_TOR_BaseWeapon.BPWeap_HW_TOR_BaseWeapon_C");
		return ptr;
	}


	void VisibleAmmoUpdate();
	void ShowRocketBone();
	void HideRocketBone();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HideRocket();
	void ExecuteUbergraph_BPWeap_HW_TOR_BaseWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
