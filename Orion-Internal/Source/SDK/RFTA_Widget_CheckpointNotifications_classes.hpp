#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_CheckpointNotifications_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_CheckpointNotifications.Widget_CheckpointNotifications_C
// 0x0017 (0x0260 - 0x0249)
class UWidget_CheckpointNotifications_C : public UWidget_UserWidget_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                List;                                                     // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_CheckpointNotifications.Widget_CheckpointNotifications_C");
		return ptr;
	}


	void MakePlayerIDAndName(class FString* PlayerName, class FString* Prefix, struct FName* NameID, struct FText* Name);
	void AddCustomNotification(struct FName* NameID, float* TimeOverride, struct FText* CustomText, class UTexture2D** CustomIcon);
	void ClearAllNotifications();
	void RemoveNotification(struct FName* NameID);
	void CanAddNotification(struct FName* NameID, bool* Out);
	void AddNotification(struct FName* NameID, float* TimeOverride);
	void Construct();
	void PlayerJoined(class FString* PlayerName);
	void PlayerLeft(class FString* PlayerName);
	void ExecuteUbergraph_Widget_CheckpointNotifications(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
