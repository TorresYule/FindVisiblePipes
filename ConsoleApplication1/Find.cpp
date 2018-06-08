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
	vector<Scenario> scen;//��Ϊ����ֵ���
	Scenario *v;
	Item *i;
	string line;
	string title;
	string s;
	while (infile>>s) {
		if (s[0] == 'S') {
			if(v!=NULL){
				scen.push_back(v);
			}
			v=new Scenario();//����ǿ����½�����
			continue;
		}
		if(atoi(s.c_str())==0){
			//�������Ҫ�ٿ�һ�£����ڰ칫�Ҳ��ǵò鵽��ɶ������
			//˵�������˸�break֮���
			if(i==null){
				//˵����ʱitem�ǿյģ�û�м��صĶ�����Ҫ�½�����ȷ��������
				i=new Item();
				i.setCatalog(s);
			}else if(s!=i.getCatalog()){
				//֮ǰitem�뵱ǰ���������Ͳ�һ�����統ǰitem��break��������leak
				v.push_back(i);
				i=new Item();
				i.setCatalog(s);
			}
			continue;
		}else{
			//ת�������ֲ������������ΪID����ӦΪ��ǰitem������
			i.appendLog(s);//�������Ӧ�ø�һ�£�ֻҪline������
		}
	}
	infile.close();
	return scen;
}
int main() {
	vector<Scenario> Scen;
	Scen=InputID("Damage_Scenarios.txt");//��ȡ�����ļ��и��龳�µ�BREAKS��LEAKS
	//Get Diameter
	//Print Visible ID
	string s = "sc";
	s.rfind("Scenarios");
	return 0;
}