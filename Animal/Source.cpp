#include <iostream>
#include <list>
#include<iterator>
using namespace std;
int sum;
int vib;
list<string> arr;
list<string>::iterator it;
string name;
void mnu() {
 
	cout << "1.���������� �������.";//+
	cout << endl << "2.�������� �������.";//+
	cout << endl << "3.����� �������.";//+
	cout << endl << "4.���������� ������� � ���������� �����.";//+
	cout << endl << "5.�����.";//+
	cout << endl << "6.��������������.";
	cout << endl << "7.�����.";//+
	cout << endl << "   �������� �������:";
	cin >> vib;
};
void output() {
	for (it = arr.begin(); it != arr.end(); it++)
		cout << *it << " ";
	cout << endl;
	 

};
void Inputt()
{
	 
	cout << endl << "Animal name: ";
	cin >> name;
  	arr.push_back((name));
}
void Input2()
{

	cout << endl << "Animal name: ";
	cin >> name;
	cout << endl << "������������: ";
	int a;
	cin >>a;
	*it += a;
	 arr.insert(it, name);
	 
 
}
void dl()
{

	 
	arr.pop_back();
	 
	 
	 
	 
}

void izm()
{


	for (auto& i : arr)

	{
		for (auto j = i.begin(); j != i.end(); j++)
		{
			*j = *j + 1;
			cout << *j;
		}
	}

	cout << endl;

	for (auto k : arr)
	{
		cout << k;
	}
}




 
void findo()
{


	cout << "������� ������� �����: ";
	string findt;
	cin >> findt;
	for (auto it = arr.begin(); it != arr.end(); it++) {
		for (auto i = findt.find(*it); i != findt.npos; i = findt.find(*it, i + 1)) {
			cout << "est\n";
		}
	}



};

int main() {
	setlocale(LC_CTYPE, "Rus");
	bool sit = true;
	 	while (sit)
	{
		mnu();
		switch (vib)
		{
		case 1:
			cout << endl << "1.���������� �������." << endl;
			Inputt();
			system("pause");
			system("cls");
			break;
		case 2:
			cout << endl << "2.�������� ���������� �������." << endl;
			dl();
			system("pause");
			system("cls");
			break;
		case 3:
			cout << endl << "3.����� �������." << endl;
			findo();
			system("pause");
			system("cls");
			break;
		case 4:
			cout << endl << "4.���������� ������� � ���������� �����." << endl;
			Input2();
			system("pause");
			system("cls");
			break;
		case 5 :
			output();
			system("pause");
			system("cls");
			break;
		case 6:
			cout << endl << "6.��������������." << endl;
			izm();
			system("pause");
			system("cls");
			break;
		case 7:
			sit = false;
			break;
		default: 
			cout << endl << "������" << endl;
			system("pause");
			system("cls");
			break;
		}

	}
	

 
 
};
