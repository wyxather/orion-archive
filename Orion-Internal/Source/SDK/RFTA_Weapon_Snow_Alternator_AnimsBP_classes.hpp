#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Snow_Alternator_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Weapon_Snow_Alternator_AnimsBP.Weapon_Snow_Alternator_AnimsBP_C
// 0x03E8 (0x0E98 - 0x0AB0)
class UWeapon_Snow_Alternator_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_53E00BE84E168037BDD9E4AFCEAFCBFF;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_8DC1482940A2E789B38D77B498C2958E;// 0x0AD8(0x03C0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Weapon_Snow_Alternator_AnimsBP.Weapon_Snow_Alternator_AnimsBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Weapon_Snow_Alternator_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
