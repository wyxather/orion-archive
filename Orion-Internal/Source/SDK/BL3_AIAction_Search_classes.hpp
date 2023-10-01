#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_Search_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AIAction_Search.AIAction_Search_C
// 0x0008 (0x01F0 - 0x01E8)
class UAIAction_Search_C : public UAIAction_Sequence
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01E8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AIAction_Search.AIAction_Search_C");
		return ptr;
	}


	void ExecuteUbergraph_AIAction_Search(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
