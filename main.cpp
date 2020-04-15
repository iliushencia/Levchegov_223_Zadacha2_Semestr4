#include<iostream>
#include"complexvector.hpp"
#include"complexnumber.h"
#include"complexvector1.hpp"
#include"complexvector0.hpp"
#include"Factory.hpp"
#include"FactoryHori.hpp"
#include"FactoryVert.hpp"
int main() {
	vector<CCompexVector*> res = {};
	vector<string> paths;
	int count = 0;
	string check = "", path="data.txt";
	ifstream input(path);
	if(input){
		string line;
		while (getline(input, line)) {

			string type = "", path = "";
			int l = 0;
			stringstream ss(line);
			ss >> type >> l >> path;
			paths.push_back(path);
			if (type=="vert"){
				FactoryVert fucc;
				res.push_back(fucc.Create(l,line));
				count++;
			} else if (type=="hori") {
				FactoryHori fucc;
				res.push_back(fucc.Create(l,line));
				count++;
			}
		}
	}
	for (int i =0; i<count; i++){
		if(res[i]->output(paths[i])) continue;
		check = "error";
	}
	if (check=="") {cout<<"check all the output files"<<endl<<"Press any key to continue"<<endl;}
	else {cout<<check<<endl<<"Press any key to continue"<<endl;}
	cin >> check; //для того чтобы консолька не закрывалась
	return 0;
}

