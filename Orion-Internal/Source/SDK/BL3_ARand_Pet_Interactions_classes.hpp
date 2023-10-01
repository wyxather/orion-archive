#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARand_Pet_Interactions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARand_Pet_Interactions.ARand_Pet_Interactions_C
// 0x000F (0x0250 - 0x0241)
class UARand_Pet_Interactions_C : public UARand_Pet_Fidgets_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0241(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARand_Pet_Interactions.ARand_Pet_Interactions_C");
		return ptr;
	}


	void Notify_Jabber_Jewels();
	void Notify_Jabber_ButtScratch();
	void Notify_Jabber_ButtShake();
	void Notify_Spiderant_Spiders();
	void Notify_Spiderant_GroundDig();
	void Notify_Skag_Excited();
	void Notify_Skag_Rollover();
	void ExecuteUbergraph_ARand_Pet_Interactions(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
