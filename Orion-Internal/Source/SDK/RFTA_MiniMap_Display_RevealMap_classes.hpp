#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_MiniMap_Display_RevealMap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C
// 0x0010 (0x04A0 - 0x0490)
class AMiniMap_Display_RevealMap_C : public AMiniMap_Display_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Bounds;                                                   // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MiniMap_Display_RevealMap.MiniMap_Display_RevealMap_C");
		return ptr;
	}


	void Has_MiniMap(bool* Success);
	void Set_Widget_MiniMap_Default_Visibility();
	void Init(class ACharacter_Master_Player_C** CharacterMasterPlayer);
	void Init_HUD();
	void ReceiveBeginPlay();
	void Map_Initialized_Event_1();
	void ReceiveTick(float* DeltaSeconds);
	void FoW_Initialized();
	void MapInitEventBound();
	void SetMiniMapMode(EMiniMapMode* Mode);
	void ExecuteUbergraph_MiniMap_Display_RevealMap(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
