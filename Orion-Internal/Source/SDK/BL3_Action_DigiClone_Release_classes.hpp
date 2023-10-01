#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_DigiClone_Release_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_DigiClone_Release.Action_DigiClone_Release_C
// 0x0008 (0x0268 - 0x0260)
class UAction_DigiClone_Release_C : public UAction_DigiClone_Death_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_DigiClone_Release.Action_DigiClone_Release_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_Action_DigiClone_Release(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
