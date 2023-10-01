#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIActionTree_DigiClone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIActionTree_DigiClone.AIActionTree_DigiClone_C
// 0x0008 (0x0178 - 0x0170)
class UAIActionTree_DigiClone_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIActionTree_DigiClone.AIActionTree_DigiClone_C");
		return ptr;
	}


	void ExecuteUbergraph_AIActionTree_DigiClone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
