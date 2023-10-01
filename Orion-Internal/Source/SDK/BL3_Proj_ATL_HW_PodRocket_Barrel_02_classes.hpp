#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_HW_PodRocket_Barrel_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_ATL_HW_PodRocket_Barrel_02.Proj_ATL_HW_PodRocket_Barrel_02_C
// 0x0008 (0x07D8 - 0x07D0)
class AProj_ATL_HW_PodRocket_Barrel_02_C : public AProj_ATL_HW_PodRocket_Master_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_ATL_HW_PodRocket_Barrel_02.Proj_ATL_HW_PodRocket_Barrel_02_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Proj_ATL_HW_PodRocket_Barrel_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
