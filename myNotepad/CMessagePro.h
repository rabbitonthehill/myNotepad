#ifndef __CMESSAGEPRO__

#define __CMESSAGEPRO__
#define MAXSTR 1024

/**
* 消息处理类
*/
namespace CMP
{

	class CMessagePro
	{
	public:
		CMessagePro();
		~CMessagePro();
		typedef void (*MessageProType)(HWND, UINT, WPARAM, LPARAM);
		void Message(HWND, UINT, WPARAM, LPARAM, MessageProType);
	protected:
		void WsChar(HWND, UINT, WPARAM, LPARAM);
	private:
		static unsigned int s_index;
		static TCHAR s_strArr[MAXSTR];
	};
}

#endif // !__CMESSAGEPRO__
