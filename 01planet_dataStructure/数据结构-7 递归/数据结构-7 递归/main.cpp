﻿/*
函数调用的本质是创建函数的副本

递归：函数直接/间接调用自己
1. 终止条件/递归出口	避免内存溢出/时间超时
2. 递归体：递归函数中的具体代码。

应用：
当一个大问题 可以分成若干个（解决方式相同的）小问题来解决；

tips:
1.递归的缺点:大部分递归很难准确的找到递归出口。
2.递归只在数据结构和算法课及刷题时用。
3.开发时尽量避免递归（风险很大！！）
4.递归的优化
	转化为循环
	基于栈（递归的本质就是栈，把函数压入栈）（大部分）

尾递归--->编译器层面的优化，运行完副本1的结尾运行副本2，副本1就可以扔掉，让副本2在同一空间创建
	最后返回时直接返回到主函数
*/

#include <iostream>
using namespace std;

// 斐波那契数列，传入项数n，返回第n项的值
int f(int x) {
	if (x == 1 || x == 2) return 1;
	return f(x - 1) + f(x - 2);
}

int main()
{
	for (int i = 1; i < 10; i++)
		cout << f(i) << endl;
}