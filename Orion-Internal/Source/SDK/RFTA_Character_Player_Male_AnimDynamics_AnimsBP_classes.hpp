#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Player_Male_AnimDynamics_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Character_Player_Male_AnimDynamics_AnimsBP.Character_Player_Male_AnimDynamics_AnimsBP_C
// 0x30E0 (0x3B90 - 0x0AB0)
class UCharacter_Player_Male_AnimDynamics_AnimsBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E0D475094B2337763CAA7B8A68E2E283;      // 0x0AB8(0x0020)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_207FF8B540AF47E050F93BB5377B263C;  // 0x0AD8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_862A653E484B440FA7EB20BE6782B1C5;// 0x0B20(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9A50A6474808CA186B018C9E82ECED7D;// 0x0B40(0x0020)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_D3929C7E427A9BF6AFFD98BAD63FEA55; // 0x0B60(0x0550)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1C024EE243AEEBDA96849D99DC237B02;// 0x10B0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B0DA6D9041E13F07108A2681363A6BED;// 0x13C0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C8E030BA4D394079A2D6A8AB5661DD8B;// 0x16D0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_0C587E614AEA197ADF551BAECA089469;// 0x19E0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F4E8824E45007AA498739184E8C109CD;// 0x1CF0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_057203264E4FEA6B7DE5E6AA68C8E8F8;// 0x2000(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F570865E490454DF292535A061DC8D2F;// 0x2310(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DA02ACE543ADE1F611A2E088C5F10B13;// 0x2620(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_857113D249673FB2B4E67AB8ABA0E299;// 0x2930(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_33A03ADB4B6A5E4A1E5FC4BDCD799589;// 0x2C40(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BE2B6D5C4D8471CEA54701BB50695980;// 0x2F50(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_FE6E05D642781B5628BBFFB50BC9B84E;// 0x3260(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5F540E204F0FB1DE4C4445B3398C7232;// 0x3570(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4541B1E546E80BB0BA921899BA05D0A2;// 0x3880(0x0310)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Player_Male_AnimDynamics_AnimsBP.Character_Player_Male_AnimDynamics_AnimsBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Character_Player_Male_AnimDynamics_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
