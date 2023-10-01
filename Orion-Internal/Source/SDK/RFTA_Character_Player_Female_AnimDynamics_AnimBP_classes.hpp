#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Player_Female_AnimDynamics_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Character_Player_Female_AnimDynamics_AnimBP.Character_Player_Female_AnimDynamics_AnimBP_C
// 0x4030 (0x4AE0 - 0x0AB0)
class UCharacter_Player_Female_AnimDynamics_AnimBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_10211E6344C8DBF0FCEECB9168CDB211;      // 0x0AB8(0x0020)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_66C7F3F14ABBE2B5C504FDA9FC110608;  // 0x0AD8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_626EC8684410AD99EDDE2BBC8D12066A;// 0x0B20(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_29FEE8534D2179121AFB498FB920724F;// 0x0B40(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_6084B33647D2F4FF53A3D1A5144C8A96;// 0x0E50(0x0310)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_0D2CDA4347C644263BD6E1A66B37D1B6; // 0x1160(0x0550)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_F677F5F24851D3E30EFC689616A09E3B;// 0x16B0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B0403025455E7E333FB5E895766079C5;// 0x19C0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_10C46F754C05BB218ACB2DAE6A364CBE;// 0x1CD0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CB3061084B15F0A9A4E548A6E44EF204;// 0x1FE0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_781A81914CE9ECE2D680FC9DBD53E67B;// 0x22F0(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EACD9E094F41A6871B6A7C8B5C90206F;// 0x2600(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_92BA70EF419791880D7FC1B1217C274C;// 0x2910(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_91A3494A4283CC24FC047CB77292B5A0;// 0x2C20(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_5B9989E44C17A3E06DD6B78CCA325238;// 0x2F30(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8A34AFCC4E7F09A62A4326BD4F9EBB21;// 0x3240(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3FB47AD644C63D9C62577792C41718A6;// 0x3550(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BC14AD4C463DE23DB8FCD7A91D38DDDD;// 0x3860(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_33B2B908469D5F8B22C67C835EB7BB3C;// 0x3B70(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2D39148B494354A8CEC3539D316C801E;// 0x3E80(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_77144C2143ACDB14964E81BA20616761;// 0x4190(0x0310)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_145E99CD4E5A419EA1638BB50560353F;// 0x44A0(0x0310)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_52A4B5544438EDB9F92BBE82C19C23E8;// 0x47B0(0x0020)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_552345DD49313E5F0ECB63A6A878FE8B;// 0x47D0(0x0310)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Player_Female_AnimDynamics_AnimBP.Character_Player_Female_AnimDynamics_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Character_Player_Female_AnimDynamics_AnimBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
