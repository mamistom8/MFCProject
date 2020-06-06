#pragma once
#include "Guard.h"

// ShootingGuard dialog

class ShootingGuard : public CDialogEx ,public Guard
{
	DECLARE_DYNAMIC(ShootingGuard)

public:
	ShootingGuard(CWnd* pParent = nullptr);   // standard constructor
	virtual ~ShootingGuard();
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
	int height;
	int weight;
	double ppg = 0;
	double apg = 0;
	double rpg = 0;
	double age;
	DECLARE_MESSAGE_MAP()
};
