
// 进程监控器-Xenber.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// C进程监控器XenberApp: 
// 有关此类的实现，请参阅 进程监控器-Xenber.cpp
//

class C进程监控器XenberApp : public CWinApp
{
public:
	C进程监控器XenberApp();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern C进程监控器XenberApp theApp;