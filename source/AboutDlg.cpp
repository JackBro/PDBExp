///////////////////////////////////////////////////////////////////////////////
// �ļ�����  AboutDlg.cpp
// ����ʱ�䣺2007-11-12
// ���ߣ�    ����
// ��Ȩ���У�Titi Studio (?) 2001-2007
//-----------------------------------------------------------------------------
// ˵����    ���ڶԻ���ʵ��
///////////////////////////////////////////////////////////////////////////////

#include "LvStd.h"
#include "AboutDlg.h"
#include "Version.h"
#include <ShellAPI.h>

CAboutDlg::CAboutDlg(void)
{
    //
}

///////////////////////////////////////////////////////////////////////////////

BOOL CAboutDlg::OnInitDialog(CWindow, LPARAM)
{
    DoDataExchange();

    CWindow wndVer = GetDlgItem(IDC_ST_VER);
    wndVer.SetWindowText(PDBEXP_WNDCAPTION);

    return FALSE;
}

void CAboutDlg::OnLButtonDown(UINT, CPoint point)
{
    SendMessage(WM_NCLBUTTONDOWN, HTCAPTION, MAKELPARAM(point.x, point.y));
}

void CAboutDlg::OnOKCancel(UINT, int, CWindow)
{
    EndDialog(IDOK);
}
