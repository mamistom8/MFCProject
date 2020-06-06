#pragma once
#include "Player.h"

// Center dialog

class Center :public CDialogEx, public Player
{
	DECLARE_DYNAMIC(Center)

public:
	Center(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Center();
	void setName(CString n);
	void setNum(CString n);
	CString getName()const;
	CString getNum() const;
	void setheight(int);
	void setwheight(int);
	int getheight() const;
	int getweight() const;
	void setpoints(double);
	double getpoints() const;
	void setasists(double);
	double getasists() const;
	void setrebs(double);
	double getrebs() const;
	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TOMERNAFTALY_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	CString playername;
	CString playernumber;
	DECLARE_MESSAGE_MAP()
	int height;
	int weight;
	double ppg=0;
	double apg=0;
	double rpg=0;
	double age;
};
