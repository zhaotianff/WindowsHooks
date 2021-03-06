#pragma once
#include "afxwin.h"


// ExecDialog 对话框

class ExecDialog : public CDialogEx
{
	DECLARE_DYNAMIC(ExecDialog)

public:
	ExecDialog(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~ExecDialog();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Exec };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CEdit edit_ProgramName;
	TCHAR m_strProgrameName[200];
	afx_msg void OnBnClickedOk();
//	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
};
