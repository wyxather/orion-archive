#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_DamageTypeColors.Struct_DamageTypeColors
// 0x0060
struct FStruct_DamageTypeColors
{
	struct FLinearColor                                None_29_CAFD93A543EAA65C7AEA7A9EA12A6A1A;                 // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Corrosive_30_ABD7C9C34C124EB6E160539406D1E433;            // 0x0010(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Cryo_31_99E9862542FA04DDCD6D7895B378B562;                 // 0x0020(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Fire_32_AA02791A4FB068FA22AEB09F1F05C5DE;                 // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Shock_33_B51C72BC4DFC38870751B69EBE16B0E7;                // 0x0040(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Radiation_34_578AAD754FD78B9C6F3A578A55E05E33;            // 0x0050(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
