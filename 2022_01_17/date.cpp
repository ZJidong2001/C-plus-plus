#include "date.h"

int Date::GetMonthDay(int year, int month) const
{
	static int monthDayArray[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day = monthDayArray[month];
	if ((month == 2) && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
	{
		day += 1;
	}
	return day;
}

Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;

	if (!(_year >= 0
		&& (month >= 1 && month <= 12)
		&& (day >= 1 && day <= GetMonthDay(year, month))))
	{
		cout << "非法日期->";
		Print();
	}
}

void Date::Print() const
{
	cout << _year << "-" << _month << "-" << _day << endl;
}

bool Date::operator>(const Date& d) const
{
	if (_year > d._year)
	{
		return true;
	}
	else if (_year == d._year && _month > d._month)
	{
		return true;
	}
	else if (_year == d._year && _month == d._month && _day > d._day)
	{
		return true;
	}
	else
	{
		return false;
	}
}

Date& Date::operator+=(int day)
{
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			_month = 1;
			_year++;
		}
	}
	return *this;
}

Date Date::operator+(int day) const
{
	Date ret(*this);
	ret += day;
	return ret;  // 出作用域ret销毁，不能引用返回
}

Date& Date::operator++()
{
	*this += 1;
	return *this;
}

Date Date::operator++(int)
{
	Date ret(*this);
	*this += 1;
	return ret;  // 出作用域ret销毁，不能引用返回
}

//bool Date::operator<(const Date& d)  // 实现<代码时，将已实现好的>代码拷贝过来稍作修改，但这样代码太冗余，不推荐
//{
//	if (_year < d._year)
//	{
//		return true;
//	}
//	else if (_year == d._year && _month < d._month)
//	{
//		return true;
//	}
//	else if (_year == d._year && _month == d._month && _day < d._day)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}

bool Date::operator==(const Date& d) const  // 仅实现>和==代码，剩下的比较操作符都可以复用这两段代码
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}

bool Date::operator>=(const Date& d) const
{
	return *this > d || *this == d;
}

bool Date::operator<(const Date& d) const
{
	return !(*this >= d);
}

bool Date::operator<=(const Date& d) const
{
	return !(*this > d);
}

bool Date::operator!=(const Date& d) const
{
	return  !(*this == d);
}

Date& Date::operator-=(int day)
{
	if (day < 0)
	{
		return *this += -day;
	}
	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			--_year;
			_month = 12;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}

Date Date::operator-(int day) const
{
	Date ret(*this);
	ret -= day;
	return ret;
}

Date& Date::operator--()
{
	*this -= 1;
	return *this;
}

Date Date::operator--(int)
{
	Date ret(*this);
	*this -= 1;
	return ret;
}

int Date::operator-(const Date& d) const
{
	Date max = *this;
	Date min = d;
	int flag = 1;
	if (*this < d)
	{
		max = d;
		min = *this;
		flag = -1;
	}

	int count = 0;
	while (min != max)
	{
		++min;
		++count;
	}
	return count * flag;
}

void Date::PrintWeekDay() const
{
	const char* arr[] = { "星期一", "星期二", "星期三", "星期四", "星期五", "星期六", "星期天" };
	int count = *this - Date(1900, 1, 1);  // 匿名对象
	cout << arr[count % 7] << endl;
}

//void Date::operator<<(ostream& out)
//{
//	out << _year << "/" << _month << "/" << _day << endl;
//}

ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "/" << d._month << "/" << d._day << endl;
	return out;  // 为能够实现cout<<d1<<d2;连续输出，将cout返回即可
}