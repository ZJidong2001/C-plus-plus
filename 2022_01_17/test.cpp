#include "date.h"

//void TestDate1()
//{
//	Date d1;
//	d1.Print();
//
//	Date d2(2022, 1, 16);
//	d2.Print();
//
//	Date d3(2022, 13, 15);
//	d3.Print();
//
//	Date d4(2022, 2, 29);
//	d4.Print();
//
//	Date d5(2020, 2, 29);
//	d5.Print();
//
//	Date d6(2000, 2, 29);
//	d6.Print();
//}
//
//void TestDate3()
//{
//	Date d1(2022, 1, 17);
//
//	Date ret1 = d1 - 10;
//	ret1.Print();
//
//	Date ret2 = d1 - 17;
//	ret2.Print();
//
//	Date ret3 = d1 - 30;
//	ret3.Print();
//
//	Date ret4 = d1 - 400;
//	ret4.Print();
//
//	Date ret5 = d1 - 1500;
//	ret5.Print();
//
//	Date ret6 = d1 - -100;
//	ret6.Print();
//}
//
//void TestDate2()
//{
//	Date d1(2022, 1, 16);
//	d1.Print();
//	Date ret = d1 + 100;
//	d1.Print();
//	ret.Print();
//
//	d1 += 100;
//	d1.Print();
//
//	Date ret1 = d1++;  // d1.operator++(&d1, 0);
//	Date ret2 = ++d1;  // d1.operator++(&d1);
//	ret1.Print();
//	ret2.Print();
//}
//
//void TestDate4()
//{
//	Date today(2022, 1, 17);
//	Date offerDay(2022, 9, 1);
//
//	cout << (offerDay - today) << endl;
//	cout << (today - offerDay) << endl;
//
//	Date day(2022, 1, 17);  // 具名对象生命周期在当前函数
//	today.PrintWeekDay();
//
//	Date(2022, 1, 17).PrintWeekDay();  // 匿名对象生命周期只在这一行
//}
//
//int main()
//{
//	TestDate1();
//	TestDate2();
//	TestDate3();
//	TestDate4();
//
//	return 0;
//}

//class A
//{
//public:
//	A()
//	{
//		cout << "A()" << endl;
//	}
//
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//};
//
//class B
//{
//public:
//	B()
//	{
//		cout << "B()" << endl;
//	}
//
//	~B()
//	{
//		cout << "~B()" << endl;
//	}
//};
//
//class C
//{
//public:
//	C()
//	{
//		cout << "C()" << endl;
//	}
//
//	~C()
//	{
//		cout << "~C()" << endl;
//	}
//};
//
//class D
//{
//public:
//	D()
//	{
//		cout << "D()" << endl;
//	}
//
//	~D()
//	{
//		cout << "~D()" << endl;
//	}
//};
//
//C c;
//int main()  // 四个对象的构造顺序和析构顺序
//{
//	A a;
//	B b;
//	static D d;
//	return 0;
//}

//class Widget
//{
//public:
//	Widget()
//	{
//		cout << "Widget()" << endl;
//	}
//
//	Widget(const Widget&)
//	{
//		cout << "Widget(const Widget&)" << endl;
//	}
//
//	Widget& operator=(const Widget&)
//	{
//		cout << "Widget& operator=(const Widget&)" << endl;
//		return *this;
//	}
//
//	~Widget()
//	{
//		cout << "~Widget()" << endl;
//	}
//};
//
//Widget f(Widget u)
//{
//	Widget v(u);
//	Widget w = v;
//	return w;
//}
//
//int main()  // 拷贝构造函数次数被编译器优化
//{
//	Widget x;
//	Widget y = f(f(x));
//	return 0;
//}

//int main()  // const成员
//{
//	Date d1;
//	d1.Print();
//
//	const Date d2;
//	d2.Print();
//
//	return 0;
//}

//class A  // 取地址及const取地址操作符一般不需要重载，使用编译器生成的默认取地址的重载即可
//{
//public:
//	A* operator&()
//	{
//		//return this;
//		return nullptr;
//	}
//
//	const A* operator&() const
//	{
//		return this;
//	}
//};
//
//int main()  // 只有特殊情况，才需要重载，比如只想让const对象取到地址，不是const对象返回nullptr
//{
//	A a1;
//	cout << &a1 << endl;
//	const A a2;
//	cout << &a2 << endl;
//
//	return 0;
//}

int main()  // 友元（friend）——提供了一种突破封装的方式，能够在类外访问private成员
{
	Date d(2022, 1, 17);

	d.Print();

	//d.operator<<(cout);  // cout传值给out
	//d << cout;  // 这样写太奇怪了，不符合使用习惯

	operator<<(cout, d);
	cout << d;

	return 0;
}