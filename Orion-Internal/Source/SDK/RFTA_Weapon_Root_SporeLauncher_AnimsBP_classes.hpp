#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Root_SporeLauncher_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Weapon_Root_SporeLauncher_AnimsBP.Weapon_Root_SporeLauncher_AnimsBP_C
// 0x03E8 (0x0E98 - 0x0AB0)
class UWeapon_Root_SporeLauncher_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E6E01275465046E94B29A2B7A6EABC08;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_484BFC544637E9AAD10816A91BFA2563;// 0x0AD8(0x03C0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Weapon_Root_SporeLauncher_AnimsBP.Weapon_Root_SporeLauncher_AnimsBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Weapon_Root_SporeLauncher_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
