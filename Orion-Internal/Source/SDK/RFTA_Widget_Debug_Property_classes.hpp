#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Debug_Property_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_Debug_Property.Widget_Debug_Property_C
// 0x0048 (0x0288 - 0x0240)
class UWidget_Debug_Property_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  PropertyName;                                             // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  PropertyValue;                                            // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Name;                                                     // 0x0258(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       Value;                                                    // 0x0270(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Debug_Property.Widget_Debug_Property_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_Widget_Debug_Property(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
