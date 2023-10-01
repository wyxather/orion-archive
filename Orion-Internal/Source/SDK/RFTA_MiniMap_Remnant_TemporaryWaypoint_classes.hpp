#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_MiniMap_Remnant_TemporaryWaypoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MiniMap_Remnant_TemporaryWaypoint.MiniMap_Remnant_TemporaryWaypoint_C
// 0x0008 (0x0170 - 0x0168)
class UMiniMap_Remnant_TemporaryWaypoint_C : public UMiniMap_Remnant_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0168(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MiniMap_Remnant_TemporaryWaypoint.MiniMap_Remnant_TemporaryWaypoint_C");
		return ptr;
	}


	void ExecuteUbergraph_MiniMap_Remnant_TemporaryWaypoint(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
