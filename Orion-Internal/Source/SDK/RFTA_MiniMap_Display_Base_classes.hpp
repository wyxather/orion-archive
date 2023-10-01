#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_MiniMap_Display_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MiniMap_Display_Base.MiniMap_Display_Base_C
// 0x0020 (0x0490 - 0x0470)
class AMiniMap_Display_Base_C : public ARemnantMiniMapDisplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ACharacter_Master_Player_C*                  Player;                                                   // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Map_Initialized;                                          // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MiniMap_Display_Base.MiniMap_Display_Base_C");
		return ptr;
	}


	void Toggle_Mini_Map();
	void OnInit(class ACharacter_Master_Player_C** Player, class AActor** MiniMapRefActor);
	void ExecuteUbergraph_MiniMap_Display_Base(int* EntryPoint);
	void Map_Initialized__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
