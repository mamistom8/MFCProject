
// TomerNaftalyDlg.h : header file
//

#pragma once
#include <iostream>
#include <typeinfo>
#include <map>
#include "Guard.h"
#include "Player.h"
#include "Forward.h"
#include "Center.h"
#include "ShootingGuard.h"
#include "PointGuard.h"
#include "SmallForward.h"
#include "PowerForward.h"
#include "Startes.h"
#include <map>
using namespace std;
// CTomerNaftalyDlg dialog
class CTomerNaftalyDlg : public CDialogEx
{
// Construction
public:
	CTomerNaftalyDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TOMERNAFTALY_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	bool check(CString newP);
	bool check2(CString newP);
	map<CString, Player*> team;
	map<CString, Player*> injury;
	CString Player_Name;
	CString Player_Number;
	int Player_Height;
	int Player_Weight;
	afx_msg void OnBnClickedButtonadd();
	CButton m_guard;
	CButton m_forward;
	CButton m_center;
	CListBox m_ListTeam;
	CListBox m_ListInjury;
	CListBox m_ListStarters;
	afx_msg void OnBnClickedButtonstart();
	afx_msg void OnBnClickedButtoninjury();
	afx_msg void OnBnClickedButtonremove();
	afx_msg void OnLbnSelchangeListteam();
	CString SPlayer_Name;
	CString SPlayer_number;
	CString SPlayer_pos;
	int SPlayer_height;
	int SPlayer_weight;
	afx_msg void OnBnClickedButtonheald();
	afx_msg void OnBnClickedButtonbench();
	afx_msg void OnBnClickedButtonremove2();
	afx_msg void OnBnClickedButtonremovef();
	afx_msg void OnBnClickedButtoninjuryf();
	CListBox m_ListCenters;
	afx_msg void OnBnClickedButtonremovec();
	afx_msg void OnBnClickedButtoninjuryc();
	afx_msg void OnLbnSelchangeListstarters();
	afx_msg void OnLbnSelchangeListcenters();
	CString Sguard1;
	CString Sguard2;
	CString Sforward1;
	CString Sforward2;
	CString Scenter1;
	afx_msg void OnBnClickedButtonstartf();
	afx_msg void OnBnClickedButtonstartc();
	afx_msg void OnStnClickedSforward1();
	afx_msg void OnStnDblclickSforward1();
	CStatic PLAYER_INFO;
	afx_msg void OnStnClickedStaticheightv();
	afx_msg void OnEnChangeEdit5();
	double Player_Points;
	double Player_Asists;
	double Player_Reb;
	CString EditPlayer;
	CEdit m_points;
	afx_msg void OnBnClickedButtonedit1();
	CEdit m_asists;
	CEdit m_reb;
	CStatic m_spoints;
	CStatic m_sasists;
	CStatic m_sreb;
	CButton m_done;
	afx_msg void OnBnClickedButtondone();
	double sppg;
	double saps;
	double srpg;
	afx_msg void OnBnClickedButtonedit2();
	afx_msg void OnBnClickedButtonedit3();
	int team_size;
	
	afx_msg void OnStnClickedStaticrpg();
	CButton m_shootingguard;
	CButton m_powerforward;
	int injury_size;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
};
