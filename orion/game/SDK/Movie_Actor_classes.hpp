#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x230 - 0x220)
// BlueprintGeneratedClass Movie_Actor.Movie_Actor_C
class AMovie_Actor_C : public AActor
{
public:
	class UManaComponent*                        Mana;                                              // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMovie_Actor_C* GetDefaultObj();

	void Play();
	enum class EManaComponentStatus GetStatus();
	void StopMovie();
	void Prepare(class UManaTexture* Texuter);
};

}


