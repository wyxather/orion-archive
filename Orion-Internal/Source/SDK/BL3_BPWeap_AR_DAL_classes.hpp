#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_AR_DAL_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_AR_DAL.BPWeap_AR_DAL_C
// 0x0008 (0x09E0 - 0x09D8)
class ABPWeap_AR_DAL_C : public ABPWeap_DAL_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09D8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_AR_DAL.BPWeap_AR_DAL_C");
		return ptr;
	}


	void UserConstructionScript();
	void ShowChainFeed();
	void Notify_ReloadEnded(bool* bCompleted);
	void HideChain();
	void ExecuteUbergraph_BPWeap_AR_DAL(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
