/* https://github.com/sohitfirs/8.2.git */

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void divide(float a)
{
	float e;
//	e=1024/a;
//	return e;
	
	try{
		if (a==0)
			throw 1;
	
	e=1024/a;
	cout<<"1024/"<<a<<"="<<e<<endl;
	}
	
	catch (int e)
	{
		if (e==1)
			cout<<"Ошибка!!!Ошибка!!!Ошибка!!!"<<endl<<"Делить на ноль нельзя"<<endl;
	}
}

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	
	float x=0;

	cout<<"Введите число на которе хотите разделить 1024: ";
	cin>>x;
	cin.ignore();

	divide(x);
	
	cin.get();
	
	return 1;
}
