using namespace std;
#include<iostream>
#include<string.h>
class Game
{
	int rules;
	char gname[20];
	char pname[20];
	
	public:

	Game()
	{
		this->rules=0;
		strcpy(this->gname,"Not Given");
		strcpy(this->pname,"Not Given");
	}
	Game(int rules, char* gname, char* pname)
	{
		this->rules=rules;
		strcpy(this->gname,gname);
		strcpy(this->pname,pname);
	}
	void setRules(int rules)
	{
		this->rules=rules;
	}
	void setGname(char* gname)
	{
		strcpy(this->gname,gname);
	}
	void setPname(char* pname)
	{
		strcpy(this->pname,pname);
	}
	int getRules()
	{
		return this->rules;
	}
	char* getGname()
	{
		return this->gname;
	}
	char* getPname()
	{
		return this->pname;
	}
	void display()
	{
		cout<<"Rules :"<<getRules();
		cout<<"\nGname :"<<getGname();
		cout<<"\nPname :"<<getPname();
	}
};
class Indoor:public Game
{
	int setting;
	double size;
	
	public:
	
	Indoor():Game()		// Default
	{
		this->setting=0;
		this->size=0;
	}
	Indoor(int rules, char* gname, char* pname):Game(rules,gname,pname)
	{
		this->setting=setting;
		this->size=size;
	}
	void setSetting(int setting)
	{
		this->setting=setting;
	}
	void setSize(double size)
	{
		this->size=size;
	}
	int getSetting()
	{
		return this->setting;
	}
	double getSize()
	{
		return this->size;
	}
	void display()
	{
		cout<<"Rules :"<<getRules();
		cout<<"\nGname :"<<getGname();
		cout<<"\nPname :"<<getPname();
		cout<<"\nSetting :"<<getSetting();
		cout<<"\nSize :"<<getSize();
	}
};
class Outdoor:public Game
{
	int j_no;
	int psize;
	
	public:
	
	Outdoor():Game()
	{
		this->j_no=0;
		this->psize=0;
	}
	Outdoor(int rules, char* gname, char* pname, int j_no, int size):Game(rules,gname,pname)
	{
		this->j_no=j_no;
		this->psize=psize;
	}
	void setJ_No(int j_no)
	{
		this->j_no=j_no;
	}
	void setPsize(int psize)
	{
		this->psize=psize;
	}
	int getJ_No()
	{
		return this->j_no;
	}
	int getPsize()
	{
		return this->psize;
	}
	void display()
	{
		cout<<"Rules :"<<getRules();
		cout<<"\nGname :"<<getGname();
		cout<<"\nPname :"<<getPname();
		cout<<"\nJ_No :"<<getJ_No();
		cout<<"\nPsize :"<<getPsize();
	}
};
int main()
{
	cout<<"********************G********************\n";
	cout<<"------------------------------------------\n";
	Game g;
	g.setRules(10);
	g.setGname((char*)"Cricket");
	g.setPname((char*)"Abhishek");
	g.display();
	cout<<"\n------------------------------------------\n";
	cout<<"\n********************ID********************";
	cout<<"\n------------------------------------------\n";
	Indoor id;
	id.setRules(10);
	id.setGname((char*)"BGMI");
	id.setPname((char*)"Abhishek");
	id.setSetting(50);
	id.setSize(1.8);
	id.display();
	cout<<"\n------------------------------------------\n";
	cout<<"\n********************OD********************";
	cout<<"\n------------------------------------------\n";
	Outdoor od;
	od.setRules(10);
	od.setGname((char*)"Volleyball");
	od.setPname((char*)"Abhishek");
	od.setJ_No(7);
	od.setPsize(7);
	od.display();
	cout<<"\n------------------------------------------\n";
}
