#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Wasteland_ParticleAccelerator_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Weapon_Wasteland_ParticleAccelerator_AnimsBP.Weapon_Wasteland_ParticleAccelerator_AnimsBP_C
// 0x03E8 (0x0E98 - 0x0AB0)
class UWeapon_Wasteland_ParticleAccelerator_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_00419DE746B1F9B67F384DA2C8236170;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_B18660714EF05F502BCC0984F3D4BAA6;// 0x0AD8(0x03C0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Weapon_Wasteland_ParticleAccelerator_AnimsBP.Weapon_Wasteland_ParticleAccelerator_AnimsBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Weapon_Wasteland_ParticleAccelerator_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
