#include "stdafx.h"
#include "Startes.h"

IMPLEMENT_SERIAL(Startes, CObject, 0)
Startes::Startes()
{
}


Startes::~Startes()
{
}


void Startes::Serialize(CArchive& ar) {
	CObject::Serialize(ar);

	if (ar.IsStoring())
		ar << g1 << g2 << f1 <<f2 <<c1;
	else
		ar >> g1 >> g2 >> f1 >> f2 >> c1;
}