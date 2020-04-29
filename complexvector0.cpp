#include"complexvector0.hpp"
#include"FactoryVert.hpp"


	bool CCompexVectorVert :: output(const string& path) {
		 ofstream out;          // поток для записи
		 out.open(path); // окрываем файл для записи
		if (out.is_open()) {
			for(long long unsigned int i=0; i<this->size(); i++) {
				this->dat()[i].i()>=0 ? out<<this->dat()[i].r()<<"+"<<dat()[i].i()<<"i"<<endl :
						out<<this->dat()[i].r()<<dat()[i].i()<<"i"<<endl;

			}
			return true;
		}
		return false;
	}
CCompexVector&  operator + (const CCompexVector& a,const CCompexVector& b) {
FactoryVert factory;
auto res = factory.Create(a);
int size = 0;
auto start = chrono::system_clock::now();
if (a.size() >= b.size()) {
auto res = factory.Create(a);
size = b.size();
int i = 0;
for (i = 0; i < size; ++i) {
res->add(i, a);
res->add(i, b);
}
auto end = std::chrono::system_clock::now();
int elapsed_ms = static_cast<int>(chrono::duration_cast<chrono::milliseconds>(end - start).count());
std::cout << "Addition operator runtime is " << elapsed_ms << " ms\n";
return *res;
} else {
auto res = factory.Create(b);
size = a.size();
int i = 0;
for (i = 0; i < size; ++i) {
	res->add(i, a);
	res->add(i, b);
}
auto end = std::chrono::system_clock::now();
int elapsed_ms = static_cast<int>(chrono::duration_cast<chrono::milliseconds>(end - start).count());
std::cout << "Addition operator runtime is " << elapsed_ms << " ms\n";
return *res;
}
auto end = std::chrono::system_clock::now();
int elapsed_ms = static_cast<int>(chrono::duration_cast<chrono::milliseconds>(end - start).count());
std::cout << "Addition operator runtime is " << elapsed_ms << " ms\n";
return *res;
}

CCompexVector&  operator - (const CCompexVector& a, const CCompexVector& b) {
	FactoryVert factory;
	auto res = factory.Create(a);
	int size = 0;
	auto start = chrono::system_clock::now();
	if (a.size() >= b.size()) {
		auto res = factory.Create(a);
		size = b.size();
		int i = 0;
		for (i = 0; i < size; ++i) {
			res->add(i, a);
			res->sub(i, b);
		}
		auto end = std::chrono::system_clock::now();
		int elapsed_ms = static_cast<int>(chrono::duration_cast<chrono::milliseconds>(end - start).count());
		std::cout << "subtraction operator runtime is " << elapsed_ms << " ms\n";
		return *res;
	}
	else {
		auto res = factory.Create(b);
		size = a.size();
		int i = 0;
		for (i = 0; i < size; ++i) {
			res->add(i, a);
			res->sub(i, b);
		}
		auto end = std::chrono::system_clock::now();
		int elapsed_ms = static_cast<int>(chrono::duration_cast<chrono::milliseconds>(end - start).count());
		std::cout << "subtraction operator runtime is " << elapsed_ms << " ms\n";
		return *res;
	}
	auto end = std::chrono::system_clock::now();
	int elapsed_ms = static_cast<int>(chrono::duration_cast<chrono::milliseconds>(end - start).count());
	std::cout << "subtraction operator runtime is " << elapsed_ms << " ms\n";
	return *res;
}