// Guard.cpp : implementation file
//

#include "stdafx.h"
#include "TOMERNAFTALY.h"
#include "Guard.h"
#include "afxdialogex.h"


// Guard dialog

IMPLEMENT_DYNAMIC(Guard, CDialogEx)

Guard::Guard(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TOMERNAFTALY_DIALOG, pParent)
{

}

Guard::~Guard()
{
}

void Guard::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Guard, CDialogEx)
END_MESSAGE_MAP()


// Guard message handlers
/*
void Guard::setName(CString n)
{
	this->playername = n;
}
void Guard::setNum(CString n)
{
	this->playernumber = n;
}

CString Guard::getName()const {
	return this->playername;
}
CString Guard::getNum() const {
	return this->playernumber;
}

void Guard::setheight(int n) { this->height = n; }
void Guard::setwheight(int n) { this->weight = n; }
int Guard::getheight() const {
	return this->height;
}
int Guard::getweight() const {
	return this->weight;
}

void Guard::setpoints(double p) {
	this->ppg = p;
}

double Guard::getpoints()const {
	return this->ppg;
}

void Guard::setasists(double p) {
	this->apg = p;
}

double Guard::getasists()const {
	return this->apg;
}

void Guard::setrebs(double p) {
	this->rpg = p;
}

double Guard::getrebs()const {
	return this->rpg;
}*/