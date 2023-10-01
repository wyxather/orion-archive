#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_CineOnly_Skag_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_CineOnly_Skag.BPAnim_CineOnly_Skag_C
// 0x0B80 (0x0FC0 - 0x0440)
class UBPAnim_CineOnly_Skag_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6F0CD3694DD78C08128A4B8DD95AF781;      // 0x0448(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_927C7E2E48D531B6D1B41CB3BDAC15BA;      // 0x0490(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F86289BE474F5EE043A54396D8BE9E2C;// 0x0540(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A1374A1A420B9ABE06B79B9AB3CA2386;// 0x0588(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F6B81ABA455DF368E759479504016BFB;      // 0x05D0(0x00B0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_EF31ACD246B9EDDB23D4C1AE2DEEF116;// 0x0680(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x06B8(0x0008) MISSED OFFSET
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_07285A564496B143F06B7C80931A2F22;    // 0x06C0(0x0240)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_6D1F82404650614A8C3265935D5CA2C9;    // 0x0900(0x0240)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_248A99424EDD3995DC217299598A1E4A;    // 0x0B40(0x0240)
	struct FAnimNode_Fabrik                            AnimGraphNode_Fabrik_7922FAAA4EEC139B159924A33171BFEC;    // 0x0D80(0x0240)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_CineOnly_Skag.BPAnim_CineOnly_Skag_C");
		return ptr;
	}


	void ExecuteUbergraph_BPAnim_CineOnly_Skag(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
