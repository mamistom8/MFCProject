// Center.cpp : implementation file
//

#include "stdafx.h"
#include "TomerNaftaly.h"
#include "Center.h"
#include "afxdialogex.h"

IMPLEMENT_DYNAMIC(Center, CDialogEx)

Center::Center(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TOMERNAFTALY_DIALOG, pParent)
{

}

Center::~Center()
{
}

void Center::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Center, CDialogEx)
END_MESSAGE_MAP()


// Center message handlers
void Center::setName(CString n)
{
	this->playername = n;
}
void Center::setNum(CString n)
{
	this->playernumber = n;
}

CString Center::getName()const {
	return this->playername;
}
CString Center::getNum() const {
	return this->playernumber;
}

void Center::setheight(int n) { this->height = n; }
void Center::setwheight(int n) { this->weight = n; }
int Center::getheight() const {
	return this->height;
}
int Center::getweight() const {
	return this->weight;
}

void Center::setpoints(double p) {
	this->ppg = p;
}

double Center::getpoints()const {
	return this->ppg;
}

void Center::setasists(double p) {
	this->apg = p;
}

double Center::getasists()const {
	return this->apg;
}

void Center::setrebs(double p) {
	this->rpg = p;
}

double Center::getrebs()const {
	return this->rpg;
}