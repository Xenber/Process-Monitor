
// ���̼����-Xenber.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// C���̼����XenberApp: 
// �йش����ʵ�֣������ ���̼����-Xenber.cpp
//

class C���̼����XenberApp : public CWinApp
{
public:
	C���̼����XenberApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern C���̼����XenberApp theApp;