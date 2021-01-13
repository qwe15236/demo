// User1.0.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <conio.h>
#include "server.h"

using namespace std;

int main()
{
    string ID = "UserID";
    cout << "User 1.0 请发送信息(exit 退出 | clear 清除信息)\n" << endl;
    string str;
    while (1)
    {
        cout << "User: ";
        cin >> str;
        Information(str, ID);
        accept(ID);
    }
}
