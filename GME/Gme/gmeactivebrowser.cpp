// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "gmeactivebrowser.h"
#include <comdef.h>
/////////////////////////////////////////////////////////////////////////////
// CGMEActiveBrowser

IMPLEMENT_DYNCREATE(CGMEActiveBrowser, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CGMEActiveBrowser properties

/////////////////////////////////////////////////////////////////////////////
// CGMEActiveBrowser operations

short CGMEActiveBrowser::SetCurrentProject(LPUNKNOWN pMgaProject)
{
	short result;
	static BYTE parms[] =
		VTS_UNKNOWN;
	InvokeHelper(0x1, DISPATCH_METHOD, VT_I2, (void*)&result, parms,
		pMgaProject);
	return result;
}

short CGMEActiveBrowser::CloseCurrentProject()
{
	short result;
	InvokeHelper(0x2, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
	return result;
}

void CGMEActiveBrowser::RefreshAll()
{
	InvokeHelper(0x3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

LPUNKNOWN CGMEActiveBrowser::GetSelectedMgaObjects()
{
	LPUNKNOWN result;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
	return result;
}

void CGMEActiveBrowser::FocusItem(BSTR Id)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Id);
}
