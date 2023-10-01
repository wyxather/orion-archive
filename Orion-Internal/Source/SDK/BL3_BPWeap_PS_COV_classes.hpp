#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_PS_COV_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_PS_COV.BPWeap_PS_COV_C
// 0x0008 (0x09E8 - 0x09E0)
class ABPWeap_PS_COV_C : public ABPWeap_COV_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_PS_COV.BPWeap_PS_COV_C");
		return ptr;
	}


	void DisablePlug();
	void EnablePlug();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void FirstPersonCreated();
	void Notify_ReloadEnded(bool* bCompleted);
	void ExecuteUbergraph_BPWeap_PS_COV(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
