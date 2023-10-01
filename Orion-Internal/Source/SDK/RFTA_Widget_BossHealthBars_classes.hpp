#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_BossHealthBars_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_BossHealthBars.Widget_BossHealthBars_C
// 0x0017 (0x0260 - 0x0249)
class UWidget_BossHealthBars_C : public UWidget_UserWidget_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                List;                                                     // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_BossHealthBars.Widget_BossHealthBars_C");
		return ptr;
	}


	void RemoveBoss(class ACharacterGunfire** Character);
	void AddBoss(class ACharacterGunfire** Character);
	void Construct();
	void OnBossRelevant_Event_1(class ACharacterGunfire** Character);
	void OnBossNotRelevant_Event_1(class ACharacterGunfire** Character);
	void ExecuteUbergraph_Widget_BossHealthBars(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
