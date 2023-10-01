#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCont_Tink_Turret_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPCont_Tink_Turret.BPCont_Tink_Turret_C
// 0x000F (0x0780 - 0x0771)
class ABPCont_Tink_Turret_C : public ABPCont_Enemy_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0771(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0778(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPCont_Tink_Turret.BPCont_Tink_Turret_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__Targeting_K2Node_ComponentBoundEvent_2_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_Tink_Turret(class UTargetingComponent* TargetingComponent);
	void ExecuteUbergraph_BPCont_Tink_Turret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
