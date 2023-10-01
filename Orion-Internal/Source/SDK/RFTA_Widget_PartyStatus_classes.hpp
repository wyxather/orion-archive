#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_PartyStatus_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_PartyStatus.Widget_PartyStatus_C
// 0x0019 (0x0262 - 0x0249)
class UWidget_PartyStatus_C : public UWidget_UserWidget_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                PartyList;                                                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               ChatOnly;                                                 // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HasInit;                                                  // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_PartyStatus.Widget_PartyStatus_C");
		return ptr;
	}


	void PlayerLeft(class APlayerState** Player);
	void PlayerJoined(class APlayerState** Player);
	void OnPlayerJoined_Event_1(class APlayerState** Player);
	void OnPlayerLeft_Event_1(class APlayerState** Player);
	void RebuildList();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void Init();
	void TryInit();
	void Construct();
	void ExecuteUbergraph_Widget_PartyStatus(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
