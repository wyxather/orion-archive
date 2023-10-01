#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_TravelMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dialog_TravelMenu.Dialog_TravelMenu_C
// 0x000B (0x03E8 - 0x03DD)
class ADialog_TravelMenu_C : public ADialog_InGameBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	class AActor*                                      Parent;                                                   // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_TravelMenu.Dialog_TravelMenu_C");
		return ptr;
	}


	void SetContext(class AActor** Context, class UUserWidget** ParentWidget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
