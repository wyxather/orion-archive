#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Interface_Operative_DigiClone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interface_Operative_DigiClone.Interface_Operative_DigiClone_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_Operative_DigiClone_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interface_Operative_DigiClone.Interface_Operative_DigiClone_C");
		return ptr;
	}


	void StartSeperationAnxietyNova(const struct FVector& Loc);
	void NotifyPanicButtonTriggered();
	void GetDigiCloneReference(class AActor** Digiclone);
	void Is_DigiClone_Active(bool* Return);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
