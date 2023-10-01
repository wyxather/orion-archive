#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_VehicleDeath_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_VehicleDeath_Base.Action_VehicleDeath_Base_C
// 0x0008 (0x0208 - 0x0200)
class UAction_VehicleDeath_Base_C : public UAPhys_Ragdoll_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0200(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_VehicleDeath_Base.Action_VehicleDeath_Base_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnAnimEnd(class AActor** Actor);
	void ExecuteUbergraph_Action_VehicleDeath_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
