#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_TinkLoot_HoleGround_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ASpawn_TinkLoot_HoleGround.ASpawn_TinkLoot_HoleGround_C
// 0x0028 (0x01E8 - 0x01C0)
class UASpawn_TinkLoot_HoleGround_C : public UGbxAction_SpawnAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C0(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x01C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FWwisePlaybackInstance                      BurrowUpSound;                                            // 0x01D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ASpawn_TinkLoot_HoleGround.ASpawn_TinkLoot_HoleGround_C");
		return ptr;
	}


	void StopDigAudio();
	void OnServerBegin(class AActor** Actor);
	void OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_ASpawn_TinkLoot_HoleGround(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
