#pragma once
#include "Guard.h"

// PointGuard dialog

class PointGuard : public CDialogEx,public Guard
{
	DECLARE_DYNAMIC(PointGuard)

public:
	PointGuard(CWnd* pParent = nullptr);   // standard constructor
	virtual ~PointGuard();
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
