#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Pan_CurseOfTheJungleGod_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Weapon_Pan_CurseOfTheJungleGod_AnimsBP.Weapon_Pan_CurseOfTheJungleGod_AnimsBP_C
// 0x03E8 (0x0E98 - 0x0AB0)
class UWeapon_Pan_CurseOfTheJungleGod_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4F3F3BB8404DEA633C51C8A60C72EB0E;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_5D95E25244C7B045F76BC6B05AEB2F3E;// 0x0AD8(0x03C0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Weapon_Pan_CurseOfTheJungleGod_AnimsBP.Weapon_Pan_CurseOfTheJungleGod_AnimsBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Weapon_Pan_CurseOfTheJungleGod_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
