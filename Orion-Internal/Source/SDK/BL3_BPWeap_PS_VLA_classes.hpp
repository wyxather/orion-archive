#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_PS_VLA_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_PS_VLA.BPWeap_PS_VLA_C
// 0x0010 (0x09E8 - 0x09D8)
class ABPWeap_PS_VLA_C : public ABPWeap_VLA_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09D8(0x0008) (Transient, DuplicateTransient)
	class UWeaponAmmoPoolComponent*                    AmmoPool_Mode2;                                           // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_PS_VLA.BPWeap_PS_VLA_C");
		return ptr;
	}


	void UserConstructionScript();
	void ModeSwitchStarted();
	void Notify_ReloadStarted(bool* bAutoReload);
	void ExecuteUbergraph_BPWeap_PS_VLA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
