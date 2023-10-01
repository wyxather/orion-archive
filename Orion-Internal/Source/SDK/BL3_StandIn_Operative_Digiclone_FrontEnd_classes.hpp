#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_Operative_Digiclone_FrontEnd_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandIn_Operative_Digiclone_FrontEnd.StandIn_Operative_Digiclone_FrontEnd_C
// 0x0008 (0x05A0 - 0x0598)
class AStandIn_Operative_Digiclone_FrontEnd_C : public AStandIn_Operative_Digiclone_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0598(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_Operative_Digiclone_FrontEnd.StandIn_Operative_Digiclone_FrontEnd_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_StandIn_Operative_Digiclone_FrontEnd(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
