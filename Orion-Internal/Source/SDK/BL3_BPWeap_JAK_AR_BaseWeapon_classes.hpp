#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_JAK_AR_BaseWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C
// 0x0010 (0x0A10 - 0x0A00)
class ABPWeap_JAK_AR_BaseWeapon_C : public ABPWeap_Jakobs_BaseWeapon_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A00(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_JAK_AR_BaseWeapon.BPWeap_JAK_AR_BaseWeapon_C");
		return ptr;
	}


	void UserConstructionScript();
	void Notify_ReloadStarted(bool* bAutoReload);
	void ReceiveBeginPlay();
	void AttachAudioComponentToClip();
	void ExecuteUbergraph_BPWeap_JAK_AR_BaseWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
