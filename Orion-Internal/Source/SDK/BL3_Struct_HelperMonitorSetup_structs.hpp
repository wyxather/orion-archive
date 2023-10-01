#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_HelperMonitorSetup.Struct_HelperMonitorSetup
// 0x000C
struct FStruct_HelperMonitorSetup
{
	class AStaticMeshActor*                            StaticMeshActor_5_463A5D4C4FC53DC471502185976CB221;       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                MaterialIndexToOverride_2_F94AB5694D087F7C74DF9B89D0C23BE8;// 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
