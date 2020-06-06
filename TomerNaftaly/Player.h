#pragma once


// Player dialog

class Player : public CDialogEx
{
	DECLARE_DYNAMIC(Player)

public:
	Player(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Player();
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
};
