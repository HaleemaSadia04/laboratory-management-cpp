#include<iostream> 
#include<string> 
using namespace std;
class Laboratory
{
private:
	string name;
	string location;
public:
	Laboratory() :name("NoName"), location("NULL")
	{}
	void input()
	{
		cout << "Enter laboratory name:";
		getline(cin, name);
		cout << "Enter laboratory location:";
		getline(cin, location);
	}
	void show()
	{
		cout << "Laboratory name is:" << name << endl;
		cout << "Laboratory location is:" << location << endl;
	}
};
class WetLab :public Laboratory
{
private:
	double no_of_microscopes;
	string scientist_name;
public:
	void set_no_of_microscopes(double no_micro)
	{
		no_of_microscopes = no_micro;
	}
	void set_scientist_name(string sci_name)
	{
		scientist_name = sci_name;
	}
	string get_scientist_name()
	{
		return scientist_name;
	}
	double get_no_of_microscopes()
	{
		return no_of_microscopes;
	}
	//overridden function 
	void input()
	{
		Laboratory::input();
		cout << "Enter number of microscopes:";
		cin >> no_of_microscopes;
		cin.ignore();
		cout << "Enter Scientist name:";
		getline(cin, scientist_name);
	}
	//overridden function 
	void show()
	{
		Laboratory::show();
		cout << "Number of microscopes are:" << no_of_microscopes << endl;
		cout << "Scientist name is:" << scientist_name << endl;
	}
};
class DryLab :public Laboratory
{
private:
	double no_of_computers;
	double capacity;
public:
	void set_no_of_computers(double com)
	{
		no_of_computers = com;
	}
	double get_no_of_computers()
	{
		return no_of_computers;
	}
	void set_capacity(double cap)
	{
		capacity = cap;
	}
	double get_capacity()
	{
		return capacity;
	}
	//overridden function 
	void input()
	{
		Laboratory::input();
		cout << "Enter number of computers:";
		cin >> no_of_computers;
		cout << "Enter computer capacity:";
		cin >> capacity;
		cin.ignore();
	}
	//overridden function 
	void show()
	{
		Laboratory::show();
		cout << "Number of computers are:" << no_of_computers << endl;
		cout << "Computer capacity is:" << capacity << " GB" << endl;
	}
};
int main()
{
	WetLab wl;
	wl.input();
	cout << "************************" << endl;
	cout << "WetLab details are:" << endl;
	wl.show();
	cout << "************************" << endl;
	DryLab dl;
	dl.input();
	cout << "************************" << endl;
	cout << "DryLab details are:" << endl;
	dl.show();
	cout << "************************" << endl;
}