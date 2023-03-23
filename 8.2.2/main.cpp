/* https://github.com/sohitfirs/8.2.git */

#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;

void openFile(string y)
{
	cout<<y<<endl;
	
	ifstream fin;
	cout<<"Попытка открыть файл"<<endl;
	fin.open(y.c_str());
	if(!fin.is_open())
	{
		throw "FileWasNotOpenedException";
	}
	else
	{
		cout<<"Файл успешно открыт"<<endl;
		cout<<"Текст файла:"<<endl<<endl;
	
		string str;
			while (!fin.eof())
		{
			str="";
			getline(fin, str);
			cout<<str<<endl;
		}
		fin.close();
	}
}


int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	
	string i;
	cout<<"Введите название файла: ";
	getline(cin, i);
	i+=".txt";
	try
	{
		openFile(i);
	}
	
	catch (const char* ex)
	{
		cout<<"!!!Ошибка открытия файла!!!"<<endl;
	}
	cin.get();
	
	return 1;
}
