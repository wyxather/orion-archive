#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAnim_VehiclePart_Booster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BPAnim_VehiclePart_Booster.BPAnim_VehiclePart_Booster_C
// 0x0AD0 (0x2610 - 0x1B40)
class UBPAnim_VehiclePart_Booster_C : public UOutrunnerVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1B40(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_743F470C451C9ABC3D4EA69FBE521BA8;      // 0x1B48(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_EE568A024D15081CCB678796F05E165D;// 0x1B90(0x0038)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1BC8(0x0008) MISSED OFFSET
	struct FAnimNode_OutrunnerBooster                  AnimGraphNode_OutrunnerBooster_1030314A4028A51CCF542A9BB244FCA2;// 0x1BD0(0x09B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BC572E5245123E10E2E3A5B778ABCCFE;// 0x2580(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8FC392464C254F73C8483782FD02C341;// 0x25C8(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_VehiclePart_Booster.BPAnim_VehiclePart_Booster_C");
		return ptr;
	}


	void ExecuteUbergraph_BPAnim_VehiclePart_Booster(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
