#pragma once

#include <Windows.h>
#include <atlbase.h>
extern CComModule _Module;
#include <atlwin.h>

class MainWindow : public CWindowImpl<MainWindow>
{
public:

	BEGIN_MSG_MAP(MainWindow)
		MESSAGE_HANDLER(WM_DESTROY, OnDestroy)
	END_MSG_MAP()

	LRESULT OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
	{
		PostQuitMessage(0);
		return 0;
	}

protected:

private:

};
