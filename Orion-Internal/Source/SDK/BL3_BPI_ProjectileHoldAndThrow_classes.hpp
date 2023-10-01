#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_ProjectileHoldAndThrow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_ProjectileHoldAndThrow_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ProjectileHoldAndThrow.BPI_ProjectileHoldAndThrow_C");
		return ptr;
	}


	void HNT_Throw();
	void HNT_Drop();
	void HNT_Prime();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
