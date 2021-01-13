
#pragma once
#ifndef SERVER_H_
#define SERVER_H_

#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <time.h> 

using namespace std;

//发送信息
void Information(string str, string ID);//发送内容
void Tools(string str); //命令处理工具 如 exit clear
void accept(string ID);

#endif // !SERVER_H_
