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
	vector<Scenario> scen;//作为返回值输出
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
			v=new Scenario();//如果是空则新建对象
			continue;
		}
		if(atoi(s.c_str())==0){
			//这个条件要再看一下，我在办公室不记得查到是啥来着了
			//说明读到了个break之类的
			if(i==null){
				//说明此时item是空的，没有加载的对象，需要新建并且确定其属性
				i=new Item();
				i.setCatalog(s);
			}else if(s!=i.getCatalog()){
				//之前item与当前读到的类型不一样，如当前item是break但读到了leak
				v.push_back(i);
				i=new Item();
				i.setCatalog(s);
			}
			continue;
		}else{
			//转换成数字不报错，则读到的为ID，且应为当前item的类型
			i.appendLog(s);//这个参数应该改一下，只要line就行了
		}
	}
	infile.close();
	return scen;
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