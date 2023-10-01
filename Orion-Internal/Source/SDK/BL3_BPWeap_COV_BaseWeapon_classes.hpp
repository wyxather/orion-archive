#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_COV_BaseWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C
// 0x0014 (0x09E0 - 0x09CC)
class ABPWeap_COV_BaseWeapon_C : public ABPWeap_BaseWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x09CC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09D0(0x0008) (Transient, DuplicateTransient)
	struct FName                                       Bone_WaterCool;                                           // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C");
		return ptr;
	}


	void DisableWaterBottle();
	void EnableWaterBottle();
	void GetRepairStyle(int* Param);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void WeaponOnFire();
	void WeaponPutOut();
	void WeaponSmokeStop();
	void FirstPersonCreated();
	void EngineStart();
	void Notify_ReloadEnded(bool* bCompleted);
	void StarterSparks();
	void WeaponStartWatering();
	void ExecuteUbergraph_BPWeap_COV_BaseWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
