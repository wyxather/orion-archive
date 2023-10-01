#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Interface_IO_Operative_ShoulderCannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_IO_Operative_ShoulderCannon_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interface_IO_Operative_ShoulderCannon.Interface_IO_Operative_ShoulderCannon_C");
		return ptr;
	}


	void OperativeShoulderCannonCreateLightProjectile(bool* res);
	void OperativeShoulderCannonSetState(TEnumAsByte<EOperativeShoulderCannon> NewState, bool* res);
	void OperativeShoulderCannonReload(bool Start);
	void OperativeRemoveShoulderCannon(bool Fast);
	void OperativeShoulderCannonDigistructFinished(bool DigistructIn, bool* res);
	void OperativeFireShoulderCannon(bool* res);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
