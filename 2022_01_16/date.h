#pragma once
#include<iostream>
using namespace std;

class Date
{
public:
	Date(int year = 0, int month = 1, int day = 1);  // 构造函数
	void Print();  // 打印函数
	int GetMonthDay(int year, int month);  // 获取该年月的天数函数

	bool operator>(const Date& d);  // 判断日期是否更早
	bool operator<(const Date& d);  // 判断日期是否更晚
	bool operator>=(const Date& d);  // 判断日期是否更早或同天
	bool operator<=(const Date& d);  // 判断日期是否更晚或同天
	bool operator==(const Date& d);  // 判断日期是否同天
	bool operator!=(const Date& d);  // 判断日期是否不同天

	Date& operator+=(int day);  // 更新为day天之后的日期
	Date operator+(int day);  // 获取为day天之后的日期

	// 后置++为了跟前置++进行区分，增加了参数占位，构成函数重载
	Date& operator++();  // 获取第二天的日期的前置++
	Date operator++(int);  // 获取第二天的日期的后置++（编译器自动补int类型值区分）

private:
	int _year;
	int _month;
	int _day;
};