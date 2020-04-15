#include "complexvector.hpp"
	CCompexVector::CCompexVector(int l, const string& line) {
			len=0;
			int re=0, im=0;
			char sign = ' ';
			stringstream ss(line);
			string num = "";
			ss>>num>>num>>num;
				for (int i=0; i<l; i++) {
				ss>>num;
				stringstream nn(num);
				nn>>re>>sign>>im;
				if(sign=='-') im=-im;
				Complex num (re,im);
				data.push_back(num);
				len++;
				}
	}

	CCompexVector::CCompexVector() {
		len=0;
		data = {};
	}

	CCompexVector::~CCompexVector() {
		data.clear();
	}

	CCompexVector& CCompexVector::operator = (const CCompexVector& a) {
		this->len=a.len;
		this->data=a.data;
	 return *this;
	}
	int CCompexVector::size() const {
		return len;
	}
	vector<Complex> CCompexVector::dat() const {
		return data;
	}

Complex operator * (const CCompexVector& a, const CCompexVector& b) {
	Complex res=0;
	if(a.size()>=b.size()){
		for(int i=0; i<b.size(); i++){
			res=res+a.dat()[i]*b.dat()[i];
		}
	} else {
		for(int i=0; i<a.size(); i++){
			res=res+a.dat()[i]*b.dat()[i];
		}
	}
	return res;
}
CCompexVector:: CCompexVector(int l, const vector<Complex>& d) {
	len = l;
	data = d;
}

void CCompexVector:: pushback(Complex num) {
	data.push_back(num);
	len++;
}
