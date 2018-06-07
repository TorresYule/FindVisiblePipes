#pragma once
#include<string>
#include<vector>
using namespace std;
class Item {
private:
	string cataloge;//类型名，包括BREAKS和LEAKS
	vector<string> IDContent;//该类下的ID

public:
	string getCataloge() {
		return cataloge;
	}
	void setCataloge(string s) {
		cataloge = s;
	}

	void appendLog(string line,string title) {
		//line 当前读到的行
		//title 当前读到的类型
		if (title != cataloge)
			return;//异常要处理
		IDContent.push_back(title);//??
	}
};