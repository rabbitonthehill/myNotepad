#include "stdafx.h"
#include "CMessagePro.h"
using namespace CMP;

CMessagePro::CMessagePro() {}


CMessagePro::~CMessagePro() {}

void CMessagePro::Message(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam, MessageProType callbackFunc)
{
	callbackFunc(hWnd, message, wParam, lParam);
}

void CMessagePro::WsChar(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	HDC hdc = GetDC(hWnd);

}
unsigned int CMessagePro::s_index = 0;
TCHAR CMessagePro::s_strArr[MAXSTR] = { 0 };
