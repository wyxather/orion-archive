#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_WorldMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dialog_WorldMenu.Dialog_WorldMenu_C
// 0x0000 (0x03DD - 0x03DD)
class ADialog_WorldMenu_C : public ADialog_InGameBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_WorldMenu.Dialog_WorldMenu_C");
		return ptr;
	}


	void BeginSurvivalMode();
	void SetContext(class AActor** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
