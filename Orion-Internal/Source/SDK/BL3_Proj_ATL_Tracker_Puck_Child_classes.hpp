#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_Tracker_Puck_Child_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C
// 0x0008 (0x0AB8 - 0x0AB0)
class AProj_ATL_Tracker_Puck_Child_C : public AProj_ATL_Tracker_Puck_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AB0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SingleTargetTag();
	void ExecuteUbergraph_Proj_ATL_Tracker_Puck_Child(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
