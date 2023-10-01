#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SG_Torgue_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_SG_Torgue.BPWeap_SG_Torgue_C
// 0x000F (0x0A00 - 0x09F1)
class ABPWeap_SG_Torgue_C : public ABPWeap_Torgue_BaseWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x09F1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09F8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_SG_Torgue.BPWeap_SG_Torgue_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HideSpeedLoader();
	void ResetBoneVisibility();
	void Notify_ReloadEnded(bool* bCompleted);
	void ExecuteUbergraph_BPWeap_SG_Torgue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
