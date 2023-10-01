#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPC_SancTakeoff_Rumble_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPC_SancTakeoff_Rumble.BPC_SancTakeoff_Rumble_C
// 0x0000 (0x0180 - 0x0180)
class UBPC_SancTakeoff_Rumble_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPC_SancTakeoff_Rumble.BPC_SancTakeoff_Rumble_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
