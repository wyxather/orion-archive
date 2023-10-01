#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Wasteland_Defiler_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Weapon_Wasteland_Defiler_AnimBP.Weapon_Wasteland_Defiler_AnimBP_C
// 0x03E8 (0x0E98 - 0x0AB0)
class UWeapon_Wasteland_Defiler_AnimBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E008C2D942A0B3D0F5156A80FB635867;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_C9B9A360429DB6215DAE46B80B511660;// 0x0AD8(0x03C0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Weapon_Wasteland_Defiler_AnimBP.Weapon_Wasteland_Defiler_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Weapon_Wasteland_Defiler_AnimBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
