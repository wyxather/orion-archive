#include "Input.h"
#include "Gui.h"
#include "Window.h"
#include "Orion.h"
#include <wrl/client.h>
#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>
#pragma comment(lib, "Dinput8.lib")
#pragma comment(lib, "Dxguid.lib")

using Microsoft::WRL::ComPtr;

namespace
{
	namespace DINPUT8
	{
		HRESULT __stdcall GetDeviceState(
			const LPDIRECTINPUTDEVICE8 pDevice,
			const DWORD cbData,
			const LPVOID lpvData
		) noexcept
		{
			static bool key[2]{};
			const auto result = input->getHook().get<
				9,
				HRESULT,
				Hooks::Function::STDCALL>(
					pDevice,
					cbData,
					lpvData);
			if (gui->isOpen() && result == DI_OK) {
				switch (cbData)
				{
				case (sizeof(DIMOUSESTATE)):
				{
					key[0] = reinterpret_cast<LPDIMOUSESTATE>(lpvData)->rgbButtons[0];
					reinterpret_cast<LPDIMOUSESTATE>(lpvData)->rgbButtons[0] = 0;
				}
				break;

				case (sizeof(DIMOUSESTATE2)):
				{
					key[0] = reinterpret_cast<LPDIMOUSESTATE2>(lpvData)->rgbButtons[0];
					reinterpret_cast<LPDIMOUSESTATE2>(lpvData)->rgbButtons[0] = 0;
				}
				break;
				}
				if (key[0] != key[1]) {
					if (POINT pos; LI_FN(GetCursorPos).cached()(&pos)) {
						key[0]
							? LI_FN(PostMessage).cached()(window->getHandle(), WM_LBUTTONDOWN, VK_LBUTTON, MAKELPARAM(pos.x, pos.y))
							: LI_FN(PostMessage).cached()(window->getHandle(), WM_LBUTTONUP, NULL, MAKELPARAM(pos.x, pos.y));
					}
					key[1] = key[0];
				}
			}
			return result;
		}

		HRESULT __stdcall GetDeviceData(
			const LPDIRECTINPUTDEVICE8 pDevice,
			const DWORD cbObjectData,
			const LPDIDEVICEOBJECTDATA rgdod,
			const LPDWORD pdwInOut,
			const DWORD dwFlags
		) noexcept
		{
			const auto result = input->getHook().get<
				10,
				HRESULT,
				Hooks::Function::STDCALL>(
					pDevice,
					cbObjectData,
					rgdod,
					pdwInOut,
					dwFlags);
			if (gui->isOpen() && result == DI_OK) {
				for (DWORD i = 0; i < *pdwInOut; i++) {
					if (rgdod[i].dwData & 0x80) { // Pressed
						switch (rgdod[i].dwOfs) {
						case DIMOFS_BUTTON0:
						{
							if (POINT pos; LI_FN(GetCursorPos).cached()(&pos)) {
								LI_FN(PostMessage).cached()(window->getHandle(), WM_LBUTTONDOWN, VK_LBUTTON, MAKELPARAM(pos.x, pos.y));
								rgdod[i].dwData &= ~0x80;
							}
						}
						break;
						}
					}
					else switch (rgdod[i].dwOfs) { // Release
					case DIMOFS_BUTTON0:
					{
						if (POINT pos; LI_FN(GetCursorPos).cached()(&pos))
							LI_FN(PostMessage).cached()(window->getHandle(), WM_LBUTTONUP, NULL, MAKELPARAM(pos.x, pos.y));
					}
					break;
					}
				}
			}
			return result;
		}
	}
}

Input::Input(Type type) noexcept
{
	Orion::String<"Input"> caption;
	{
		Orion::String<"dinput8.dll"> name;
		handle = LI_FN(GetModuleHandleA)(name.get());
		if (handle && LI_FN(MessageBoxA)(nullptr, name.get(), caption.get(), MB_YESNO | MB_ICONINFORMATION) == IDYES) {
			this->type = Type::DINPUT8;
			return;
		}
	}
	this->type = Type::NONE;
}

Input::~Input() noexcept
{
	type = {};
	handle = {};
}

void Input::hook() noexcept
{
	switch (type) {

	case Type::DINPUT8:
	{
		Orion::String<"DirectInput8Create"> proc;
		const auto directInput8Create = reinterpret_cast<HRESULT(__stdcall*)(HMODULE, DWORD, const IID&, LPDIRECTINPUT8*, LPUNKNOWN)>(LI_FN(GetProcAddress)(handle, proc.get()));

		ComPtr<IDirectInput8> directInput8;
		if (directInput8Create(app->handle, DIRECTINPUT_VERSION, IID_IDirectInput8, directInput8.GetAddressOf(), nullptr) != DI_OK)
			return;

		ComPtr<IDirectInputDevice8> directInputDevice8;
		if (directInput8->CreateDevice(GUID_SysMouse, directInputDevice8.GetAddressOf(), nullptr) != DI_OK)
			return;

		input.init(directInputDevice8.Get());
		input.hookAt(9, &DINPUT8::GetDeviceState);
		input.hookAt(10, &DINPUT8::GetDeviceData);
	}
	break;

	}
}

void Input::unhook() noexcept
{
	input.restore();
}