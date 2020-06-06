#pragma once
#include "Player.h"

// Guard dialog

class Guard : public CDialogEx, public Player
{
	DECLARE_DYNAMIC(Guard)

public:
	Guard(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Guard();
	/*void setName(CString n);
	void setNum(CString n);
	CString getName()const;
	CString getNum() const;
	void setheight(int);
	void setwheight(int);
	int getheight() const;
	int getweight() const;
	void setpoints(double);
	double getpoints() const;
	 void setasists(double) ;
	 double getasists() const ;
	 void setrebs(double) ;
	 double getrebs() const ;*/
	virtual void setName(CString n) = 0;
	virtual void setNum(CString n) = 0;
	virtual void setheight(int) = 0;
	virtual void setwheight(int) = 0;
	virtual CString getName()const = 0;
	virtual CString getNum() const = 0;
	virtual int getheight() const = 0;
	virtual int getweight() const = 0;
	virtual void setpoints(double) = 0;
	virtual double getpoints() const = 0;
	virtual void setasists(double) = 0;
	virtual double getasists() const = 0;
	virtual void setrebs(double) = 0;
	virtual double getrebs() const = 0;
	// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TOMERNAFTALY_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
	/*CString playername;
	CString playernumber;
	int height;
	int weight;
	double ppg=0;
	double apg=0;
	double rpg=0;
	double age;*/
	

};


