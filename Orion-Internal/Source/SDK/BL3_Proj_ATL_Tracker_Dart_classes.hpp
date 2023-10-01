#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_Tracker_Dart_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_ATL_Tracker_Dart.Proj_ATL_Tracker_Dart_C
// 0x0008 (0x09E0 - 0x09D8)
class AProj_ATL_Tracker_Dart_C : public AProj_ATL_TrackerMaster_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09D8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_ATL_Tracker_Dart.Proj_ATL_Tracker_Dart_C");
		return ptr;
	}


	void UserConstructionScript();
	void SingleTargetTag();
	void ExecuteUbergraph_Proj_ATL_Tracker_Dart(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
