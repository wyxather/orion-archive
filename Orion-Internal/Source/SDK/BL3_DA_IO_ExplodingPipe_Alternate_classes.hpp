#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DA_IO_ExplodingPipe_Alternate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DA_IO_ExplodingPipe_Alternate.DA_IO_ExplodingPipe_Alternate_C
// 0x0050 (0x0148 - 0x00F8)
class UDA_IO_ExplodingPipe_Alternate_C : public UDA_IO_ExplodingPipe_C
{
public:
	struct FLinearColor                                Color_Primary2_LinearColorValue;                          // 0x00F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Decal_BaseColor_Base_LinearColorValue;                    // 0x0108(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color_Primary1_LinearColorValue;                          // 0x0118(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Decal_BaseColor_Highlight_LinearColorValue;               // 0x0128(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                EmmisiveColor_Mult_LinearColorValue;                      // 0x0138(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DA_IO_ExplodingPipe_Alternate.DA_IO_ExplodingPipe_Alternate_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
