// Player.cpp : implementation file
//

#include "stdafx.h"
#include "TomerNaftaly.h"
#include "Player.h"
#include "afxdialogex.h"


// Player dialog

IMPLEMENT_DYNAMIC(Player, CDialogEx)

Player::Player(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TOMERNAFTALY_DIALOG, pParent)
{

}

Player::~Player()
{
}

void Player::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Player, CDialogEx)
END_MESSAGE_MAP()


// Player message handlers
