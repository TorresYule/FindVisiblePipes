#pragma once
#include<string>
#include<vector>
#include"Item.h"
using namespace std;
class Scenario {
private:
	string cataloge;
	vector<Item> ItemContent;

public:
	string getCataloge() {
		return cataloge;
	}
	void setCataloge(string s) {
		cataloge = s;
	}

};

