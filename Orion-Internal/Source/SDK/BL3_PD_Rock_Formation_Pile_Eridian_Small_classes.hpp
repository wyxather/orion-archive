#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Rock_Formation_Pile_Eridian_Small_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PD_Rock_Formation_Pile_Eridian_Small.PD_Rock_Formation_Pile_Eridian_Small_C
// 0x0008 (0x05C8 - 0x05C0)
class APD_Rock_Formation_Pile_Eridian_Small_C : public APD_Rock_Formation_Pile_Eridian_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PD_Rock_Formation_Pile_Eridian_Small.PD_Rock_Formation_Pile_Eridian_Small_C");
		return ptr;
	}


	void UserConstructionScript();
	void Damaged(struct FVector* HitLocation, struct FVector* ImpulseDir, class AController** Controller);
	void ExecuteUbergraph_PD_Rock_Formation_Pile_Eridian_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
