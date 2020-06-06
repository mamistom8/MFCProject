// PointGuard.cpp : implementation file
//

#include "stdafx.h"
#include "TomerNaftaly.h"
#include "PointGuard.h"
#include "afxdialogex.h"


// PointGuard dialog

IMPLEMENT_DYNAMIC(PointGuard, CDialogEx)

PointGuard::PointGuard(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TOMERNAFTALY_DIALOG, pParent)
{

}

PointGuard::~PointGuard()
{
}

void PointGuard::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(PointGuard, CDialogEx)
END_MESSAGE_MAP()


// PointGuard message handlers

void PointGuard::setName(CString n)
{
	this->playername = n;
}
void PointGuard::setNum(CString n)
{
	this->playernumber = n;
}

CString PointGuard::getName()const {
	return this->playername;
}
CString PointGuard::getNum() const {
	return this->playernumber;
}

void PointGuard::setheight(int n) { this->height = n; }
void PointGuard::setwheight(int n) { this->weight = n; }
int PointGuard::getheight() const {
	return this->height;
}
int PointGuard::getweight() const {
	return this->weight;
}

void PointGuard::setpoints(double p) {
	this->ppg = p;
}

double PointGuard::getpoints()const {
	return this->ppg;
}

void PointGuard::setasists(double p) {
	this->apg = p;
}

double PointGuard::getasists()const {
	return this->apg;
}

void PointGuard::setrebs(double p) {
	this->rpg = p;
}

double PointGuard::getrebs()const {
	return this->rpg;
}