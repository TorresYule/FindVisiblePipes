#pragma once
#include<string>
#include<vector>
using namespace std;
class Item {
private:
	string cataloge;//������������BREAKS��LEAKS
	vector<string> IDContent;//�����µ�ID

public:
	string getCataloge() {
		return cataloge;
	}
	void setCataloge(string s) {
		cataloge = s;
	}

	void appendLog(string line,string title) {
		//line ��ǰ��������
		//title ��ǰ����������
		if (title != cataloge)
			return;//�쳣Ҫ����
		IDContent.push_back(title);//??
	}
};