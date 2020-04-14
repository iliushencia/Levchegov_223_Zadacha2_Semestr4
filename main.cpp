#include<iostream>
#include"complexvector.hpp"
#include"complexnumber.h"
#include"complexvector1.hpp"
#include"complexvector0.hpp"
int main() {
	string check = ""; //для того чтобы консолька не закрывалась
	Complex a (1,1);
	Complex b = a + a;
	Complex c = a - a;
	Complex d = b * c; // демонстрация работы класса комплексного числа
	CCompexVectorVert data1 (4,"data.txt");
	CCompexVectorHori data2 (4,"data.txt");
	data1.pushback(b);
	data2.pushback(c);
	data1.pushback(c);
	data2.pushback(d);
	CCompexVectorVert data3;
	CCompexVectorHori data4;
	data3=data1+data2; // Здесь происходит демонстрация работы фабрики.
	data4=data1-data2; // Мы складываем векторы дочерних классов без конвертации
	data3.output("data3+.txt");
	data4.output("data4-.txt"); // демонстрация работы всего у класса вектора
	if (data1.output("vertres.txt") && data2.output("horires.txt")) {
		cout << "CHECK vertres.txt & horires.txt" << endl;
	}
	cin >> check;
	return 0;
}

