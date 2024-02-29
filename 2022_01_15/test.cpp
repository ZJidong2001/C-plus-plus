#include <iostream>
using namespace std;

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		month = month;  // 虽然编译通过，但是并未修改类里的成员变量值，而是将形参month赋值给形参month
//		_day = day;
//	}
//
//private:
//	int _year;  // 成员变量名前面或后面加_是为了和函数形参名进行区分，避免冲突
//	int month;  // 若不加_进行区分，则与函数形参名冲突
//	int _day;
//};
//
//int main()
//{
//	Date d;
//	d.Init(2022, 1, 15);
//
//	return 0;
//}

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		Date::year = year;  // 成员变量名与函数形参名不进行区分，仍想将形参赋值给类成员变量，可以指定类域
//		Date::month = month;
//		Date::day = day;
//	}
//
//private:
//	int year;  // 成员变量名与函数形参名相同，通过指定类域依旧可以区分，但实际中尽量不要这样做，自己坑自己
//	int month;
//	int day;
//};
//
//int main()
//{
//	Date d;
//	d.Init(2022, 1, 15);
//
//	return 0;
//}

//class Date
//{
//public:
//	void Init(int year, int month, int day)  // void Init(Date* const this, int year, int month, int day)
//	{
//		//this = nullptr;  // err，this不能更换指向对象
//		_year = year;
//		_month = month;
//		_day = day;
//		//this->_year = year;
//		//this->_month = month;
//		//this->_day = day;
//	}
//
//	void Print()  // void Print(Date* const this)
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//		//cout << this->_year << "-" << this->_month << "-" << this->_day << endl;  // 一般情况，我们不会这样写
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
//	// 每个对象都为各自的成员变量开辟空间，调用的方法是同一个（反汇编调试可以查看函数调用地址相同）
//	// 不同对象调用相同方法，如何确定该方法使用哪一个对象呢？——方法内隐藏this指针
//	Date d1;
//	d1.Init(2022, 1, 15);  // d1.Init(&d1, 2022, 1, 15);
//	d1.Print();  // d1.Print(&d1);
//
//	Date d2;
//	d2.Init(2022, 1, 16);  // d2.Init(&d2, 2022, 1, 16);
//	d2.Print();  // d2.Print(&d2);
//
//	// 注意：
//	// 1、调用成员函数时，不能显式传实参给this
//	// 2、定义成员函数时，不能显式声明形参this
//	// 3、在成员函数内部，可以显式使用this
//	return 0;
//}

//class A  // p虽然是空指针，但是p调用成员函数不会出现空指针访问，因为成员函数没有存在对象里面
//{
//public:
//	void Show()
//	{
//		cout << "Show()" << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A* p = nullptr;
//	p->Show();  // 正常运行
//
//	return 0;
//}

//class A  // 运行崩溃是由于成员函数内对空指针p进行了访问
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A* p = nullptr;
//	p->PrintA();  // 运行崩溃
//
//	return 0;
//}

//int main()  // C语言存在忘记实现并调用初始化函数等问题，因此C++给类自动生成了6个默认成员函数
//{
//	Stack st;
//
//	// 忘记实现并调用初始化函数
//	StackPush(&st, 1);
//	StackPush(&st, 1);
//	StackPush(&st, 1);
//	// 忘记实现并调用销毁函数
//
//	return 0;
//}

//class Date  // 构造函数——不是开空间创建对象，而是初始化对象
//{
//	// 构造函数的特征
//	// 1、函数名与类名相同
//	// 2、无返回值
//	// 3、对象实例化时编译器自动调用对应的构造函数
//	// 4、构造函数可以重载
//	// 5、如果类中没有显式定义构造函数，则C++编译器会自动生成一个无参的默认构造函数，一旦用户显式定义编译器将不再生成
//public:
//	Date()  // 第一种构造函数
//	{
//		_year = 0;
//		_month = 1;
//		_day = 1;
//	}
//
//	Date(int year, int month, int day)  // 第二种构造函数
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
//};
//
//int main()
//{
//	Date d1;  // 无参数，自动调用第一种构造函数
//	Date d2(2022, 1, 15);  // 传参，自动调用第二种构造函数
//
//	return 0;
//}

//class Date  // 上面的两种构造函数可以合并成一个
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)  // C++显式定义构造函数，推荐全缺省或者半缺省，比较好用
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
//};
//
//int main()
//{
//	Date d1;
//	Date d2(2022);
//	Date d3(2022, 1);
//	Date d4(2022, 1, 15);
//	return 0;
//}

//class Date  // 如果类中没有显式定义构造函数，则C++编译器会自动生成一个无参的默认构造函数
//{
//	// 默认构造函数——不用参数就可以调用
//	// 任何一个类的默认构造函数有三种可能：全缺省、无参、不显式实现编译器自动生成
//public:
//
//private:
//	// C++将类型分为两类：内置类型（基本类型）、自定义类型
//	// 内置类型：int、char、double、指针、内置类型数组等
//	// 自定义类型：struct、class定义的类型
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;  // 调用了默认构造函数，但调试发现对象里的成员变量都是随机值，是否说明编译器自动生成的默认构造函数啥都没做呢？其实并不是
//	// 该默认构造函数对于内置类型不做初始化处理，对于自定义类型去调用它的默认构造函数初始化，如果没有默认构造函数就会报错
//	return 0;
//}

//class A
//{
//public:
//	//A()  // 不用参数就可以调用，是默认构造函数
//	//{
//	//	cout << "A()" << endl;
//	//	_a = 0;
//	//}
//
//	A(int a)  // 必须传参，不是默认构造函数，如果没有默认构造函数就会报错
//	{
//		cout << "A()" << endl;
//		_a = 0;
//	}
//
//private:
//	int _a;
//};
//
//class Date
//{
//public:
//
//private:
//
//	int _year;
//	int _month;
//	int _day;
//	A _a;
//};
//
//int main()
//{
//	Date d1;  // 该默认构造函数对于内置类型不做初始化处理，对于自定义类型去调用它的默认构造函数初始化
//
//	return 0;
//}

//class Date  // 析构函数——不是完成对象的销毁，而是完成对象的一些资源清理工作
//{
//	// 析构函数的特征
//	// 1、析构函数名是在类名前加上字符~
//	// 2、无参数无返回值
//	// 3、一个类有且只有一个析构函数，若未显式定义，系统会自动生成默认的析构函数
//	// 4、对象生命周期结束时，C++编译系统自动调用析构函数
//public:
//	~Date()  // Date类没有资源需要清理，所以实不实现析构函数都可以
//	{
//		cout << "~Date()" << endl;
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
//	Date d1;
//
//	return 0;  // 对象生命周期结束时，C++编译系统自动调用析构函数
//}

//class Stack
//{
//public:
//	Stack(int capacity = 4)  // 构造函数
//	{
//		_a = (int*)malloc(sizeof(int) * capacity);
//		if (_a == nullptr)
//		{
//			cout << "malloc fail" << endl;
//			exit(-1);
//		}
//
//		_top = 0;
//		_capacity = capacity;
//	}
//
//	~Stack()  // 析构函数——完成对象的一些资源清理工作
//	{
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//
//private:
//	int* _a;
//	size_t _top;
//	size_t _capacity;
//};
//
//int main()  // 构造函数顺序先s1后s2，析构函数先s2后s1（栈）
//{
//	Stack s1;
//	Stack s2(20);
//
//	return 0;
//}

//class Stack
//{
//public:
//	Stack(int capacity = 4)  // 构造函数
//	{
//		_a = (int*)malloc(sizeof(int) * capacity);
//		if (_a == nullptr)
//		{
//			cout << "malloc fail" << endl;
//			exit(-1);
//		}
//
//		_top = 0;
//		_capacity = capacity;
//	}
//
//private:
//	int* _a;
//	size_t _top;
//	size_t _capacity;
//};
//
//int main()  // 一个类有且只有一个析构函数，若未显式定义，系统会自动生成默认的析构函数
//{
//	Stack s1;
//	Stack s2(20);
//
//	return 0;
//}

//class Stack
//{
//public:
//	Stack(int capacity = 4)
//	{
//		_a = (int*)malloc(sizeof(int) * capacity);
//		if (_a == nullptr)
//		{
//			cout << "malloc fail" << endl;
//			exit(-1);
//		}
//		_top = 0;
//		_capacity = capacity;
//	}
//
//	~Stack()
//	{
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//
//private:
//	int* _a;
//	size_t _top;
//	size_t _capacity;
//};
//
//class MyQueue  // 两个栈实现一个队列（不具体实现，只是见一下构造函数和析构函数的实际作用）
//{
//public:
//	// 系统自动生成默认构造函数和析构函数，会对自定义类型成员变量调用它的构造函数和析构函数
//	void push(int x)
//	{
//
//	}
//
//private:
//	Stack pushST;
//	Stack popST;
//};
//
//int main()  // 如果不显式定义析构函数，那么编译器自动生成的析构函数和构造函数类似，对于内置类型不做处理，对于自定义类型调用它的析构函数
//{
//	MyQueue mq;
//
//	return 0;
//}

//class Date  // 拷贝构造函数——创建与某个对象一模一样的新对象
//{
//	// 拷贝构造函数的特征
//	// 1、拷贝构造函数是构造函数的一个重载形式
//	// 2、拷贝构造函数的参数只有一个且必须使用引用传参，使用传值方式会引发无穷递归调用
//	// 3、若未显式定义，系统生成默认的拷贝构造函数（内置类型成员变量，会完成按字节序的拷贝<浅拷贝>；自定义类型成员变量，会调用它的拷贝构造函数）
//public:
//	Date(int year = 0, int month = 1, int day = 1)  // 构造函数
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Date(const Date& d)  // 拷贝构造函数（建议加上const，避免别修改）
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	~Date()  // 析构函数
//	{
//		cout << "~Date()" << endl;
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
//	Date d1(2022, 1, 15);
//	Date d2(d1);  // 拷贝复制
//
//	return 0;
//}

//class Date  // 系统生成默认的拷贝构造函数，对于内置类型成员变量，会完成按字节序的拷贝<浅拷贝>（有无拷贝构造函数皆可）
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)  // 构造函数
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	~Date()  // 析构函数
//	{
//		cout << "~Date()" << endl;
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
//	Date d1(2022, 1, 15);
//	Date d2(d1);  // 拷贝复制
//
//	return 0;
//}

//class Stack  // 系统生成默认的拷贝构造函数，会导致程序崩溃（必须显式定义拷贝构造函数，进行深拷贝）
//{
//public:
//	Stack(int capacity = 4)  // 构造函数
//	{
//		_a = (int*)malloc(sizeof(int) * capacity);
//		if (_a == nullptr)
//		{
//			cout << "malloc fail\n" << endl;
//			exit(-1);
//		}
//
//		_top = 0;
//		_capacity = capacity;
//	}
//
//	~Stack()  // 析构函数
//	{
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//
//private:
//	int* _a;
//	size_t _top;
//	size_t _capacity;
//};
//
//int main()
//{
//	Stack st1(10);
//	Stack st2(st1);  // 拷贝复制
//
//	return 0;  // 按字节序的拷贝，导致st1和st2的_a相同，最后导致指向的同一块空间被释放两次，造成程序崩溃
//			   // 甚至还有其他问题，比如st1修改开辟空间的数据，会导致st2内开辟空间的数据发生修改
//}

class A  // 系统生成默认的拷贝构造函数，对于自定义类型成员变量，会调用它的拷贝构造函数
{
public:
	A() {}  // 构造函数
	A(const A&)  // 拷贝构造函数
	{
		cout << "A(const A&)" << endl;
	}
};

class Date
{
public:
	Date(int year = 0, int month = 1, int day = 1)  // 构造函数
	{
		_year = year;
		_month = month;
		_day = day;
	}

	~Date()  // 析构函数
	{
		cout << "~Date()" << endl;
	}

private:
	int _year;
	int _month;
	int _day;
	A _a;
};

int main()
{
	Date d1(2022, 1, 15);
	Date d2(d1);  // 拷贝复制

	return 0;
}