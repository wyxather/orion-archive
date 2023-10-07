#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xBF0 - 0xBE4)
// BlueprintGeneratedClass KSPartnerCharacter.KSPartnerCharacter_C
class AKSPartnerCharacter_C : public AKSPartyCharacter_C
{
public:
	uint8                                        Pad_10C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AKSPartnerCharacter_C* GetDefaultObj();

	void SetDir(enum class EKSCharacterDir EDir, bool SetIdle);
	bool IsHunterPartner();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_KSPartnerCharacter(int32 EntryPoint);
};

}


