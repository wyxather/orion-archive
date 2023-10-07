#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass MenuUIFunctionLibrary.MenuUIFunctionLibrary_C
class UMenuUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMenuUIFunctionLibrary_C* GetDefaultObj();

	void UICursorDecrementLoop_New(int32 Cursor, int32 DecrementValue, int32 CursorMin, int32 CursorMax, class UObject* __WorldContext, int32* NewCursor);
	void UICursorIncrementLoop_Ex(int32 Cursor, int32 IncrementValue, int32 CursorMin, int32 CursorMax, class UObject* __WorldContext, int32* NewCursor, bool* IsLoop);
	void UICursorDecrementLoop_Ex(int32 Cursor, int32 DecrementValue, int32 CursorMin, int32 CursorMax, class UObject* __WorldContext, int32* NewCursor, bool* IsLoop);
	void UICursorIncrementLoop(int32 Cursor, int32 IncrementValue, int32 CursorMin, int32 CursorMax, class UObject* __WorldContext, int32* NewCursor, bool* IsLooped);
	void UICursorDecrementLoop(int32 Cursor, int32 DecrementValue, int32 CursorMin, int32 CursorMax, class UObject* __WorldContext, int32* NewCursor, bool* IsLooped);
	void UICursorIncrement(int32 Cursor, int32 IncrementValue, int32 CursorMax, class UObject* __WorldContext, int32* NewCursor);
	void UICursorDecrement(int32 Cursor, int32 DecrementValue, int32 CursorMin, class UObject* __WorldContext, int32* NewCursor);
};

}


