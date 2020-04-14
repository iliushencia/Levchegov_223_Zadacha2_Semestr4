#ifndef CCOMPLEXVECTOR_H
#define CCOMPLEXVECTOR_H
#include "complexnumber.h"
#include <iomanip>
#include <fstream>
#include <vector>

class CCompexVector {
protected:
	CCompexVector(int l, const string& path);
	CCompexVector(int l, const vector<Complex>& d);

public:
	virtual bool output(const string& path)=0;
	CCompexVector() ;

	virtual ~CCompexVector() ;

	CCompexVector& operator = (const CCompexVector& a) ;

	int size() const ;

	vector<Complex> dat() const ;

	void pushback(Complex num);
private:
	int len;
	vector<Complex> data;
};

Complex operator * (const CCompexVector& a, const CCompexVector& b) ;
#endif // CCOMPLEXVECTOR_H

