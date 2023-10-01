#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Atoll_Repulsor_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Weapon_Atoll_Repulsor_AnimsBP.Weapon_Atoll_Repulsor_AnimsBP_C
// 0x03E8 (0x0E98 - 0x0AB0)
class UWeapon_Atoll_Repulsor_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_98FDF954440134F7E03638963A89AAE3;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_3319E3E64EF0855D472BF69FEA0C190E;// 0x0AD8(0x03C0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Weapon_Atoll_Repulsor_AnimsBP.Weapon_Atoll_Repulsor_AnimsBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Weapon_Atoll_Repulsor_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
