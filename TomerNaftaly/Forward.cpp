// Forward.cpp : implementation file
//

// Forward.cpp : implementation file
//

#include "stdafx.h"
#include "TomerNaftaly.h"
#include "Forward.h"
#include "afxdialogex.h"


// Forward dialog

IMPLEMENT_DYNAMIC(Forward, CDialogEx)

Forward::Forward(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TOMERNAFTALY_DIALOG, pParent)
{

}

Forward::~Forward()
{
}

void Forward::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Forward, CDialogEx)
END_MESSAGE_MAP()


// Forward message handlers

/*void Forward::setName(CString n)
{
	this->playername = n;
}
void Forward::setNum(CString n)
{
	this->playernumber = n;
}

CString Forward::getName()const {
	return this->playername;
}
CString Forward::getNum() const {
	return this->playernumber;
}
void Forward::setheight(int n) { this->height = n; }
void Forward::setwheight(int n) { this->weight = n; }
int Forward::getheight() const {
	return this->height;
}
int Forward::getweight() const {
	return this->weight;
}

void Forward::setpoints(double p) {
	this->ppg = p;
}
double Forward::getpoints()const {
	return this->ppg;
}

void Forward::setasists(double p) {
	this->apg = p;
}

double Forward::getasists()const {
	return this->apg;
}

void Forward::setrebs(double p) {
	this->rpg = p;
}

double Forward::getrebs()const {
	return this->rpg;
}*/