#include <iostream>
//using namespace std;
using std::cout;
using std::endl;

//class Date
//{
//public:
//	/*Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//
//	Date(int year, int month, int day)  // ���캯������ʼ���б�汾�� 
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{}
//
//private:
//	int _year;  // ����
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2022, 1, 19);  // ������/����ʵ����
//	Date d2(2021, 1, 19);  // ������/����ʵ����
//	return 0;
//}

//int main()  // ���������ڶ���ʱ��ʼ��
//{
//	int i;
//	const int j;  // err
//	return 0;
//}

//class Date
//{
//public:
//	/*Date(int year, int month, int day)
//	{
//		_N = 10;  // err�������캯������ʱ����Ա�����Ѿ����������const�����ܸ�ֵ
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//
//	//Date(int year, int month, int day)  // ��ʼ���б�����Ա��������ĵط� 
//	//	:_year(year)
//	//	, _month(month)
//	//	, _day(day)
//	//	, _N(10)
//	//{}
//
//	Date(int year, int month, int day)  // ���캯����ʼ��_N�ĵڶ��ַ���
//		:_N(10)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	int _year;  // ����
//	int _month;
//	int _day;
//
//	const int _N;  // �����������������ڴ˴���ʼ��
//};
//
//int main()
//{
//	Date d1(2022, 1, 19);  // ������/����ʵ����
//	Date d2(2021, 1, 19);  // ������/����ʵ����
//	return 0;
//}

//class A
//{
//public:
//	A(int a)  // ��Ĭ�Ϲ��캯��
//	{
//		_a = a;
//	}
//
//private:
//	int _a;
//};
//
//class Date
//{
//public:
//	Date(int year, int month, int day, int ref)  // ���캯����ʼ��
//		:_N(10)
//		, _ref(ref)
//		, _aa(-1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	int _year;  // ����
//	int _month;
//	int _day;
//
//	const int _N;  // const��Ա����
//	int& _ref;  // ���ó�Ա����
//	A _aa;  // �Զ������ͳ�Ա����������û��Ĭ�Ϲ��캯����
//};
//
//int main()
//{
//	int i = 0;
//	Date d1(2022, 1, 19, i);  // ������/����ʵ����
//	Date d2(2021, 1, 19, i);  // ������/����ʵ����
//	return 0;
//}

// ��ʼ���б��ܽ᣺
// 1����ʼ���б�����Ա��������ĵط�
// 2��const�����á�û��Ĭ�Ϲ��캯�����Զ������ͳ�Ա���������ڳ�ʼ���б��ʼ������Ϊ���Ƕ������ڶ����ʱ���ʼ��
// 3���������������ͳ�Ա��������_year��_month�����ĳ�ʼ��������

//class A
//{
//public:
//	A(int a = 0)  // ���캯��
//	{
//		cout << "A(int a = 0)" << endl;
//		_a = a;
//	}
//
//	A(const A& aa)  // �������캯��
//	{
//		cout << "A(const A& aa)" << endl;
//		_a = aa._a;
//	}
//
//	A& operator=(const A& aa)  // ��ֵ���������
//	{
//		cout << "A& operator=(const A& aa)" << endl;
//		_a = aa._a;
//		return *this;
//	}
//
//private:
//	int _a;
//};
//
//class Date
//{
//public:
//	Date(int year, int month, int day, const A& aa)  // ��Ȼδд��ʼ���б�����ʼ���б��ǳ�Ա��������ĵط���_aa���ڳ�ʼ���б���ĵ��ù���Ĭ�Ϻ�����ʼ��
//	{
//		_aa = aa;
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	A _aa;
//};
//
//int main()
//{
//	A aa(10);
//	Date d(2022, 1, 19, aa);
//	return 0;
//}

//class A
//{
//public:
//	A(int a = 0)  // ���캯��
//	{
//		cout << "A(int a = 0)" << endl;
//		_a = a;
//	}
//
//	A(const A& aa)  // �������캯��
//	{
//		cout << "A(const A& aa)" << endl;
//		_a = aa._a;
//	}
//
//	A& operator=(const A& aa)  // ��ֵ���������
//	{
//		cout << "A& operator=(const A& aa)" << endl;
//		_a = aa._a;
//		return *this;
//	}
//
//private:
//	int _a;
//};
//
//class Date
//{
//public:
//	Date(int year, int month, int day, const A& aa)  // ֻ����һ�ο������캯��
//		:_aa(aa)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//
//	A _aa;
//};
//
//int main()
//{
//	A aa(10);
//	Date d(2022, 1, 19, aa);
//	return 0;
//}

//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		, _a2(_a1)
//	{}
//
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//
//int main()  // ��Ա������������������������ڳ�ʼ���б��еĳ�ʼ��˳�������ڳ�ʼ���б��е��Ⱥ�����޹�
//{
//	A aa(1);
//	aa.Print();
//}

//class Date
//{
//public:
//	Date(int year)
//		:_year(year)
//	{
//		cout << "Date(int year)" << endl;
//	}
//
//	Date(const Date& dd)
//	{
//		cout << "Date(const Date& dd)" << endl;
//	}
//
//private:
//	int _year;
//};
//
//int main()
//{
//	// ��ʽ����ת������������͡�����ʾ�������Ƶ�����
//	double d = 1.1;
//	int i = d;
//
//	// ǿ������ת�� - �޹�����
//	int* p = &i;
//	int j = (int)p;
//
//	// ��Ȼd1��d2����ֱ�ӹ��죬���ǹ��̲�һ��
//	Date d1(2022);
//	Date d2 = 2022;  // ��ʽ����ת��
//	// ������2022����һ����ʱ����Date(2022)������������󿽱�����d2
//	// ����C++����������������Ĺ����У��������ᱻ�Ż����϶�Ϊһ���������ﱻ�Ż�Ϊһ������
//
//	return 0;
//}

//class Date
//{
//public:
//	explicit Date(int year)
//		:_year(year)
//	{
//		cout << "Date(int year)" << endl;
//	}
//
//	Date(const Date& dd)
//	{
//		cout << "Date(const Date& dd)" << endl;
//	}
//
//private:
//	int _year;
//};
//
//int main()  // ��explicit���ι��캯���������ֹ���ι��캯������ʽת��
//{
//	Date d1 = 2022;
//
//	return 0;
//}

//int count = 0;  // ȫ�ֱ���ͳ�ƹ���Ϳ�������Ĵ���
//
//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		++count;
//	}
//
//	A(const A& aa)
//		:_a(aa._a)
//	{
//		++count;
//	}
//
//private:
//	int _a;
//};
//
//void f(A a)
//{
//
//}
//
//int main()  // ȫ�ֱ���ͳ��ȱ�ݺܴ�����ͳ���������޷�ʹ�ã�����count���������޸�
//{
//	A a1;
//	A a2 = 1;
//	f(a1);
//	cout << count << endl;
//	count++;
//	cout << count << endl;
//
//	return 0;
//}

//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		++_sCount;
//	}
//
//	A(const A& aa)
//		:_a(aa._a)
//	{
//		++_sCount;
//	}
//
//	// û��thisָ�룬ֻ�ܷ��ʾ�̬��Ա�����;�̬��Ա����
//	static int GetCount()
//	{
//		return _sCount;
//	}
//
//private:
//	int _a;
////public:
//	// ��̬��Ա�������ڸ��ഴ�������ж��������������������������ڼ䣬���Ա�����У�����������
//	static int _sCount;  // ����������������
//};
//
//int A::_sCount = 0;  // �����ʼ��
//
//void f(A a)
//{
//
//}
//
//int main()
//{
//	A a1;
//	A a2 = 1;
//	f(a1);
//
//	// ��_sCountΪpublic��ͨ����Ͷ���ָ������
//	//cout << A::_sCount << endl;
//	//cout << a1._sCount << endl;
//	//cout << a2._sCount << endl;
//
//	// ��_sCountΪprivate��ͨ���ṩһ�����еĳ�Ա����ʹ�ö������
//	cout << a1.GetCount() << endl;
//
//	// �����еĳ�Ա����ǰ��static����ͨ������Է���
//	cout << A::GetCount() << endl;
//
//	return 0;
//}

//class Sum  // ��1+2+3+...+n��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case�ȹؼ��ּ������ж���䣨A?B:C��
//{
//public:
//	Sum()
//	{
//		_ret += _i;
//		++_i;
//	}
//
//	static int GetRet()
//	{
//		return _ret;
//	}
//
//private:
//	static int _i;
//	static int _ret;
//};
//
//int Sum::_i = 1;
//int Sum::_ret = 0;
//
//class Solution
//{
//public:
//	int Sum_Solution(int n)
//	{
//
//		Sum* p = new Sum[n];
//		delete[] p;
//		return Sum::GetRet();
//	}
//};
//
//int main()
//{
//	//Solution st;
//	//cout << st.Sum_Solution(10) << endl;
//
//	cout << Solution().Sum_Solution(10) << endl;
//
//	return 0;
//}

//class B
//{
//public:
//	B(int b = 0)
//		:_b(b)
//	{}
//	int _b;
//};
//
//class A
//{
//public:
//	A()  //��ʼ���б�׶�û�жԳ�Ա������ʼ�������ͻ�ʹ��ȱʡֵ��ʼ��
//	{}
//
//	void Print()
//	{
//		cout << a << endl;
//		cout << b._b << endl;
//		cout << p << endl;
//	}
//private:
//	// �Ǿ�̬��Ա�����������ڳ�Ա����ʱ��ȱʡֵ
//	int a = 10;  // ע�����������������ǳ�ʼ��
//	B b = 20;
//	int* p = (int*)malloc(4);
//	static int n;  // ��̬�������ܸ�ȱʡֵ��������������ȫ��λ�ö����ʼ��
//};
//
//int A::n = 10;
//
//int main()
//{
//	A a;
//	a.Print();
//	return 0;
//}

//class Time
//{
//	friend class Date;  // ����������Ϊʱ�������Ԫ�࣬�����������о�ֱ�ӷ���Time���е�˽�г�Ա����
//public:
//	Time(int hour = 0, int minute = 0, int second = 0)
//		: _hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{}
//
//	void f(Date d);
//
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//
//class Date
//{
//	friend class Time;
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{
//		_t._hour = 0;
//		_t._minute = 0;
//		_t._second = 0;
//	}
//
//	void SetTimeOfDate(int hour, int minute, int second)
//	{
//		// ֱ�ӷ���ʱ����˽�еĳ�Ա����
//		_t._hour = hour;
//		_t._minute = minute;
//		_t._second = second;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//};
//
//void Time::f(Date d)
//{
//	d._year;
//}

class A
{
private:
	static int k;
	int h;
public:
	class B  // �ڲ���
	{
		// 1���ڲ���B��ȫ����Ķ������һ����ֻ�����ⲿ��A�������ƣ�������A��������
		// 2���ڲ���B���������ⲿ��A����Ԫ��Ҳ����B�п��Է���A��˽�У�A���ܷ���B��˽��
	public:
		void foo(const A& a)
		{
			cout << k << endl;
			cout << a.h << endl;
		}
	private:
		int _b;
	};

	void f(B bb)
	{
		bb._b;  // err��A����B����Ԫ�����ܷ���B
	}
};

int A::k = 1;

int main()
{
	cout << sizeof(A) << endl;
	A aa;
	A::B b;
	b.foo(A());

	return 0;
}