#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionGiver_Single_InvisibleBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_MissionGiver_Single_InvisibleBox.IO_MissionGiver_Single_InvisibleBox_C
// 0x0010 (0x05A8 - 0x0598)
class AIO_MissionGiver_Single_InvisibleBox_C : public AIO_MissionGiver_Single_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0598(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_MissionGiver_Single_InvisibleBox.IO_MissionGiver_Single_InvisibleBox_C");
		return ptr;
	}


	void UserConstructionScript();
	void Play_Feedback_MissionsAvailable();
	void Play_Feedback_NoMissionsAvailable();
	void ExecuteUbergraph_IO_MissionGiver_Single_InvisibleBox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
