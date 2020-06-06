// ShootingGuard.cpp : implementation file
//

#include "stdafx.h"
#include "TomerNaftaly.h"
#include "ShootingGuard.h"
#include "afxdialogex.h"


// ShootingGuard dialog

IMPLEMENT_DYNAMIC(ShootingGuard, CDialogEx)

ShootingGuard::ShootingGuard(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TOMERNAFTALY_DIALOG, pParent)
{

}

ShootingGuard::~ShootingGuard()
{
}

void ShootingGuard::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ShootingGuard, CDialogEx)
END_MESSAGE_MAP()


// ShootingGuard message handlers

void ShootingGuard::setName(CString n)
{
	this->playername = n;
}
void ShootingGuard::setNum(CString n)
{
	this->playernumber = n;
}

CString ShootingGuard::getName()const {
	return this->playername;
}
CString ShootingGuard::getNum() const {
	return this->playernumber;
}

void ShootingGuard::setheight(int n) { this->height = n; }
void ShootingGuard::setwheight(int n) { this->weight = n; }
int ShootingGuard::getheight() const {
	return this->height;
}
int ShootingGuard::getweight() const {
	return this->weight;
}

void ShootingGuard::setpoints(double p) {
	this->ppg = p;
}

double ShootingGuard::getpoints()const {
	return this->ppg;
}

void ShootingGuard::setasists(double p) {
	this->apg = p;
}

double ShootingGuard::getasists()const {
	return this->apg;
}

void ShootingGuard::setrebs(double p) {
	this->rpg = p;
}

double ShootingGuard::getrebs()const {
	return this->rpg;
}