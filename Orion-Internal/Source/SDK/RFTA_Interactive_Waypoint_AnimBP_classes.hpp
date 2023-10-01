#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_Waypoint_AnimBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Interactive_Waypoint_AnimBP.Interactive_Waypoint_AnimBP_C
// 0x03E8 (0x0E98 - 0x0AB0)
class UInteractive_Waypoint_AnimBP_C : public UAnimInstanceGunfire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8957924B4CFEE502A2E16E8CE686B679;      // 0x0AB8(0x0020)
	struct FAnimNode_BlendByAnimationID                AnimGraphNode_BlendByAnimationID_5AC09CB04C065C5330D1C6A54A788361;// 0x0AD8(0x03C0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Interactive_Waypoint_AnimBP.Interactive_Waypoint_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Interactive_Waypoint_AnimBP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
