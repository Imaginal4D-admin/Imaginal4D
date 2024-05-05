#include "pch.h"

#include "MainWindow.h"

CComModule _Module;

int APIENTRY wWinMain(
	_In_ HINSTANCE		hInstance,
	_In_opt_ HINSTANCE	hPrevInstance,
	_In_ LPWSTR			lpCmdLine,
	_In_ int			nCmdShow)
{
	_Module.Init(NULL, hInstance);

	RECT rect = { 0, 0, 800, 500 };

	MainWindow wnd;
	wnd.Create(
		NULL,
		&rect,
		L"MainWindow",
		WS_OVERLAPPEDWINDOW | WS_VISIBLE);

	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	_Module.Term();
	return 0;
}
