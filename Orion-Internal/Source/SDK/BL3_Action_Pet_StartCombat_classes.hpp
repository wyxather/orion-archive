#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Pet_StartCombat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Pet_StartCombat.Action_Pet_StartCombat_C
// 0x0008 (0x0220 - 0x0218)
class UAction_Pet_StartCombat_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Pet_StartCombat.Action_Pet_StartCombat_C");
		return ptr;
	}


	void Notify_Dialog();
	void ExecuteUbergraph_Action_Pet_StartCombat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
