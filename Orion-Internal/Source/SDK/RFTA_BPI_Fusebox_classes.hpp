#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BPI_Fusebox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Fusebox.BPI_Fusebox_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Fusebox_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Fusebox.BPI_Fusebox_C");
		return ptr;
	}


	void HasFuseInFusebox(bool* Out);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
