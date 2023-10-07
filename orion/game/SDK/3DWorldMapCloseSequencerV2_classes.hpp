#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass 3DWorldMapCloseSequencerV2.SequenceDirector_C
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USequenceDirector_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_3DWorldMapActorV2_C* BP_3DWorld_Map_Actor_V2);
	void BP_3DWorld_Map_Actor_V2_Event_1(class ABP_3DWorldMapActorV2_C* BP_3DWorld_Map_Actor_V2);
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

}


