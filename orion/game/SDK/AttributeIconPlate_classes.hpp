#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2E8 - 0x260)
// WidgetBlueprintGeneratedClass AttributeIconPlate.AttributeIconPlate_C
class UAttributeIconPlate_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAcqImage*                             ArrowLeft;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             ArrowRight;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        AttributeIconList;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsIconAnimation;                                   // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_139E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartPosition;                                     // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EndPosition;                                       // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_139F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           IconMoveTimeline;                                  // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableAutoScroll;                                  // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EBATTLE_COMMAND_ATTRIBUTE_ICON> AttributeList;                                     // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         EnableSwitchAttribute;                             // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AttributeNum;                                      // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableAttributeIcon;                               // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTexture2D*>                    AttributeIconTexture;                              // 0x2C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        AttributeIndex;                                    // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EATTRIBUTE_TYPE                   EnchantAttribute;                                  // 0x2D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          AttributeIconTextureList;                          // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAttributeIconPlate_C* GetDefaultObj();

	void OverrideAttributeColor(enum class EBATTLE_COMMAND_ATTRIBUTE_ICON BaseAttributeIcon, enum class EATTRIBUTE_TYPE OverrideAttributeColor);
	void SetEnchantAttribute(enum class EATTRIBUTE_TYPE AttributeType);
	void ChangeCommandAttribute(int32 Index, bool Instant, bool DirNext, bool SwitchAnimation);
	void PrevCommandAttribute();
	void NextCommandAttribute();
	void SetCommandAttribute(TArray<enum class EBATTLE_COMMAND_ATTRIBUTE_ICON>& Attibute, bool AutoScroll, bool SwitchAttribute, bool CommandDisable);
	void SetVisibilityArrow(bool Visible);
	void StartIconMove();
	void EndIconMove();
	void StartAutoIconMove();
	void Construct();
	void SetIconTexutreList();
	void ExecuteUbergraph_AttributeIconPlate(int32 EntryPoint);
};

}


