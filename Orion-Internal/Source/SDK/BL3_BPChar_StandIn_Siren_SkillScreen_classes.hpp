#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_StandIn_Siren_SkillScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C
// 0x0008 (0x23A8 - 0x23A0)
class ABPChar_StandIn_Siren_SkillScreen_C : public ABPChar_StandIn_Siren_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x23A0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C");
		return ptr;
	}


	void UserConstructionScript();
	void UnhideCharacterArms();
	void HideCharacterArms();
	void ExecuteUbergraph_BPChar_StandIn_Siren_SkillScreen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
