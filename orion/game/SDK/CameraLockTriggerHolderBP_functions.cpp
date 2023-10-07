#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass CameraLockTriggerHolderBP.CameraLockTriggerHolderBP_C
// (Actor)

class UClass* ACameraLockTriggerHolderBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraLockTriggerHolderBP_C");

	return Clss;
}


// CameraLockTriggerHolderBP_C CameraLockTriggerHolderBP.Default__CameraLockTriggerHolderBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACameraLockTriggerHolderBP_C* ACameraLockTriggerHolderBP_C::GetDefaultObj()
{
	static class ACameraLockTriggerHolderBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACameraLockTriggerHolderBP_C*>(ACameraLockTriggerHolderBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


