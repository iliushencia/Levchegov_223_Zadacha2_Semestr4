#ifndef CCOMPLEXVECTOR0_H
#define CCOMPLEXVECTOR0_H
#include "complexvector.hpp"
#include"complexvector1.hpp"

class CCompexVectorVert :public CCompexVector{
	public:
	CCompexVectorVert(int l, const string& path) : CCompexVector(l, path) {}
	CCompexVectorVert(int l, const vector<Complex>& d) : CCompexVector(l, d) {}
	CCompexVectorVert() : CCompexVector() {}
	virtual bool output(const string& path);
	using CCompexVector::operator = ;
};

CCompexVector& operator + (const CCompexVector& a, const CCompexVector& b) ;

CCompexVector& operator - (const CCompexVector& a, const CCompexVector& b) ;


#endif // CCOMPLEXVECTOR0_H

