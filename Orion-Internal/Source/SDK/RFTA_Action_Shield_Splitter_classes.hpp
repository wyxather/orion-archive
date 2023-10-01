#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Shield_Splitter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Shield_Splitter.Action_Shield_Splitter_C
// 0x0008 (0x0350 - 0x0348)
class UAction_Shield_Splitter_C : public UAction_Shield_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Shield_Splitter.Action_Shield_Splitter_C");
		return ptr;
	}


	void OnActionStop();
	void ExecuteUbergraph_Action_Shield_Splitter(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
