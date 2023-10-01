#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SG_JAK_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_SG_JAK.BPWeap_SG_JAK_C
// 0x0008 (0x0A08 - 0x0A00)
class ABPWeap_SG_JAK_C : public ABPWeap_Jakobs_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A00(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_SG_JAK.BPWeap_SG_JAK_C");
		return ptr;
	}


	void UserConstructionScript();
	void Notify_ReloadEnded(bool* bCompleted);
	void ResetVisibleAmmo();
	void ExecuteUbergraph_BPWeap_SG_JAK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
