
// bitcoinArchive.h : main header file for the bitcoinArchive application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CbitcoinArchiveApp:
// See bitcoinArchive.cpp for the implementation of this class
//

class CbitcoinArchiveApp : public CWinApp
{
public:
	CbitcoinArchiveApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CbitcoinArchiveApp theApp;
