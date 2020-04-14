#ifndef CCOMPLEXVECTOR1_H
#define CCOMPLEXVECTOR1_H
#include "complexvector.hpp"

class CCompexVectorHori :public CCompexVector{
	public:
	CCompexVectorHori(int l, const string& path) : CCompexVector(l, path) {}
	CCompexVectorHori() : CCompexVector() {}
	CCompexVectorHori(int l, const vector<Complex>& d) : CCompexVector(l, d) {}
	virtual bool output(const string& path) ;
	using CCompexVector::operator = ;
};

#endif // CCOMPLEXVECTOR1_H
