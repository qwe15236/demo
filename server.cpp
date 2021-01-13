#include "server.h"

ofstream outfile;
ifstream infile;
string User;
string Jenny;

void Information(string str,string ID)
{
	if (ID == "UserID")
	{
		outfile.open("C:\\Users\\CJhon\\source\\repos\\User1.0\\server\\UserServer.txt");
		outfile << str;
		Tools(str);
		outfile.close();
	}
	else if (ID == "JennyID")
	{
		outfile.open("C:\\Users\\CJhon\\source\\repos\\User1.0\\server\\JennyServer.txt");
		outfile << str;
		Tools(str);
		outfile.close();
	}
}

void accept(string ID)
{
	if (ID == "UserID")
	{
		infile.open("C:\\Users\\CJhon\\source\\repos\\User1.0\\server\\JennyServer.txt");
		infile >> Jenny;
		if (Jenny == "")
		{
			return;
		}
		cout << "Jenny: " << Jenny << endl;
		infile.clear();
		infile.close();
	}
	else if(ID == "JennyID")
	{
		infile.open("C:\\Users\\CJhon\\source\\repos\\User1.0\\server\\UserServer.txt");
		infile >> User;
		if (User == "")
		{
			return;
		}
		cout << "User: " << User << endl;
		infile.clear();
		infile.close();
	}
}

//命令处理工具 如 exit clear
void Tools(string str)
{
	//退出
	if (str == "exit")
	{
		infile.open("C:\\Users\\CJhon\\source\\repos\\User1.0\\server\\UserServer.txt");
		infile.open("C:\\Users\\CJhon\\source\\repos\\User1.0\\server\\UserServer.txt");
		outfile.clear();
		outfile.close();
		infile.clear();
		infile.close();
		infile.open("C:\\Users\\CJhon\\source\\repos\\User1.0\\server\\JennyServer.txt");
		infile.open("C:\\Users\\CJhon\\source\\repos\\User1.0\\server\\JennyServer.txt");
		outfile.clear();
		outfile.close();
		infile.clear();
		infile.close();
		exit(0);
	}

	//清除文件内容
	if (str == "clear")
	{
		outfile.clear();
		system("cls");
	}
}
