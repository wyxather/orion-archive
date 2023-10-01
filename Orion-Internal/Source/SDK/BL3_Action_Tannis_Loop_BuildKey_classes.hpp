#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Tannis_Loop_BuildKey_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Tannis_Loop_BuildKey.Action_Tannis_Loop_BuildKey_C
// 0x0008 (0x03C0 - 0x03B8)
class UAction_Tannis_Loop_BuildKey_C : public UGbxAction_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Tannis_Loop_BuildKey.Action_Tannis_Loop_BuildKey_C");
		return ptr;
	}


	void VaultKeyCreated();
	void ExecuteUbergraph_Action_Tannis_Loop_BuildKey(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
