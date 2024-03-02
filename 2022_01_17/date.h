#pragma once
#include<iostream>
using namespace std;

class Date
{
	friend ostream& operator<<(ostream& out, const Date& d);  // ��Ԫ����
public:
	Date(int year = 0, int month = 1, int day = 1);  // ���캯��
	void Print() const;  // ��ӡ����
	int GetMonthDay(int year, int month) const;  // ��ȡ�����µ���������

	bool operator>(const Date& d) const;  // �ж������Ƿ����
	bool operator==(const Date& d) const;  // �ж������Ƿ�ͬ��

	// ʵ��>��==��<��==��ʣ�µĲ�����ʵ�ָ��ü��ɣ��κ���Ҫʵ�ֱȽϣ������������ַ�ʽ
	bool operator>=(const Date& d) const;  // �ж������Ƿ�����ͬ��
	bool operator<(const Date& d) const;  // �ж������Ƿ����
	bool operator<=(const Date& d) const;  // �ж������Ƿ�����ͬ��
	bool operator!=(const Date& d) const;  // �ж������Ƿ�ͬ��

	Date& operator+=(int day);  // ����Ϊday��֮�������
	Date operator+(int day) const;  // ��ȡΪday��֮�������
	Date& operator-=(int day);  // ����Ϊday��֮ǰ������
	Date operator-(int day) const;  // ��ȡΪday��֮ǰ������

	// ����++Ϊ�˸�ǰ��++�������֣������˲���ռλ�����ɺ�������
	Date& operator++();  // ��ȡ�ڶ�������ڵ�ǰ��++
	Date operator++(int);  // ��ȡ�ڶ�������ڵĺ���++���������Զ���int����ֵ���֣�

	Date& operator--();  // ��ȡǰһ������ڵ�ǰ��++
	Date operator--(int);  // ��ȡǰһ�����ڵĺ���++���������Զ���int����ֵ���֣�

	int operator-(const Date& d) const;  // ���������������
	void PrintWeekDay() const;  // ��ȡ�����ڵ�����

	//void operator<<(ostream& out);  // ������

private:
	int _year;
	int _month;
	int _day;
};

ostream& operator<<(ostream& out, const Date& d);  // cout����out�����󴫸�d