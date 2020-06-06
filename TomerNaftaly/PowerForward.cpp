// PowerForward.cpp : implementation file
//

#include "stdafx.h"
#include "TomerNaftaly.h"
#include "PowerForward.h"
#include "afxdialogex.h"


// PowerForward dialog

IMPLEMENT_DYNAMIC(PowerForward, CDialogEx)

PowerForward::PowerForward(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TOMERNAFTALY_DIALOG, pParent)
{

}

PowerForward::~PowerForward()
{
}

void PowerForward::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(PowerForward, CDialogEx)
END_MESSAGE_MAP()


// PowerForward message handlers

void PowerForward::setName(CString n)
{
	this->playername = n;
}
void PowerForward::setNum(CString n)
{
	this->playernumber = n;
}

CString PowerForward::getName()const {
	return this->playername;
}
CString PowerForward::getNum() const {
	return this->playernumber;
}
void PowerForward::setheight(int n) { this->height = n; }
void PowerForward::setwheight(int n) { this->weight = n; }
int PowerForward::getheight() const {
	return this->height;
}
int PowerForward::getweight() const {
	return this->weight;
}

void PowerForward::setpoints(double p) {
	this->ppg = p;
}
double PowerForward::getpoints()const {
	return this->ppg;
}

void PowerForward::setasists(double p) {
	this->apg = p;
}

double PowerForward::getasists()const {
	return this->apg;
}

void PowerForward::setrebs(double p) {
	this->rpg = p;
}

double PowerForward::getrebs()const {
	return this->rpg;
}
