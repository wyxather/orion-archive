#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Priest_AnimsBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Character_Root_Priest_AnimsBP.Character_Root_Priest_AnimsBP_C
// 0x241C (0x2EFC - 0x0AE0)
class UCharacter_Root_Priest_AnimsBP_C : public URemnantAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7DBC53E74B28CB8D0767C0A3BB119201;// 0x0AE8(0x00B8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1F8A61FC4DCD031801D4F5909225505A;      // 0x0BA0(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AAA4FDB9453F74F794A940AC024D18A2;      // 0x0BE8(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_F7B93A8549901755D466C0AF2818C081;// 0x0C30(0x00B8)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_12ED96F141360D44DD1795A06DF5C47C;// 0x0CE8(0x03C0)
	struct FAnimNode_BlendByAnimTags                   AnimGraphNode_BlendByAnimTags_604FB7BC45C01BB6AC6F5EB2C02CEEF7;// 0x10A8(0x00C8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C7AA05FD4C7105BE27806595B42F6229;// 0x1170(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FA2EE5C24D7E16FF9B619085D09429BB;// 0x1198(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_E44B976741E0752B3F442B805C3CD129;// 0x11C0(0x0188)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C77503384A8D83ABA086BA922FC62B68;// 0x1348(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8145CD2F4F47B0EA89B35B996D268867;// 0x1400(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B0FA0EED40A322AFE82C48AE90D4ABE6;// 0x1428(0x0028)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5795524C463422E4B0BE19B8A7553D1B;// 0x1450(0x0310)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D6ABC3FB46A13F1F5AC97CA293FD044F;// 0x1760(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_866BE76C47D2AA8C9EEC0ABE38093264;// 0x1780(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B8AB561943B497752DA2C19A0B91C0C5;// 0x17A0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E26A3FFE4FEB52054346A4B9B0B8AF0C;// 0x1AB0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EE63429A44273A9A6302609182CE845A;// 0x1DC0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_412063ED45886521FA7220B8AA23952B;// 0x20D0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C768DA2A41424E7513F696BEFDB65CD7;// 0x23E0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A95524B642BB288682B82197D7F4B0B1;// 0x26F0(0x0310)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C2BBA52A420C7F1B2415398789CABF1D;// 0x2A00(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_90306EE84379A9BC87B42F85843B157E;// 0x2AA0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BFDA4E87404F5C25C3B77191B5B7374D;// 0x2AC8(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C1FA3AC94F4D1E820102E88F85C75353;// 0x2B68(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_D9C3963D4C893122ECB471BB87C075A2;// 0x2B90(0x0188)
	struct FAnimNode_Root                              AnimGraphNode_Root_E4BFA49645034EF12673E8A97B6400E2;      // 0x2D18(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_112794AA47C7A04D7E5600809636D682;// 0x2D38(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_BD121EA544D6DEE702958B8AEFE90D51;// 0x2E18(0x00E0)
	float                                              YawLimit;                                                 // 0x2EF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Root_Priest_AnimsBP.Character_Root_Priest_AnimsBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Character_Root_Priest_AnimsBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
