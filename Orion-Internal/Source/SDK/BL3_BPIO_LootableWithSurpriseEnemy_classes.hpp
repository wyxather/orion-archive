#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_LootableWithSurpriseEnemy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPIO_LootableWithSurpriseEnemy.BPIO_LootableWithSurpriseEnemy_C
// 0x006C (0x0920 - 0x08B4)
class ABPIO_LootableWithSurpriseEnemy_C : public ABPIO_Lootable_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B8(0x0008) (Transient, DuplicateTransient)
	class UGbxChildActorComponent*                     Spawner;                                                  // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BlackFog_Plane;                                           // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameplayTasksComponent*                     GameplayTasks;                                            // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        Enemy_Percent_Text;                                       // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        Enemy_Helper_Text;                                        // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TL_BlackFog_Fade_FadeAlpha_48D709F84153C38A6A435484D100EE4C;// 0x08E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_BlackFog_Fade__Direction_48D709F84153C38A6A435484D100EE4C;// 0x08EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_BlackFog_Fade;                                         // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpawnOptionData*                            SurpriseEnemySpawnOption;                                 // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldSpawnEnemy;                                         // 0x0900(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0901(0x0003) MISSED OFFSET
	float                                              EnemySpawnChance;                                         // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BlackFogMati;                                             // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlackFogFadeDuration;                                     // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldUseBlackFog;                                        // 0x0914(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0915(0x0003) MISSED OFFSET
	float                                              BlackFogLerpFrom;                                         // 0x0918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlackFogLerpTo;                                           // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPIO_LootableWithSurpriseEnemy.BPIO_LootableWithSurpriseEnemy_C");
		return ptr;
	}


	void SetupSpawner();
	void UserConstructionScript();
	void TL_BlackFog_Fade__FinishedFunc();
	void TL_BlackFog_Fade__UpdateFunc();
	void CE_LerpBlackFog();
	void OnEnabling();
	void ExecuteUbergraph_BPIO_LootableWithSurpriseEnemy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
