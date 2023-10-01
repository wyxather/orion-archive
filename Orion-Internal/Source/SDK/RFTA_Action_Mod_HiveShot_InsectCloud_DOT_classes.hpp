#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_HiveShot_InsectCloud_DOT_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Mod_HiveShot_InsectCloud_DOT.Action_Mod_HiveShot_InsectCloud_DOT_C
// 0x004B (0x0338 - 0x02ED)
class UAction_Mod_HiveShot_InsectCloud_DOT_C : public UAction_DOT_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Count;                                                    // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PowerOverride;                                            // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               AddAction;                                                // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0301(0x0007) MISSED OFFSET
	class UClass*                                      Action;                                                   // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              SpreadRange;                                              // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0314(0x0004) MISSED OFFSET
	struct FTimerHandle                                TickSpreadHandle;                                         // 0x0318(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                SourceCount;                                              // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    InsectVFX;                                                // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             InsectSFX;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_HiveShot_InsectCloud_DOT.Action_Mod_HiveShot_InsectCloud_DOT_C");
		return ptr;
	}


	bool AllowAction(class UClass** ActionBP, struct FDamageInfo* InDamageInfo);
	void RefreshDuration(class ACharacterGunfire** Character);
	void OnActionStart();
	void TickSpread();
	void OnActionStop();
	void ExecuteUbergraph_Action_Mod_HiveShot_InsectCloud_DOT(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
