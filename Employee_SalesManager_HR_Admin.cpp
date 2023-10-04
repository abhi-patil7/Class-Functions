using namespace std;
#include<iostream>
#include<string.h>
#include<typeinfo>
class Employee
{
	int id;
	char name[20];
	double salary;
	
	public:
	
	Employee()		// Default
	{
		this->id=0;
		strcpy(this->name,"Not Given");
		this->salary=0;
	}
	Employee(int id, const char*name, double salary)
	{
		this->id=id;
		strcpy(this->name,name);
		this->salary=salary;
	}
	void setId(int id)
	{
		this->id=id;
	}
	void setName(const char* name)
	{
		strcpy(this->name,name);
	}
	void setSalary(double salary)
	{
		this->salary=salary;
	}
	int getId()
	{
		return this->id;
	}
	char* getName()
	{
		return this->name;
	}
	double getSalary()
	{
		return this->salary;
	}
	virtual void display()
	{
		cout<<"ID"<<getId();
		cout<<"\nName"<<getName();
		cout<<"\nSalary"<<getSalary();
	}
};
class SalesManager:public Employee
{
	double incentive;
	int target;
	
	public:
	
	SalesManager():Employee()
	{
		this->incentive=0;
		this->target=0;
	}
	SalesManager(int id, const char* name, double salary, double incentive, int target):Employee(id,name,salary)
	{
		this->incentive=incentive;
		this->target=target;
	}
	void setIncentive(double incentive)
	{
		this->incentive=incentive;
	}
	void setTarget(int target)
	{
		this->target=target;
	}
	double getIncentive()
	{
		return this->incentive;
	}
	int getTarget()
	{
		return this->target;
	}
	void display()
	{
//		cout<<"Id :"<<getId();
//		cout<<"\nName :"<<getName();
//		cout<<"\nSalary :"<<getSalary();
		Employee::display();
		cout<<"\nIncentive :"<<getIncentive();
		cout<<"\nTarget :"<<getTarget();
	}
};
class HR:public Employee
{
	double commission;
	
	public:
	
	HR():Employee()
	{
		this->commission=0;
	}
	HR(int id, const char*name, double salary, double commission):Employee(id,name,salary)
	{
		this->commission=commission;
	}
	void setCommission(double commission)
	{
		this->commission=commission;
	}
	double getCommission()
	{
		return this->commission;
	}
	void display()
	{
//		cout<<"Id :"<<getId();
//		cout<<"\nName :"<<getName();
//		cout<<"\nSalary :"<<getSalary();
		Employee::display();
		cout<<"\nCommission :"<<getCommission();
	}
};
class Admin:public Employee
{
	double allowance;
	
	public:
	
	Admin():Employee()
	{
		this->allowance=0;
	}
	Admin(int id, const char* name, double salary, double allowance):Employee(id,name,salary)
	{
		this->allowance=allowance;
	}
	void setAllowance(double allowance)
	{
		this->allowance=allowance;
	}
	double getAllowance()
	{
		return this->allowance;
	}
	void display()
	{
		//cout<<"Id :"<<getId();
		//cout<<"\nName :"<<getName();
		//cout<<"\nSalary :"<<getSalary();
		Employee::display();
		cout<<"\nAllowance :"<<getAllowance();
	}
};
class AreaSM:public SalesManager
{
	char area[20];
	
	public:
	
	AreaSM():SalesManager()		// Default
	{
		strcpy(this->area,"Not Given");
	}
	AreaSM(int id, const char* name, double salary, double incentive, int target,const char* area):SalesManager(id, name, salary, incentive, target)		// Parametrise
	{
		strcpy(this->area,area);
	}
	void setArea(char* area)
	{
		strcpy(this->area,area);
	}
	char* getArea()
	{
		return this->area;
	}
	void display()
	{
//		cout<<"Id :"<<getId();
//		cout<<"\nName :"<<getName();
//		cout<<"\nSalary :"<<getSalary();
//		cout<<"\nIncentive :"<<getIncentive();
//		cout<<"\nTarget :"<<getTarget();
		SalesManager::display();
		cout<<"\nArea :"<<getArea();
	}
};
int main1();
void allEmployeeDetail(Employee*);
int main()
{
	cout<<"--------------EMP------------------\n";
	Employee emp;
	//emp.display();
	emp.setId( 20);
	emp.setName(": Prathamesh Pawar");
	emp.setSalary( 25000);
	emp.display();
	cout<<"\n--------------SM------------------\n";
	SalesManager s1;
	//s1.display();
	s1.setId( 40);
	s1.setName(": Rohit Shinde");
	s1.setSalary( 45000.67);
	s1.setIncentive( 567.78);
	s1.setTarget( 9);
	s1.display();
	cout<<"\n---------------HR------------------\n";
	HR h2( 37,": Abhishek Patil", 56432.45, 2300.45);
	h2.display();
	cout<<"\n---------------ADMIN--------------------\n";
	Admin a2( 39,": Ujwal Wagh", 23456.67, 567.6);
	a2.display();
	a2.setAllowance( 700.89);
	cout<<"\n---------------AreaSM----------------------\n";
	AreaSM a3( 30,": Abhishek Patil", 35565.45, 658.4, 7,": Pune");
	a3.display();
	main1();
	

}
int main1()
{
	cout<<"\n----------------Main1----------------------\n";
	int i;
	Employee* emp[4];
	emp[0]=new SalesManager(37,(char*)"Abhishek Patil",25000,200,7);
	emp[1]=new HR(42,(char*)"Mohit Gohel",3000,6000);
	emp[2]=new Admin(39,(char*)"Ujwal Wagh",35000,300);
	emp[3]=new AreaSM(38,(char*)"Manish Suralakar",20000,2000,9,(char*)"Pune");
	for(i=0;i<4;i++)
	{
		allEmployeeDetail(emp[i]);
	}
}
void allEmployeeDetail(Employee* emp)
{
	SalesManager* sm=dynamic_cast<SalesManager*>(emp);
	if(sm!=NULL)
	{
		cout<<"Incentive :"<<sm->getIncentive();
	}
	HR* h=dynamic_cast<HR*>(emp);
	if(h!=NULL)
	{
		cout<<"\nCommission :"<<h->getCommission();
	}
	Admin* a=dynamic_cast<Admin*>(emp);
	if(a!=NULL)
	{
		cout<<"\nAllowance :"<<a->getAllowance();
	}
}
