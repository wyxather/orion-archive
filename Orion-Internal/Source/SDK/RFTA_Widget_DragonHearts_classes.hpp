#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_DragonHearts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_DragonHearts.Widget_DragonHearts_C
// 0x001C (0x025C - 0x0240)
class UWidget_DragonHearts_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              DragonHearts;                                             // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ACharacterGunfire*                           Character;                                                // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int                                                PrevQuantity;                                             // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_DragonHearts.Widget_DragonHearts_C");
		return ptr;
	}


	void RefreshDragonHearts(class AItem** DragonHearts);
	void RefreshCharacter();
	void Construct();
	void InitCharacter(class ACharacterGunfire** NewCharacter);
	void Destruct();
	void ExecuteUbergraph_Widget_DragonHearts(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
