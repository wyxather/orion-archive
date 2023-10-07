#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x310 - 0x308)
// BlueprintGeneratedClass BPC_DialogManager.BPC_DialogManager_C
class ABPC_DialogManager_C : public ADialogManager
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPC_DialogManager_C* GetDefaultObj();

	bool CloseRequestDialog();
	void OnDialogClose();
	bool Initialize();
	class UCommonDialog* OpenRequestDialog(struct FMJUICommonDialogParam& Param);
	bool SetReference();
};

}


