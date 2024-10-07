#include<iostream>
using namespace std;


/*
OOP-de classlardan ve ya structdan istifade olunur
bu structuralar vasitesile obyektler yaranir ve b obyektler
arasinda elaqeler qurulur
Obyekt - clasin bir numunesidir
OOP bir paradigmadir

class ve struct arasinda ferq
struct - default publicdir
class - default privatedir

*/

//struct Person {
//	string name;
//	int age;
//};


//class Person
//{
//	string name;
//	int age;
//
//};

/////////////////////////////////////


/*
constructor-  special methoddur. Obyektin adi ile eyni olur ve obyekt 
yaranan anda ise dusur
4 novu var:
deafult
with parameters
copy
move

*/
//class Person
//{
//public:
//	string name;
//	int age;
//
//	Person(string _name, int _age) {  //constructor with parameters
//		name = _name;
//		age = _age;
//	}
//
//	void Show() {
//		cout << "Name: " << name << endl;
//		cout << "Age: " << age << endl << endl;
//	}
//
//};

//Encapsulation
//Access modifier- public,protected,private
class Student {
	string fullname;
	int age;

public:
	Student(string fullname,int age) {
		this->fullname = fullname;
		this->age = age;
	}

	//Encapsulation 
	string Get_Fullname() { //getter
		return fullname;
	}
	
	int Get_Age() {
		return age;
	}

	void Set_Fullname(string fullname) { //Setter
		this->fullname = fullname;  //this pointerdir. Current obyekti gosterir
	}

	void Set_Age(int age) {
		if (age > 14) {
			this->age = age;
		}
		else {
			cout << "Age should be biggest 14" << endl;
		}
		
	}

	~Student() {  //~ tilda ile yazilir destructor. Obyekt silinen anda ise dusur
		cout << "Deleted " << fullname << endl;
	}
};


void main() {

	//Person p;
	//p.name = "Murad";
	//p.age = 90;

	//Person person1("Mahmud", 80);
	//Person person2("Eldar", 35);
	//Person person3("Ayla", 27);
	//Person person4("Orxan", 21);
	//
	//person1.Show();
	//person2.Show();
	//person3.Show();
	//person4.Show();

	/*
	OOP- 4 prinsipi var
	1. Encapsulation
	2. Inheritance
	3. Polymorphysm
	4. Abstraction
	
	*/


	
	
	Student student1("Elnur", 28);
	Student student2("Mahmud", 28);
	Student student3("Turxan", 28);

	//cout << student1.Get_Fullname() << endl;




}
