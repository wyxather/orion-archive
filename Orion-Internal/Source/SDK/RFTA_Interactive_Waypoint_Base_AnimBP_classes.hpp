#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_Waypoint_Base_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Interactive_Waypoint_Base_AnimBP.Interactive_Waypoint_Base_AnimBP_C
// 0x03E8 (0x0E98 - 0x0AB0)
class UInteractive_Waypoint_Base_AnimBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D7851EF743A92DECBF887DB795B08067;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_B1470CB04F50D024F516B39FE785C5F8;// 0x0AD8(0x03C0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Interactive_Waypoint_Base_AnimBP.Interactive_Waypoint_Base_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Interactive_Waypoint_Base_AnimBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
