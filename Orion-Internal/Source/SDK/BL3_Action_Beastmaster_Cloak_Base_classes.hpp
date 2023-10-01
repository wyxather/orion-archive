#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Beastmaster_Cloak_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C
// 0x0008 (0x0270 - 0x0268)
class UAction_Beastmaster_Cloak_Base_C : public UOakAction_Anim_ActionAbility_Pet_Spiderant
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Beastmaster_Cloak_Base.Action_Beastmaster_Cloak_Base_C");
		return ptr;
	}


	void Notify_Stealth();
	void Notify_StealthFeedback();
	void ExecuteUbergraph_Action_Beastmaster_Cloak_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
