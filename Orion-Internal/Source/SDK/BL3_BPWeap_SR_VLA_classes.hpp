#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SR_VLA_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_SR_VLA.BPWeap_SR_VLA_C
// 0x0008 (0x09E0 - 0x09D8)
class ABPWeap_SR_VLA_C : public ABPWeap_VLA_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09D8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_SR_VLA.BPWeap_SR_VLA_C");
		return ptr;
	}


	void OnPutDown();
	void OnSwitchedMode();
	void OnEquipped();
	void UpdateResourceLocks(bool Enable);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void Weapon_NotifyPutDown(class AWeapon* EventWeapon);
	void ExecuteUbergraph_BPWeap_SR_VLA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
