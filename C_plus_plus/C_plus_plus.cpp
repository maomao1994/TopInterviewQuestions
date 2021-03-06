// C_plus_plus.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#define DEBUG
#define SQR1(x)(x*x)
#define SQR2(x)((x)*(x))
#define STR(s) #s //# 字符串化操作符
#define CONS(a,b)(int)(a##e##b) //## 连接操作符 (#@ 字符化操作符)

int main()
{
	//宏定义相关
	cout << "1.预处理宏定义相关：" << endl;

#ifdef DEBUG
	cout << "DEBUG 已经被定义." << endl;
#endif // DEBUG

	int a = 2;
	cout << "SQR1(x)(x*x):"<<SQR1(a + 2) << endl;
	cout << "SQR2(x)((x)*(x)):"<<SQR2(a + 2) << endl;

	cout << "STR(VCK):"<<STR(vck) << endl;
	cout << "CONS(2,3):"<<CONS(2, 3) << endl;
	cout << "int(2e3):"<<int(2e3) << endl;

	cout << "=======================================" << endl;

	//动态内存分配
	cout << "2.动态内存分配：" << endl;
	/*
	（1）使用 new 和 delete .
	类型名 *指针变量 = new 类型名;
	类型名 *指针变量 = new 类型名[元素个数];

	（2）使用 malloc 和 free . 
	void malloc(unsigned int size);
	void free(void *p);
	*/
	int m_num = 0;
	cout << "输入m_num:" << endl;
	cin >> m_num;
	int *m_p_new = new int[m_num];
	cout << "(1)输入"<<m_num<<"个数:" << endl;
	for (size_t i = 0; i < m_num; i++)
	{
		cin >> m_p_new[i];
	}
	cout << "(1)打印" << m_num << "个数:" << endl;
	for (size_t i = 0; i < m_num; i++)
	{
		cout << m_p_new[i] << endl;
	}
	delete[] m_p_new;
	m_p_new = NULL;

	int *m_p_malloc = (int*)malloc(sizeof(int) * m_num);
	cout << "(2)输入" << m_num << "个数:" << endl;
	for (size_t i = 0; i < m_num; i++)
	{
		cin >> m_p_malloc[i];
	}
	cout << "(2)打印" << m_num << "个数:" << endl;
	for (size_t i = 0; i < m_num; i++)
	{
		cout << m_p_malloc[i] << endl;
	}
	free(m_p_malloc);
	m_p_malloc = NULL;
	cout << "=======================================" << endl;




}

