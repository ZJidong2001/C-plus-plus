#include <iostream>
using namespace std;

//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	int _year;
//	int _month;
//	int _day;
//};
//
//bool operator>(const Date& d1, const Date& d2)
//{
//	if (d1._year > d2._year)
//	{
//		return true;
//	}
//	else if (d1._year == d2._year && d1._month > d2._month)
//	{
//		return true;
//	}
//	else if (d1._year == d2._year && d1._month == d2._month && d1._day > d2._day)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main()  // ���������
//{
//	Date day1(2022, 1, 16);
//	Date day2(2022, 1, 31);
//
//	// �ж����������Ⱥ��Լ����������������ȣ�Ĭ������£�C++�ǲ�֧���Զ������Ͷ���ʹ���������
//	cout << (day1 > day2) << endl;  // ���������<<��>���ȼ��ߣ������Ҫ������
//	cout << operator>(day1, day2) << endl;
//
//	return 0;
//}

//class Date  // ��������������ڲ�ʵ�֣���֤��װ�Ը���
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	bool operator>(const Date& d)  // ����thisָ�룺bool operator>(Date* const this, const Date& d)
//	{
//		if (_year > d._year)
//		{
//			return true;
//		}
//		else if (_year == d._year && _month > d._month)
//		{
//			return true;
//		}
//		else if (_year == d._year && _month == d._month && _day > d._day)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date day1(2022, 1, 16);
//	Date day2(2022, 1, 31);
//
//	cout << (day1 > day2) << endl;
//	cout << day1.operator>(day2) << endl;
//
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Date(const Date& d)  // �������캯������ֵ�������������ֵ���أ�����øú������������÷��أ��򲻻���ã�
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	Date& operator=(const Date& d)  // ��ֵ���ػὫ*this��������ʱ���������ÿ������캯���������÷����򲻵��ÿ������캯�����ֶ���ɾ&���Կ����߲��
//	{
//		if (this != &d)  // ��������£��Լ����Լ���ֵ���ô����ж�һ��ֱ������  day1 = day1
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		return *this;  // ��ֵ��������Ϊ��ֵ  i = j = k = 10
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()  // ��ֵ���������
//{
//	Date day1(2022, 1, 16);
//	Date day2(2022, 1, 31);
//
//	// ����ʵ�����Ķ���ʱ�����Ѿ����ڵĶ�����п�����ʼ��
//	Date day3(day2);  // ��������
//	Date day4 = day1;  // ��������
//
//	// �����Ѿ����ڵĶ���֮����и�ֵ����
//	day1 = day3;  // day1.operator=(day3)
//
//	return 0;
//}

#include "date.h"

void TestDate1()
{
	Date d1;
	d1.Print();

	Date d2(2022, 1, 16);
	d2.Print();

	Date d3(2022, 13, 15);
	d3.Print();

	Date d4(2022, 2, 29);
	d4.Print();

	Date d5(2020, 2, 29);
	d5.Print();

	Date d6(2000, 2, 29);
	d6.Print();
}

void TestDate2()
{
	Date d1(2022, 1, 16);
	d1.Print();
	Date ret = d1 + 100;
	d1.Print();
	ret.Print();

	d1 += 100;
	d1.Print();

	Date ret1 = d1++;  // d1.operator++(&d1, 0);
	Date ret2 = ++d1;  // d1.operator++(&d1);
	ret1.Print();
	ret2.Print();
}

int main()
{
	TestDate1();
	TestDate2();

	return 0;
}