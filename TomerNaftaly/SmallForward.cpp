// SmallForward.cpp : implementation file
//

#include "stdafx.h"
#include "TomerNaftaly.h"
#include "SmallForward.h"
#include "afxdialogex.h"


// SmallForward dialog

IMPLEMENT_DYNAMIC(SmallForward, CDialogEx)

SmallForward::SmallForward(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TOMERNAFTALY_DIALOG, pParent)
{

}

SmallForward::~SmallForward()
{
}

void SmallForward::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(SmallForward, CDialogEx)
END_MESSAGE_MAP()


// SmallForward message handlers

void SmallForward::setName(CString n)
{
	this->playername = n;
}
void SmallForward::setNum(CString n)
{
	this->playernumber = n;
}

CString SmallForward::getName()const {
	return this->playername;
}
CString SmallForward::getNum() const {
	return this->playernumber;
}
void SmallForward::setheight(int n) { this->height = n; }
void SmallForward::setwheight(int n) { this->weight = n; }
int SmallForward::getheight() const {
	return this->height;
}
int SmallForward::getweight() const {
	return this->weight;
}

void SmallForward::setpoints(double p) {
	this->ppg = p;
}
double SmallForward::getpoints()const {
	return this->ppg;
}

void SmallForward::setasists(double p) {
	this->apg = p;
}

double SmallForward::getasists()const {
	return this->apg;
}

void SmallForward::setrebs(double p) {
	this->rpg = p;
}

double SmallForward::getrebs()const {
	return this->rpg;
}
