// StackEx.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "StackEx.h"
#include<iostream>
using namespace std;
int main()
{
	//压栈，弹出序列判断
	int pPush[5] = {1,2,3,4,5};
	int pPop[5] = {4,3,5,1,2};
	cout << "压栈，弹出序列判断："<<isPopOrder(pPush,pPop,5) << endl;
    return 0;
}

