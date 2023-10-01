#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_RepeaterPistol_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Weapon_RepeaterPistol_AnimsBP.Weapon_RepeaterPistol_AnimsBP_C
// 0x03E8 (0x0E98 - 0x0AB0)
class UWeapon_RepeaterPistol_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5CA1C7C2477A8C873FD4E6B7280E2D6B;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_DD75B28F433CF65D069530A18574FE25;// 0x0AD8(0x03C0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Weapon_RepeaterPistol_AnimsBP.Weapon_RepeaterPistol_AnimsBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Weapon_RepeaterPistol_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
