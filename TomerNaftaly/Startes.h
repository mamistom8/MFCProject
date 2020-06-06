#pragma once
#include <string>
#include <iostream>
using namespace std;
class Startes: public CObject
{
public:
	Startes();
	~Startes();

	void Serialize(CArchive& ar);
	DECLARE_SERIAL(Startes);

public:
	CString g1;
	CString g2;
	CString f1;
	CString f2;
	CString c1;

};

