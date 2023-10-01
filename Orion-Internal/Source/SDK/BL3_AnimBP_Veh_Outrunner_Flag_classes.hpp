#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AnimBP_Veh_Outrunner_Flag_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AnimBP_Veh_Outrunner_Flag.AnimBP_Veh_Outrunner_Flag_C
// 0x0800 (0x0C40 - 0x0440)
class UAnimBP_Veh_Outrunner_Flag_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_EB41F2374A25257BFA354693A29B19A1;      // 0x0448(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_E48C0B5945443E6C3025AF9C320359F4;// 0x0490(0x0030)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A0B4A845416D99946E84068314C268D8;// 0x04C0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0508(0x0008) MISSED OFFSET
	struct FGbxAnimNode_ForwardDynamics                GbxAnimGraphNode_ForwardDynamics_3F4DBA6C4DC231A62B8E9A83FB733BD5;// 0x0510(0x0730)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AnimBP_Veh_Outrunner_Flag.AnimBP_Veh_Outrunner_Flag_C");
		return ptr;
	}


	void ExecuteUbergraph_AnimBP_Veh_Outrunner_Flag(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
