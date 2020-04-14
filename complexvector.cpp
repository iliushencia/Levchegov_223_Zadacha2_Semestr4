#include "complexvector.hpp"
	CCompexVector::CCompexVector(int l, const string& path) {
			len=0;
			//vector<Complex> res = {};
			int re=0, im=0;
			char sign = ' ';
			ifstream input(path);
			if(input){
				string line;
				while (getline(input, line)) {
				stringstream ss(line);
				ss>>re>>sign>>im;
				if(sign=='-') im=-im;
				Complex num (re,im);
				data.push_back(num);
				len++;
				}
				if(len!=l){
					cout<<"SIZE ERROR"<<endl;
					data.clear();
				}
			} else { cout<<"ERROR FILE" <<endl;}

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
