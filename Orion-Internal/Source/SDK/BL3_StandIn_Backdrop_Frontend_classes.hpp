#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_Backdrop_Frontend_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandIn_Backdrop_Frontend.StandIn_Backdrop_Frontend_C
// 0x0010 (0x0590 - 0x0580)
class AStandIn_Backdrop_Frontend_C : public AStandInAuxiliaryActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_Backdrop_Frontend.StandIn_Backdrop_Frontend_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_StandIn_Backdrop_Frontend(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
