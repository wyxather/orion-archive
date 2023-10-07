#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x240 - 0x228)
// BlueprintGeneratedClass BP_Flipbook_Object.BP_Flipbook_Object_C
class ABP_Flipbook_Object_C : public APaperFlipbookActor
{
public:
	class UPaperFlipbookComponent*               ChrAnimTX_Horse_A_Nidl;                            // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMJBillboardComponent*                 MJBillboard;                                       // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPaperFlipbook*                        FlipbookData;                                      // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Flipbook_Object_C* GetDefaultObj();

	void UserConstructionScript();
};

}


