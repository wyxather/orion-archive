#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Rock_Formation_Pile_Eridian_Small_B_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PD_Rock_Formation_Pile_Eridian_Small_B.PD_Rock_Formation_Pile_Eridian_Small_B_C
// 0x0008 (0x05D0 - 0x05C8)
class APD_Rock_Formation_Pile_Eridian_Small_B_C : public APD_Rock_Formation_Pile_Eridian_Small_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PD_Rock_Formation_Pile_Eridian_Small_B.PD_Rock_Formation_Pile_Eridian_Small_B_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__DestructibleComponent_K2Node_ComponentBoundEvent_1_ComponentFractureSignature__DelegateSignature_PD_Rock_Formation_Pile_Eridian_Small_A(const struct FVector& HitPoint, const struct FVector& HitDirection);
	void ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Small_B(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
