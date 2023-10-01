#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionPlaceable_ExplodingHumanSpine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_MissionPlaceable_ExplodingHumanSpine.IO_MissionPlaceable_ExplodingHumanSpine_C
// 0x0008 (0x07A0 - 0x0798)
class AIO_MissionPlaceable_ExplodingHumanSpine_C : public AIO_MissionPlaceable_Static_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0798(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_MissionPlaceable_ExplodingHumanSpine.IO_MissionPlaceable_ExplodingHumanSpine_C");
		return ptr;
	}


	void UserConstructionScript();
	void Play_Feedback_Placed();
	void Play_Feedback_Placing();
	void Play_Feedback_PlaceableDefault();
	void Play_Feedback_Placeable();
	void ExecuteUbergraph_IO_MissionPlaceable_ExplodingHumanSpine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
