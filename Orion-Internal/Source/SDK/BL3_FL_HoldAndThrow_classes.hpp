#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_FL_HoldAndThrow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FL_HoldAndThrow.FL_HoldAndThrow_C
// 0x0000 (0x0028 - 0x0028)
class UFL_HoldAndThrow_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FL_HoldAndThrow.FL_HoldAndThrow_C");
		return ptr;
	}


	void STATIC_HNT_Throw(class AActor* Projectile, class UObject* __WorldContext);
	void STATIC_HNT_Drop(class AActor* Projectile, class UObject* __WorldContext);
	void STATIC_HNT_Prime(class AActor* Projectile, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
