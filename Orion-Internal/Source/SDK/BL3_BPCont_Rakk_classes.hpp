#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCont_Rakk_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPCont_Rakk.BPCont_Rakk_C
// 0x000F (0x0780 - 0x0771)
class ABPCont_Rakk_C : public ABPCont_Enemy_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0771(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0778(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPCont_Rakk.BPCont_Rakk_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__Targeting_K2Node_ComponentBoundEvent_0_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_Rakk(class UTargetingComponent* TargetingComponent);
	void ReceiveBeginPlay();
	void Ambient_Shriek();
	void ExecuteUbergraph_BPCont_Rakk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
