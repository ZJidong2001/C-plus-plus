#pragma once
#include<iostream>
using namespace std;

class Date
{
public:
	Date(int year = 0, int month = 1, int day = 1);  // ���캯��
	void Print();  // ��ӡ����
	int GetMonthDay(int year, int month);  // ��ȡ�����µ���������

	bool operator>(const Date& d);  // �ж������Ƿ����
	bool operator<(const Date& d);  // �ж������Ƿ����
	bool operator>=(const Date& d);  // �ж������Ƿ�����ͬ��
	bool operator<=(const Date& d);  // �ж������Ƿ�����ͬ��
	bool operator==(const Date& d);  // �ж������Ƿ�ͬ��
	bool operator!=(const Date& d);  // �ж������Ƿ�ͬ��

	Date& operator+=(int day);  // ����Ϊday��֮�������
	Date operator+(int day);  // ��ȡΪday��֮�������

	// ����++Ϊ�˸�ǰ��++�������֣������˲���ռλ�����ɺ�������
	Date& operator++();  // ��ȡ�ڶ�������ڵ�ǰ��++
	Date operator++(int);  // ��ȡ�ڶ�������ڵĺ���++���������Զ���int����ֵ���֣�

private:
	int _year;
	int _month;
	int _day;
};