#pragma once
#include<iostream>
using namespace std;

class Date
{
	friend ostream& operator<<(ostream& out, const Date& d);  // 友元函数
public:
	Date(int year = 0, int month = 1, int day = 1);  // 构造函数
	void Print() const;  // 打印函数
	int GetMonthDay(int year, int month) const;  // 获取该年月的天数函数

	bool operator>(const Date& d) const;  // 判断日期是否更早
	bool operator==(const Date& d) const;  // 判断日期是否同天

	// 实现>和==或<和==，剩下的操作符实现复用即可，任何类要实现比较，都可以用这种方式
	bool operator>=(const Date& d) const;  // 判断日期是否更早或同天
	bool operator<(const Date& d) const;  // 判断日期是否更晚
	bool operator<=(const Date& d) const;  // 判断日期是否更晚或同天
	bool operator!=(const Date& d) const;  // 判断日期是否不同天

	Date& operator+=(int day);  // 更新为day天之后的日期
	Date operator+(int day) const;  // 获取为day天之后的日期
	Date& operator-=(int day);  // 更新为day天之前的日期
	Date operator-(int day) const;  // 获取为day天之前的日期

	// 后置++为了跟前置++进行区分，增加了参数占位，构成函数重载
	Date& operator++();  // 获取第二天的日期的前置++
	Date operator++(int);  // 获取第二天的日期的后置++（编译器自动补int类型值区分）

	Date& operator--();  // 获取前一天的日期的前置++
	Date operator--(int);  // 获取前一的日期的后置++（编译器自动补int类型值区分）

	int operator-(const Date& d) const;  // 两个日期相隔天数
	void PrintWeekDay() const;  // 获取该日期的星期

	//void operator<<(ostream& out);  // 流插入

private:
	int _year;
	int _month;
	int _day;
};

ostream& operator<<(ostream& out, const Date& d);  // cout传给out，对象传给d