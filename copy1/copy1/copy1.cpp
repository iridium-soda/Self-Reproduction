﻿// copy1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<stdlib.h>
#include <string>

using namespace std;
#define times 10
char   path_buffer[_MAX_PATH];
char   drive[_MAX_DRIVE];
char   dir[_MAX_DIR];
char   fname[_MAX_FNAME];
char   ext[_MAX_EXT];

int main(int argc,char *argv[])
{
	
	//int times = stoi(argv[2], nullptr, 10);
	cout << "Times Comfirmation:" << times << endl;
	int i;
	string filename;
	char base1[50];
	_splitpath_s(argv[0], drive, dir, base1, ext);
	char base []= "copy";
	char fg[] = ".exe";
	char base2[] = "copy";
	char base3[] = ".exe";
	char routue[] = ".\\datapan\\";
	char command[100];
	char order[5];
	system("mkdir datapan");
	for (i = 2; i < times+2; i++)
	{
	

		 _itoa_s(i, order, 10);
		 strcat_s(order,"\0");
		 cout << "Now Copying :" << i <<endl;
		 
		 strcpy_s(command, base);
		 strcat_s(command, " ");
		 strcat_s(command,base1);
		 strcat_s(command, fg);
		 strcat_s(command, " ");
		 strcat_s(command, routue);
		 strcat_s(command, base2);
		 strcat_s(command, order);
		 strcat_s(command, base3);
		 //strcat_s(command, " ");
		 
		 cout << command << endl;
		 system(command);
		 cout << "Copy Finished" << order << endl;
	}
	cout <<"Finished" << endl;
	system("Pause");
	return 0;


}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
