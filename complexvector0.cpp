#include"complexvector0.hpp"
#include"FactoryVert.hpp"

	bool CCompexVectorVert :: output(const string& path) {
		 ofstream out;          // поток для записи
		 out.open(path); // окрываем файл для записи
		if (out.is_open()) {
			for(long long unsigned int i=0; i<this->dat().size(); i++) {
				this->dat()[i].i()>=0 ? out<<this->dat()[i].r()<<"+"<<dat()[i].i()<<"i"<<endl :
						out<<this->dat()[i].r()<<dat()[i].i()<<"i"<<endl;

			}
			return true;
		}
		return false;
	}

CCompexVector&  operator + (const CCompexVector& a, const CCompexVector& b) {

	FactoryVert factory;
	auto* res = factory.Create();
	if(a.size()>=b.size()){
		for(int i=0; i<b.size(); i++){
			res->pushback(a.dat()[i]+b.dat()[i]);
		}
		for(int i=b.size(); i<a.size(); i++){
			res->pushback(a.dat()[i]);
		}
	} else {
		cout<<"check"<<endl;
		for(int i=0; i<a.size(); i++){
			cout<<"2"<<endl;
			res->pushback(a.dat()[i]+b.dat()[i]);
		}
		for(int i=a.size(); i<b.size(); i++){
			cout<<"3"<<endl;
			res->pushback(b.dat()[i]);
		}
	}
	return *res;
}


CCompexVector& operator - (const CCompexVector& a,const CCompexVector& b) {
	FactoryVert factory;
	auto* res = factory.Create();
	if(a.size()>=b.size()){
		for(int i=0; i<b.size(); i++){
			res->pushback(a.dat()[i]-b.dat()[i]);
		}
		for(int i=b.size(); i<a.size(); i++){
			res->pushback(a.dat()[i]);
		}
	} else {
		for(int i=0; i<a.size(); i++){
			res->pushback(a.dat()[i]-b.dat()[i]);
		}
		for(int i=a.size(); i<b.size(); i++){
			res->pushback(0-b.dat()[i]);
		}
	}
	return *res;
}


