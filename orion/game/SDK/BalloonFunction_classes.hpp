#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BalloonFunction.BalloonFunction_C
class UBalloonFunction_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBalloonFunction_C* GetDefaultObj();

	void GetActorHeightCheck(class AActor* Actor, class UObject* __WorldContext, float* Height, bool* HasAction);
	void GetActorHeight(class AActor* Actor, class UObject* __WorldContext, float* Height);
	void GetBalloonDirOffset(enum class EEventBalloonDir BalloonDir, class UObject* __WorldContext, struct FVector2D* Offset, struct FVector2D* Scale);
};

}


