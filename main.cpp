#include<iostream>
#include"complexvector.hpp"
#include"complexnumber.h"
#include"complexvector1.hpp"
#include"complexvector0.hpp"
int main() {
	string check = ""; //��� ���� ����� ��������� �� �����������
	Complex a (1,1);
	Complex b = a + a;
	Complex c = a - a;
	Complex d = b * c; // ������������ ������ ������ ������������ �����
	CCompexVectorVert data1 (4,"data.txt");
	CCompexVectorHori data2 (4,"data.txt");
	data1.pushback(b);
	data2.pushback(c);
	data1.pushback(c);
	data2.pushback(d);
	CCompexVectorVert data3;
	CCompexVectorHori data4;
	data3=data1+data2; // ����� ���������� ������������ ������ �������.
	data4=data1-data2; // �� ���������� ������� �������� ������� ��� �����������
	data3.output("data3+.txt");
	data4.output("data4-.txt"); // ������������ ������ ����� � ������ �������
	if (data1.output("vertres.txt") && data2.output("horires.txt")) {
		cout << "CHECK vertres.txt & horires.txt" << endl;
	}
	cin >> check;
	return 0;
}

