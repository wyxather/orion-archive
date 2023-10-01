#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Character_Root_Wraith_Screamer_Sound_Awareness_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Character_Root_Wraith_Screamer_Sound_Awareness.Action_Character_Root_Wraith_Screamer_Sound_Awareness_C
// 0x000C (0x0240 - 0x0234)
class UAction_Character_Root_Wraith_Screamer_Sound_Awareness_C : public UAction_Sound_Awareness_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Character_Root_Wraith_Screamer_Sound_Awareness.Action_Character_Root_Wraith_Screamer_Sound_Awareness_C");
		return ptr;
	}


	void OnActionStart();
	void ExecuteUbergraph_Action_Character_Root_Wraith_Screamer_Sound_Awareness(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
