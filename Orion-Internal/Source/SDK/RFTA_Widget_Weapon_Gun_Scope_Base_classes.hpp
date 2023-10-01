#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Weapon_Gun_Scope_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_Weapon_Gun_Scope_Base.Widget_Weapon_Gun_Scope_Base_C
// 0x0010 (0x0250 - 0x0240)
class UWidget_Weapon_Gun_Scope_Base_C : public UUserWidget
{
public:
	class UImage*                                      ScopeView;                                                // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ARangedWeapon*                               RangedWeapon;                                             // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Weapon_Gun_Scope_Base.Widget_Weapon_Gun_Scope_Base_C");
		return ptr;
	}


	void Init(class ARangedWeapon** InRangedWeapon);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
