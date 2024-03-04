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
//	Date(int year, int month, int day)  // 构造函数（初始化列表版本） 
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{}
//
//private:
//	int _year;  // 声明
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2022, 1, 19);  // 对象定义/对象实例化
//	Date d2(2021, 1, 19);  // 对象定义/对象实例化
//	return 0;
//}

//int main()  // 常量必须在定义时初始化
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
//		_N = 10;  // err，到构造函数体内时，成员变量已经定义出来，const对象不能赋值
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//
//	//Date(int year, int month, int day)  // 初始化列表——成员变量定义的地方 
//	//	:_year(year)
//	//	, _month(month)
//	//	, _day(day)
//	//	, _N(10)
//	//{}
//
//	Date(int year, int month, int day)  // 构造函数初始化_N的第二种方法
//		:_N(10)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//private:
//	int _year;  // 声明
//	int _month;
//	int _day;
//
//	const int _N;  // 这里是声明，不能在此处初始化
//};
//
//int main()
//{
//	Date d1(2022, 1, 19);  // 对象定义/对象实例化
//	Date d2(2021, 1, 19);  // 对象定义/对象实例化
//	return 0;
//}

//class A
//{
//public:
//	A(int a)  // 无默认构造函数
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
//	Date(int year, int month, int day, int ref)  // 构造函数初始化
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
//	int _year;  // 声明
//	int _month;
//	int _day;
//
//	const int _N;  // const成员变量
//	int& _ref;  // 引用成员变量
//	A _aa;  // 自定义类型成员变量（该类没有默认构造函数）
//};
//
//int main()
//{
//	int i = 0;
//	Date d1(2022, 1, 19, i);  // 对象定义/对象实例化
//	Date d2(2021, 1, 19, i);  // 对象定义/对象实例化
//	return 0;
//}

// 初始化列表总结：
// 1、初始化列表——成员变量定义的地方
// 2、const、引用、没有默认构造函数的自定义类型成员变量必须在初始化列表初始化，因为他们都必须在定义的时候初始化
// 3、对于像其他类型成员变量，如_year、_month，在哪初始化都可以

//class A
//{
//public:
//	A(int a = 0)  // 构造函数
//	{
//		cout << "A(int a = 0)" << endl;
//		_a = a;
//	}
//
//	A(const A& aa)  // 拷贝构造函数
//	{
//		cout << "A(const A& aa)" << endl;
//		_a = aa._a;
//	}
//
//	A& operator=(const A& aa)  // 赋值运算符重载
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
//	Date(int year, int month, int day, const A& aa)  // 虽然未写初始化列表，但初始化列表是成员变量定义的地方，_aa会在初始化列表定义的调用构造默认函数初始化
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
//	A(int a = 0)  // 构造函数
//	{
//		cout << "A(int a = 0)" << endl;
//		_a = a;
//	}
//
//	A(const A& aa)  // 拷贝构造函数
//	{
//		cout << "A(const A& aa)" << endl;
//		_a = aa._a;
//	}
//
//	A& operator=(const A& aa)  // 赋值运算符重载
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
//	Date(int year, int month, int day, const A& aa)  // 只调用一次拷贝构造函数
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
//int main()  // 成员变量在类中声明次序就是其在初始化列表中的初始化顺序，与其在初始化列表中的先后次序无关
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
//	// 隐式类型转换——相近类型——表示意义相似的类型
//	double d = 1.1;
//	int i = d;
//
//	// 强制类型转换 - 无关类型
//	int* p = &i;
//	int j = (int)p;
//
//	// 虽然d1，d2都是直接构造，但是过程不一样
//	Date d1(2022);
//	Date d2 = 2022;  // 隐式类型转换
//	// 本来用2022构造一个临时对象Date(2022)，再用这个对象拷贝构造d2
//	// 但是C++编译器在连续构造的过程中，多个构造会被优化，合二为一，所以这里被优化为一个构造
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
//int main()  // 用explicit修饰构造函数，将会禁止单参构造函数的隐式转换
//{
//	Date d1 = 2022;
//
//	return 0;
//}

//int count = 0;  // 全局变量统计构造和拷贝构造的次数
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
//int main()  // 全局变量统计缺陷很大，若想统计其他类无法使用，并且count可以随意修改
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
//	// 没有this指针，只能访问静态成员变量和静态成员函数
//	static int GetCount()
//	{
//		return _sCount;
//	}
//
//private:
//	int _a;
////public:
//	// 静态成员变量属于该类创建的所有对象，生命周期在整个程序运行期间，类成员函数中，可以随便访问
//	static int _sCount;  // 声明，定义在类外
//};
//
//int A::_sCount = 0;  // 定义初始化
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
//	// 若_sCount为public，通过类和对象指定访问
//	//cout << A::_sCount << endl;
//	//cout << a1._sCount << endl;
//	//cout << a2._sCount << endl;
//
//	// 若_sCount为private，通过提供一个公有的成员函数使得对象访问
//	cout << a1.GetCount() << endl;
//
//	// 若公有的成员函数前有static，则通过类可以访问
//	cout << A::GetCount() << endl;
//
//	return 0;
//}

//class Sum  // 求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）
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
//	A()  //初始化列表阶段没有对成员变量初始化，它就会使用缺省值初始化
//	{}
//
//	void Print()
//	{
//		cout << a << endl;
//		cout << b._b << endl;
//		cout << p << endl;
//	}
//private:
//	// 非静态成员变量，可以在成员声明时给缺省值
//	int a = 10;  // 注意这里是声明，不是初始化
//	B b = 20;
//	int* p = (int*)malloc(4);
//	static int n;  // 静态变量不能给缺省值，必须在类外面全局位置定义初始化
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
//	friend class Date;  // 声明日期类为时间类的友元类，则在日期类中就直接访问Time类中的私有成员变量
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
//		// 直接访问时间类私有的成员变量
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
	class B  // 内部类
	{
		// 1、内部类B和全局类的定义基本一样，只是受外部类A类域限制，定义在A的类域中
		// 2、内部类B天生就是外部类A的友元，也就是B中可以访问A的私有，A不能访问B的私有
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
		bb._b;  // err，A不是B的友元，不能访问B
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