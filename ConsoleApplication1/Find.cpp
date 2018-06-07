#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include"Scenario.h"
//extern "C" {
//#include "epanet2.h";
//}
using namespace std;

vector<Scenario> InputID(string fileName) {
	fstream infile(fileName);
	if (!infile.is_open)
	{
		cout << "Error opening infile!" << endl;
		return;
	}
	vector<Scenario> *Scen;
	Scenario V;
	string line;
	string title;
	string s;
	Item *i;
	while (infile>>s) {
		if (s[0] == 'S') {
			Scen = new vector<Scenario>;
			*Scen.setCataloge(s);
		}
		i = new Item();
		if (//atoi no exception)
			i.appendLog(line, title);
	}
	infile.close();
	return *Scen;
}
int main() {
	vector<Scenario> Scen;
	Scen=InputID("Damage_Scenarios.txt");//读取输入文件中各情境下的BREAKS和LEAKS
	//Get Diameter
	//Print Visible ID
	string s = "sc";
	s.rfind("Scenarios");
	return 0;
}