/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: Thu 11 Jun 2015 08:56:01 PM CST
 ************************************************************************/

#include<iostream>

#include <stack>

using namespace std;

int getLevel(char ch)
{
	int ret = 0;
	
	if(ch == '*' || ch == '/')
	{
		ret = 2;
	}
	if(ch == '+' || ch == '-')
	{
		ret = 1;
	}
	if(ret == '(')
	{
		ret = 0;
	}
	return ret;
}

int print(char *op)
{
	return 0;
}

int main()
{	
	stack<char> list;
	list.push('a');

	char *p = "1 + 2 * 3";

	print(p);

	cout<<list.top()<<endl;;

	cout<< getLevel('*')<<endl;
	cout<< getLevel('-')<<endl;
	cout<< getLevel('(')<<endl;
	return 0;
}
