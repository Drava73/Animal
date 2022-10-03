#include <iostream>
using namespace std;
class Animal
{
protected:
	string name;
	string country;
	int year;
	 
public:
	 
	void print();
	void Input();


};
 
void Animal::print()
{
}

void Animal::Input()
{
	cout << endl << "Animal name: "  ;
	cin >> name;
	cout << endl << "Animal country: "  ;
	cin >> country;
	cout << endl << "Animal year: "  ;
	cin >> year;
}
class dog :public Animal
{
public:
	 
	void print() {
		cout << endl << "Animal name: " << name;
		cout << endl << "Animal country: " << country;
		cout << endl << "Animal year: " << year;
		 
	}
};
class parrot :public Animal
{
public:
	void print() {
		cout << endl << "Animal name: " << name;
		cout << endl << "Animal country: " << country;
		cout << endl << "Animal year: " << year;
		 
	}
};
class penguin :public Animal
{
public:
	void print() {
		cout << endl << "Animal name: " << name;
		cout << endl << "Animal country: " << country;
		cout << endl << "Animal year: " << year;
		 
	}
};
class elephant : public Animal
{
public:
	void print() {
		cout << endl << "Animal name: " << name;
		cout << endl << "Animal country: " << country;
		cout << endl << "Animal year: " << year;
		 
	}
};

int main() {

	 
	dog obj1;
	obj1.Input();
	obj1.print();
 
};
