#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SR_JAK_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_SR_JAK.BPWeap_SR_JAK_C
// 0x0008 (0x0A08 - 0x0A00)
class ABPWeap_SR_JAK_C : public ABPWeap_Jakobs_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A00(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_SR_JAK.BPWeap_SR_JAK_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void HideMag();
	void ShowAmmo();
	void HideAmmo();
	void Fire_Rotate();
	void RotationReset();
	void Notify_ReloadEnded(bool* bCompleted);
	void ExecuteUbergraph_BPWeap_SR_JAK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
