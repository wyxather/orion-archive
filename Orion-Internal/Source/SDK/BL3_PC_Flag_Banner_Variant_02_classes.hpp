#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PC_Flag_Banner_Variant_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PC_Flag_Banner_Variant_02.PC_Flag_Banner_Variant_02_C
// 0x0000 (0x05EC - 0x05EC)
class APC_Flag_Banner_Variant_02_C : public APC_OakClothActor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PC_Flag_Banner_Variant_02.PC_Flag_Banner_Variant_02_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
