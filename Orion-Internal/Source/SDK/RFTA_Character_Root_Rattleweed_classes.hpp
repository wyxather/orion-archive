#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Rattleweed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Character_Root_Rattleweed.Character_Root_Rattleweed_C
// 0x4E00 (0x58B0 - 0x0AB0)
class UCharacter_Root_Rattleweed_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BBF3EB40494CF30F86563EBBC50491EA;      // 0x0AB8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0AD8(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9784B6EB40E8815F3E8F45AFD14880C8;// 0x0AE0(0x0310)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_EED74C764B00788C9F62C19DCD2F8FE0;// 0x0DF0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_47766CFF42037D27974918908539A0A3;// 0x0E10(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_613F9CFA4A7900B47DE29993ACF2C05A;// 0x0E30(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_403CC4D9404D20CEB691249B8BAD3257;// 0x1140(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1A26061E41BF74EF6FFBE7AC5D73245D;// 0x1450(0x0310)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_B060A8EA480179794CB634917F624624;// 0x1760(0x03C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_003E742844053DDACB1ACAA598572966;      // 0x1B20(0x0048)
	unsigned char                                      UnknownData01[0x8];                                       // 0x1B68(0x0008) MISSED OFFSET
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B80F43364D20A107A29D5F973E1D130E;// 0x1B70(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C46AC1FE4D72C66D6876BE833AFDF9AB;// 0x1E80(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_77075CC64DD271D9E6C63F9C36E8466C;// 0x2190(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_96D4D4334D28DFB171226195B7E83497;// 0x24A0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C9413E8D4B83FBFADD041F9A2C04756B;// 0x27B0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3ED7FC944185728778CF50976BF3F4F9;// 0x2AC0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D20B05664E769C5EAD2B719088A02A0F;// 0x2DD0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AE07779544DE158E707563BE38D9DB64;// 0x30E0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_ADEC0A704155AFA4F0870E8CDE0DC76B;// 0x33F0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_967D79E74EEA7640982A9B88AD4D5CC8;// 0x3700(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EA44F18F4CD016ADF4D117BFA07D4CD1;// 0x3A10(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_E42BCED54AE30AC6EB419780D814FA02;// 0x3D20(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3475874D4D4DC7AD71E99CB2FA331215;// 0x4030(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_327E8E604225B734760E97BFD3DCDA9C;// 0x4340(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1A1A34A74A87BF89479D5EBBAE0BC094;// 0x4650(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_91799BEA45E438672CFE52AC0944F917;// 0x4960(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_4BE5FF49466998DFFB332889CD054994;// 0x4C70(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_702201AD4C197353A33FD18B6E20E958;// 0x4F80(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_86100FF24EAFAF2B5E7BAE9EACCF3FD1;// 0x5290(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BC47DF7C4DAAF7CE135F7E963E069CA4;// 0x55A0(0x0310)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Root_Rattleweed.Character_Root_Rattleweed_C");
		return ptr;
	}


	void ExecuteUbergraph_Character_Root_Rattleweed(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
