
// TomerNaftalyDlg.cpp : implementation file
//

#include "stdafx.h"
#include "TomerNaftaly.h"
#include "TomerNaftalyDlg.h"
#include "afxdialogex.h"
#include "Player.h"
#include "Startes.h"





#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CTomerNaftalyDlg dialog



CTomerNaftalyDlg::CTomerNaftalyDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TOMERNAFTALY_DIALOG, pParent)
	, Player_Name(_T(""))
	, Player_Number(_T(""))
	, Player_Height(0)
	, Player_Weight(0)
	, SPlayer_Name(_T(""))
	, SPlayer_number(_T(""))
	, SPlayer_pos(_T(""))
	, SPlayer_height(0)
	, SPlayer_weight(0)
	, Sguard1(_T(""))
	, Sguard2(_T(""))
	, Sforward1(_T(""))
	, Sforward2(_T(""))
	, Scenter1(_T(""))
	, Player_Points(0)
	, Player_Asists(0)
	, Player_Reb(0)
	, sppg(0)
	, saps(0)
	, srpg(0)
	, team_size(0)
	, injury_size(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTomerNaftalyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDITNAME, Player_Name);
	DDX_Text(pDX, IDC_EDITJERSY, Player_Number);
	DDX_Text(pDX, IDC_EDITHEIGHT, Player_Height);
	DDX_Text(pDX, IDC_EDITWEIGHT, Player_Weight);
	DDX_Control(pDX, IDC_RADIO1, m_guard);
	DDX_Control(pDX, IDC_RADIO2, m_forward);
	DDX_Control(pDX, IDC_RADIO3, m_center);
	DDX_Control(pDX, IDC_LISTTEAM, m_ListTeam);
	DDX_Control(pDX, IDC_LISTINJURY, m_ListInjury);
	DDX_Control(pDX, IDC_LISTSTARTERS, m_ListStarters);
	DDX_Text(pDX, IDC_STATICNAMEV, SPlayer_Name);
	DDX_Text(pDX, IDC_STATICNUMV, SPlayer_number);
	DDX_Text(pDX, IDC_STATICPOSV, SPlayer_pos);
	DDX_Text(pDX, IDC_STATICHEIGHTV, SPlayer_height);
	DDX_Text(pDX, IDC_STATICWEIGHTV, SPlayer_weight);
	DDX_Control(pDX, IDC_LISTCENTERS, m_ListCenters);
	DDX_Text(pDX, IDC_Sguard1, Sguard1);
	DDX_Text(pDX, IDC_Sguard2, Sguard2);
	DDX_Text(pDX, IDC_Sforward1, Sforward1);
	DDX_Text(pDX, IDC_Sforward2, Sforward2);
	DDX_Text(pDX, IDC_Scenter1, Scenter1);
	DDX_Control(pDX, IDC_STATICPLAYERINFO, PLAYER_INFO);
	DDX_Text(pDX, IDC_EDIT5, Player_Points);
	DDX_Text(pDX, IDC_EDIT6, Player_Asists);
	DDX_Text(pDX, IDC_EDIT7, Player_Reb);
	DDX_Control(pDX, IDC_EDIT5, m_points);
	DDX_Control(pDX, IDC_EDIT6, m_asists);
	DDX_Control(pDX, IDC_EDIT7, m_reb);
	DDX_Control(pDX, IDC_STATICPOINTSF, m_spoints);
	DDX_Control(pDX, IDC_STATICASISTSF, m_sasists);
	DDX_Control(pDX, IDC_STATICREBF, m_sreb);
	DDX_Control(pDX, IDC_BUTTONDONE, m_done);
	DDX_Text(pDX, IDC_STATICPPG, sppg);
	DDX_Text(pDX, IDC_STATICAPG, saps);
	DDX_Text(pDX, IDC_STATICRPG, srpg);
	DDX_Text(pDX, IDC_STATICSIZE, team_size);
	DDX_Control(pDX, IDC_RADIO4, m_shootingguard);
	DDX_Control(pDX, IDC_RADIO5, m_powerforward);
	DDX_Text(pDX, IDC_STATICSIZEI, injury_size);
}

BEGIN_MESSAGE_MAP(CTomerNaftalyDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTONADD, &CTomerNaftalyDlg::OnBnClickedButtonadd)
	ON_BN_CLICKED(IDC_BUTTONSTART, &CTomerNaftalyDlg::OnBnClickedButtonstart)
	ON_BN_CLICKED(IDC_BUTTONINJURY, &CTomerNaftalyDlg::OnBnClickedButtoninjury)
	ON_BN_CLICKED(IDC_BUTTONREMOVE, &CTomerNaftalyDlg::OnBnClickedButtonremove)
	ON_LBN_SELCHANGE(IDC_LISTTEAM, &CTomerNaftalyDlg::OnLbnSelchangeListteam)
	ON_BN_CLICKED(IDC_BUTTONHEALD, &CTomerNaftalyDlg::OnBnClickedButtonheald)
	//ON_BN_CLICKED(IDC_BUTTONBENCH, &CTomerNaftalyDlg::OnBnClickedButtonbench)
	//ON_BN_CLICKED(IDC_BUTTONREMOVE2, &CTomerNaftalyDlg::OnBnClickedButtonremove2)
	ON_BN_CLICKED(IDC_BUTTONREMOVEF, &CTomerNaftalyDlg::OnBnClickedButtonremovef)
	ON_BN_CLICKED(IDC_BUTTONINJURYF, &CTomerNaftalyDlg::OnBnClickedButtoninjuryf)
	ON_BN_CLICKED(IDC_BUTTONREMOVEC, &CTomerNaftalyDlg::OnBnClickedButtonremovec)
	ON_BN_CLICKED(IDC_BUTTONINJURYC, &CTomerNaftalyDlg::OnBnClickedButtoninjuryc)
	ON_LBN_SELCHANGE(IDC_LISTSTARTERS, &CTomerNaftalyDlg::OnLbnSelchangeListstarters)
	ON_LBN_SELCHANGE(IDC_LISTCENTERS, &CTomerNaftalyDlg::OnLbnSelchangeListcenters)
	ON_BN_CLICKED(IDC_BUTTONSTARTF, &CTomerNaftalyDlg::OnBnClickedButtonstartf)
	ON_BN_CLICKED(IDC_BUTTONSTARTC, &CTomerNaftalyDlg::OnBnClickedButtonstartc)
	//ON_STN_CLICKED(IDC_Sforward1, &CTomerNaftalyDlg::OnStnClickedSforward1)
	//ON_STN_DBLCLK(IDC_Sforward1, &CTomerNaftalyDlg::OnStnDblclickSforward1)
	//ON_STN_CLICKED(IDC_STATICHEIGHTV, &CTomerNaftalyDlg::OnStnClickedStaticheightv)
	//ON_EN_CHANGE(IDC_EDIT5, &CTomerNaftalyDlg::OnEnChangeEdit5)
	ON_BN_CLICKED(IDC_BUTTONEDIT1, &CTomerNaftalyDlg::OnBnClickedButtonedit1)
	ON_BN_CLICKED(IDC_BUTTONDONE, &CTomerNaftalyDlg::OnBnClickedButtondone)
	ON_BN_CLICKED(IDC_BUTTONEDIT2, &CTomerNaftalyDlg::OnBnClickedButtonedit2)
	ON_BN_CLICKED(IDC_BUTTONEDIT3, &CTomerNaftalyDlg::OnBnClickedButtonedit3)
	//ON_STN_CLICKED(IDC_STATICRPG, &CTomerNaftalyDlg::OnStnClickedStaticrpg)
	ON_BN_CLICKED(IDC_BUTTON1, &CTomerNaftalyDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CTomerNaftalyDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CTomerNaftalyDlg::OnBnClickedButton3)
END_MESSAGE_MAP()


// CTomerNaftalyDlg message handlers

BOOL CTomerNaftalyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	m_guard.SetCheck(TRUE);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CTomerNaftalyDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CTomerNaftalyDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CTomerNaftalyDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CTomerNaftalyDlg::OnBnClickedButtonadd()
{
	UpdateData(TRUE);
	Player *newplayer ;
	if (Player_Name != "" && Player_Number!= "" && check(Player_Name)) {
		if (m_guard.GetCheck())
		{
			newplayer = new PointGuard();
			m_ListTeam.AddString(Player_Name);
		}
		else if (m_shootingguard.GetCheck())
		{
			newplayer = new ShootingGuard();
			m_ListTeam.AddString(Player_Name);
		}
		else if (m_forward.GetCheck())
		{

			newplayer = new SmallForward();
			m_ListStarters.AddString(Player_Name);
		}
		else if (m_powerforward.GetCheck())
		{
			newplayer = new PowerForward();
			m_ListStarters.AddString(Player_Name);

		}
		else
		{

			newplayer = new Center;
			m_ListCenters.AddString(Player_Name);
		}
		newplayer->setName(Player_Name);
		newplayer->setNum(Player_Number);
		newplayer->setheight(Player_Height);
		newplayer->setwheight(Player_Weight);
		team.insert({ Player_Name, newplayer });
	}

	Player_Name = _T("");
	Player_Number = _T("");
	Player_Height = 0;
	Player_Weight = 0;
	
	team_size = team.size();
	UpdateData(FALSE);
}


void CTomerNaftalyDlg::OnBnClickedButtonstart()
{
	CString theData;
	// get the selected position of the listbox
	UINT uiSelection = m_ListTeam.GetCurSel();

	if (uiSelection == LB_ERR) return;

	m_ListTeam.GetText(uiSelection, theData);
	if (check2(theData)) {
		if (Sguard1 == "" )
			Sguard1 = team[theData]->getNum();
		else if(Sguard2 == "")
		{
			Sguard2 = team[theData]->getNum();
		}
		else if(team[theData]->getNum() != Sguard1 && team[theData]->getNum() != Sguard2)
			Sguard2 = team[theData]->getNum();
	}
	UpdateData(FALSE);
}


void CTomerNaftalyDlg::OnBnClickedButtoninjury()
{
	CString theData;
	// get the selected position of the listbox
	UINT uiSelection = m_ListTeam.GetCurSel();

	if (uiSelection == LB_ERR) return;


	m_ListTeam.GetText(uiSelection, theData);
	if (check2(theData)) {
		m_ListInjury.AddString(theData);
		injury.insert({ theData, team[theData] });
	}
	injury_size = injury.size();
	UpdateData(FALSE);
}


void CTomerNaftalyDlg::OnBnClickedButtonremove()
{
	CString theData,theData2;
	LPCTSTR lpszmyString;
	int nIndex=0;
	// get the selected position of the listbox
	UINT uiSelection = m_ListTeam.GetCurSel();
	if (uiSelection == LB_ERR) return;
	
	m_ListTeam.GetText(uiSelection, theData);
	lpszmyString = theData;
	nIndex = m_ListInjury.FindStringExact(nIndex, lpszmyString);
	m_ListTeam.DeleteString(uiSelection);
	m_ListInjury.DeleteString(nIndex);

			

	team.erase(theData);
	injury.erase(theData);
	team_size = team.size();
	injury_size = injury.size();
	UpdateData(FALSE);
}


void CTomerNaftalyDlg::OnLbnSelchangeListteam()
{
	CString theData;
	// get the selected position of the listbox
	UINT uiSelection = m_ListTeam.GetCurSel();

	if (uiSelection == LB_ERR) return;


	m_ListTeam.GetText(uiSelection, theData);
	for (map<CString, Player*>::const_iterator iter = team.begin(); iter != team.end(); ++iter)
	{
		if (iter->first == theData)
		{
			SPlayer_height = iter->second->getheight();
			SPlayer_weight = iter->second->getweight();
			SPlayer_Name = iter->first;
			SPlayer_number = iter->second->getNum();
			SPlayer_pos = typeid(*(iter->second)).name() + 6;
			sppg = iter->second->getpoints();
			saps = iter->second->getasists();
			srpg = iter->second->getrebs();
			
		}
	}

	UpdateData(FALSE);
}


void CTomerNaftalyDlg::OnBnClickedButtonheald()
{
	CString theData;
	// get the selected position of the listbox
	UINT uiSelection = m_ListInjury.GetCurSel();

	if (uiSelection == LB_ERR) return;


	m_ListInjury.GetText(uiSelection, theData);
	m_ListInjury.DeleteString(uiSelection);
	injury.erase(theData);
	injury_size = injury.size();
	UpdateData(FALSE);
	
}


void CTomerNaftalyDlg::OnBnClickedButtonbench()
{
	CString theData;
	// get the selected position of the listbox
	UINT uiSelection = m_ListStarters.GetCurSel();

	if (uiSelection == LB_ERR) return;


	m_ListStarters.GetText(uiSelection, theData);
	m_ListStarters.DeleteString(uiSelection);
}


/*void CTomerNaftalyDlg::OnBnClickedButtonremove2()
{
	CString theData;
	// get the selected position of the listbox
	UINT uiSelection = m_ListInjury.GetCurSel();
	if (uiSelection == LB_ERR) return;


	m_ListInjury.GetText(uiSelection, theData);
	m_ListInjury.DeleteString(uiSelection);

	
}*/


void CTomerNaftalyDlg::OnBnClickedButtonremovef()
{
	CString theData;
	LPCTSTR lpszmyString;
	int nIndex = 0;
	// get the selected position of the listbox
	UINT uiSelection = m_ListStarters.GetCurSel();
	if (uiSelection == LB_ERR) return;


	m_ListStarters.GetText(uiSelection, theData);
	m_ListStarters.DeleteString(uiSelection);
	lpszmyString = theData;
	nIndex = m_ListInjury.FindStringExact(nIndex, lpszmyString);
	m_ListInjury.DeleteString(nIndex);
	injury.erase(theData);
	injury_size = injury.size();
	team.erase(theData);
	team_size = team.size();
	UpdateData(FALSE);
}


void CTomerNaftalyDlg::OnBnClickedButtoninjuryf()
{
	CString theData;
	// get the selected position of the listbox
	UINT uiSelection = m_ListStarters.GetCurSel();

	if (uiSelection == LB_ERR) return;


	m_ListStarters.GetText(uiSelection, theData);
	if (check2(theData)) {
		m_ListInjury.AddString(theData);
		injury.insert({ theData, team[theData] });
	}
	injury_size = injury.size();
	UpdateData(FALSE);
}


void CTomerNaftalyDlg::OnBnClickedButtonremovec()
{
	CString theData;
	LPCTSTR lpszmyString;
	int nIndex = 0;
	// get the selected position of the listbox
	UINT uiSelection = m_ListCenters.GetCurSel();
	if (uiSelection == LB_ERR) return;


	m_ListCenters.GetText(uiSelection, theData);
	m_ListCenters.DeleteString(0);
	lpszmyString = theData;
	nIndex = m_ListInjury.FindStringExact(nIndex, lpszmyString);
	m_ListInjury.DeleteString(nIndex);
	injury.erase(theData);
	injury_size = injury.size();
	team.erase(theData);
	team_size = team.size();
	UpdateData(FALSE);
}


void CTomerNaftalyDlg::OnBnClickedButtoninjuryc()
{
	CString theData;
	// get the selected position of the listbox
	UINT uiSelection = m_ListCenters.GetCurSel();

	if (uiSelection == LB_ERR) return;
	m_ListCenters.GetText(uiSelection, theData);
	if (check2(theData)) {
		m_ListInjury.AddString(theData);
		injury.insert({ theData, team[theData] });
	}
	injury_size = injury.size();
	UpdateData(FALSE);
}


void CTomerNaftalyDlg::OnLbnSelchangeListstarters()
{
	CString theData;
	// get the selected position of the listbox
	UINT uiSelection = m_ListStarters.GetCurSel();

	if (uiSelection == LB_ERR) return;


	m_ListStarters.GetText(uiSelection, theData);
	for (map<CString, Player*>::const_iterator iter = team.begin(); iter != team.end(); ++iter)
	{
		if (iter->first == theData)
		{
			SPlayer_height = iter->second->getheight();
			SPlayer_weight = iter->second->getweight();
			SPlayer_Name = iter->first;
			SPlayer_number = iter->second->getNum();
			SPlayer_pos = typeid(*(iter->second)).name() + 6;
			sppg = iter->second->getpoints();
			saps = iter->second->getasists();
			srpg = iter->second->getrebs();
		}
	}

	UpdateData(FALSE);
}


void CTomerNaftalyDlg::OnLbnSelchangeListcenters()
{
	CString theData;
	// get the selected position of the listbox
	UINT uiSelection = m_ListCenters.GetCurSel();

	if (uiSelection == LB_ERR) return;


	m_ListCenters.GetText(uiSelection, theData);
	for (map<CString, Player*>::const_iterator iter = team.begin(); iter != team.end(); ++iter)
	{
		if (iter->first == theData)
		{
			SPlayer_height = iter->second->getheight();
			SPlayer_weight = iter->second->getweight();
			SPlayer_Name = iter->first;
			SPlayer_number = iter->second->getNum();
			SPlayer_pos = typeid(*(iter->second)).name() + 6;
			sppg = iter->second->getpoints();
			saps = iter->second->getasists();
			srpg = iter->second->getrebs();
		}
	}

	UpdateData(FALSE);
}


void CTomerNaftalyDlg::OnBnClickedButtonstartf()
{
	CString theData;
	// get the selected position of the listbox
	UINT uiSelection = m_ListStarters.GetCurSel();

	if (uiSelection == LB_ERR) return;


	m_ListStarters.GetText(uiSelection, theData);
	if (check2(theData)) {
		if (Sforward1 == "")
			Sforward1 = team[theData]->getNum();
		else if (Sforward2 == "")
		{
			Sforward2 = team[theData]->getNum();
		}
		else if (team[theData]->getNum() != Sforward1 && team[theData]->getNum() != Sforward2)
			Sforward2 = team[theData]->getNum();
	}
	UpdateData(FALSE);
}


void CTomerNaftalyDlg::OnBnClickedButtonstartc()
{
	CString theData;
	// get the selected position of the listbox
	UINT uiSelection = m_ListCenters.GetCurSel();

	if (uiSelection == LB_ERR) return;
	m_ListCenters.GetText(uiSelection, theData);
	if (check2(theData)) {
		Scenter1 = team[theData]->getNum();
	}
	
	
		
	
	UpdateData(FALSE);
}


/*void CTomerNaftalyDlg::OnStnClickedSforward1()
{
	Sforward1 = "yesh";
	UpdateData(FALSE);
}*/


/*void CTomerNaftalyDlg::OnStnDblclickSforward1()
{
	Sforward1 = "1";
	Sguard1 = "2";
	UpdateData(FALSE);
}*/


/*void CTomerNaftalyDlg::OnStnClickedStaticheightv()
{
	// TODO: Add your control notification handler code here
}*/


/*void CTomerNaftalyDlg::OnEnChangeEdit5()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}*/


void CTomerNaftalyDlg::OnBnClickedButtonedit1()
{
	UINT uiSelection = m_ListTeam.GetCurSel();

	if (uiSelection == LB_ERR) return;
	UpdateData(TRUE);
	m_points.ShowWindow(SW_SHOW);
	m_spoints.ShowWindow(SW_SHOW);
	m_asists.ShowWindow(SW_SHOW);
	m_reb.ShowWindow(SW_SHOW);
	m_sasists.ShowWindow(SW_SHOW);
	m_sreb.ShowWindow(SW_SHOW);
	m_done.ShowWindow(SW_SHOW);
	
	// get the selected position of the listbox
	


	m_ListTeam.GetText(uiSelection, EditPlayer);

	UpdateData(FALSE);
}


void CTomerNaftalyDlg::OnBnClickedButtondone()
{
	UpdateData(TRUE);
	team[EditPlayer]->setpoints(Player_Points);
	team[EditPlayer]->setasists(Player_Asists);
	team[EditPlayer]->setrebs(Player_Reb);

	m_points.ShowWindow(SW_HIDE);
	m_spoints.ShowWindow(SW_HIDE);
	m_asists.ShowWindow(SW_HIDE);
	m_reb.ShowWindow(SW_HIDE);
	m_sasists.ShowWindow(SW_HIDE);
	m_sreb.ShowWindow(SW_HIDE);
	m_done.ShowWindow(SW_HIDE);

	Player_Points = 0;
	Player_Asists = 0;
	Player_Reb = 0;


	UpdateData(FALSE);
}


void CTomerNaftalyDlg::OnBnClickedButtonedit2()
{

	UINT uiSelection = m_ListStarters.GetCurSel();

	if (uiSelection == LB_ERR) return;
	UpdateData(TRUE);
	m_points.ShowWindow(SW_SHOW);
	m_spoints.ShowWindow(SW_SHOW);
	m_asists.ShowWindow(SW_SHOW);
	m_reb.ShowWindow(SW_SHOW);
	m_sasists.ShowWindow(SW_SHOW);
	m_sreb.ShowWindow(SW_SHOW);
	m_done.ShowWindow(SW_SHOW);

	// get the selected position of the listbox
	


	m_ListStarters.GetText(uiSelection, EditPlayer);

	UpdateData(FALSE);
}


void CTomerNaftalyDlg::OnBnClickedButtonedit3()
{
	UINT uiSelection = m_ListCenters.GetCurSel();

	if (uiSelection == LB_ERR) return;
	UpdateData(TRUE);
	m_points.ShowWindow(SW_SHOW);
	m_spoints.ShowWindow(SW_SHOW);
	m_asists.ShowWindow(SW_SHOW);
	m_reb.ShowWindow(SW_SHOW);
	m_sasists.ShowWindow(SW_SHOW);
	m_sreb.ShowWindow(SW_SHOW);
	m_done.ShowWindow(SW_SHOW);

	// get the selected position of the listbox
	


	m_ListCenters.GetText(uiSelection, EditPlayer);

	UpdateData(FALSE);
}

bool CTomerNaftalyDlg::check(CString newP)
{
	for (map<CString, Player*>::const_iterator iter = team.begin(); iter != team.end(); ++iter)
	{
		if (iter->first == newP)
			return false;
	}
	return true;
}

bool CTomerNaftalyDlg::check2(CString newP)
{
	for (map<CString, Player*>::const_iterator iter = injury.begin(); iter != injury.end(); ++iter)
	{
		if (iter->first == newP)
			return false;
	}
	return true;
}

/*void CTomerNaftalyDlg::OnStnClickedStaticrpg()
{
	// TODO: Add your control notification handler code here
}*/


void CTomerNaftalyDlg::OnBnClickedButton1()
{
	UpdateData(TRUE);
	Sguard1 = "";
	Sguard2 = "";
	Sforward1 = "";
	Sforward2 = "";
	Scenter1 = "";
	UpdateData(FALSE);
}


void CTomerNaftalyDlg::OnBnClickedButton2()
{
	UpdateData(TRUE);
	Startes starers;
	CFile file;
	file.Open(L"StartersInfo.hse", CFile::modeCreate | CFile::modeWrite);
	CArchive ar(&file, CArchive::store);
	starers.g1 = Sguard1;
	starers.g2 = Sguard2;
	starers.f1 = Sforward1;
	starers.f2 = Sforward2;
	starers.c1 = Scenter1;
	starers.Serialize(ar);
	ar.Close();
}


void CTomerNaftalyDlg::OnBnClickedButton3()
{
	UpdateData(TRUE);

	CFile file;

	file.Open(L"StartersInfo.hse", CFile::modeRead);
	CArchive ar(&file, CArchive::load);
	Startes starers;

	starers.Serialize(ar);
	Sguard1 = starers.g1;
	Sguard2 = starers.g2;
	Sforward1 = starers.f1;
	Sforward2 = starers.f2;
	Scenter1 = starers.c1;

	
	ar.Close();
	file.Close();

	UpdateData(FALSE);
}
