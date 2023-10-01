#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_StopAction_Bleed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_StopAction_Bleed.Action_StopAction_Bleed_C
// 0x0008 (0x0250 - 0x0248)
class UAction_StopAction_Bleed_C : public UAction_StopAction_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_StopAction_Bleed.Action_StopAction_Bleed_C");
		return ptr;
	}


	void Stop_Action(class UClass** ActionBP);
	void ExecuteUbergraph_Action_StopAction_Bleed(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
