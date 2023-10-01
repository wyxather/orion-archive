#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_VehicleTechOutrRam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AIAction_VehicleTechOutrRam.AIAction_VehicleTechOutrRam_C
// 0x0010 (0x0180 - 0x0170)
class UAIAction_VehicleTechOutrRam_C : public UAIAction_Priority
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      NewVar_1;                                                 // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AIAction_VehicleTechOutrRam.AIAction_VehicleTechOutrRam_C");
		return ptr;
	}


	void ExecuteUbergraph_AIAction_VehicleTechOutrRam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
