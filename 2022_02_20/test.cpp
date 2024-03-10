#include <iostream>
using namespace std;

//int Add(int left, int right)  // 专门处理int的加法函数
//{
//	return left + right;
//}
//
//template<class T1, class T2>  // 通用加法函数
//T2 Add(const T1& left, const T2& right)
//{
//	return left + right;
//}
//
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.1, d2 = 20.2;
//	cout << Add(a1, a2) << endl;  // 与非模板函数匹配，编译器不需要特化
//	cout << Add(d1, d2) << endl;  // 调用编译器特化的Add版本
//
//	cout << Add(a1, d1) << endl;  // 调用编译器特化的Add版本
//	return 0;
//}

//typedef int STDataType;  // C不支持泛型编程，无法同时实现各种类型的栈
//typedef double STDataType;
//class Stack
//{
//public:
//	Stack(int capacity = 4)
//		:_top(0)
//		, _capacity(capacity)
//	{
//		_a = new STDataType[capacity];
//	}
//
//	~Stack()
//	{
//		delete[] _a;
//		_a = nullptr;
//		_capacity = _top = 0;
//	}
//
//private:
//	STDataType* _a;
//	int _top;
//	int _capacity;
//};
//
//int main()  // C语言不能同时使用两种类型的栈
//{
//	Stack st1;  // 该栈想存int类型
//	Stack st2;  // 该栈想存double类型
//
//	return 0;
//}

//class StackInt
//{
//public:
//	StackInt(int capacity = 4)
//		:_top(0)
//		, _capacity(capacity)
//	{
//		_a = new int[capacity];
//	}
//
//	~StackInt()
//	{
//		delete[] _a;
//		_a = nullptr;
//		_capacity = _top = 0;
//	}
//
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//class StackDouble
//{
//public:
//	StackDouble(int capacity = 4)
//		:_top(0)
//		, _capacity(capacity)
//	{
//		_a = new double[capacity];
//	}
//
//	~StackDouble()
//	{
//		delete[] _a;
//		_a = nullptr;
//		_capacity = _top = 0;
//	}
//
//private:
//	double* _a;
//	int _top;
//	int _capacity;
//};
//
//int main()  // C语言唯一解决办法是构造两个类型的栈，但代码复用性差
//{
//	StackInt st1;  // 该栈想存int类型
//	StackDouble st2;  // 该栈想存double类型
//
//	return 0;
//}

//template<class T>  // C++提供了泛型编程——类模板
//class Stack
//{
//public:
//	Stack(int capacity = 4)
//		:_top(0)
//		, _capacity(capacity)
//	{
//		_a = new T[capacity];
//	}
//
//	~Stack()
//	{
//		delete[] _a;
//		_a = nullptr;
//		_capacity = _top = 0;
//	}
//
//	void Push(const T& x);  // 成员函数声明和定义分离
//
//private:
//	T* _a;
//	int _top;
//	int _capacity;
//};
//
//template<class T>  // 成员函数实现
//void Stack<T>::Push(const T& x)
//{
//	// ...
//}
//
//int main()  // 类模板实例化与函数模板实例化不同，类模板实例化需要在类模板名字后跟<>，然后将实例化的类型放在<>中
//{
//	Stack<int> st1;  // 该栈想存int类型
//	Stack<double> st2;  // 该栈想存double类型
//	Stack<char> st3;  // 该栈想存char类型
//	Stack<int*> st4;  // 该栈想存int*类型
//
//	st1.Push(1);
//	st2.Push(2.2);
//	st3.Push('a');
//
//	return 0;
//}

//template<class T>
//class basic_string
//{
//private:
//	T* _str;
//	// ...
//};
//typedef basic_string<char> string;  // string类是basic_string类模板的实例化
// 之所以不直接实现string类，是因为编码表（记录值与符号之间的映射关系）的不同
// ASCII——英文编码表
// Unicode——全世界文字编码表 utf-8、utf-16、utf-32
// GBK——中文编码表

//int main()
//{
//	char str1[] = "hello";  // 计算机实际存的是ASCII码值，而不是字符
//	cout << str1 << endl;
//
//	char str2[] = "吃饭";  // 常见汉字占两个字节
//	cout << str2 << endl;
//
//	str2[1] += 1;  // 通过调试发现有意思的现象
//	str2[3] += 1;  // 打游戏骂人匹配词库变为*****，谐音字在编码的一段范围内，谐音字也能被屏蔽
//
//	str2[1] += 1;
//	str2[3] += 1;
//
//	str2[1] += 1;
//	str2[3] += 1;
//
//	cout << sizeof(char) << endl;  // 1Byte
//	cout << sizeof(wchar_t) << endl;  // 2Byte
//
//	return 0;
//}

#include <string>

//int main()  // string类对象的常见构造
//{
//	string s1;  // 构造空的string类对象，即空字符串
//	string s2("hello world");  // 用C-string来构造string类对象
//	string s3(s2);  // 拷贝构造函数
//
//	cin >> s1;
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//
//	string s4(s2, 2, 6);  // 从主串的某个位置开始确定长度来构造其子串
//	cout << s4 << endl;
//
//	string s5(s2, 2);
//	cout << s5 << endl;
//
//	string s6(s2, 2, 100);
//	cout << s6 << endl;
//
//	string s7("hello world", 3);  // 取某个字符串的前n个字符进行构造
//	cout << s7 << endl;
//
//	string s8(10, '!');  // n个字符构造字符串
//	cout << s8 << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1;
//	cin >> s1;
//	cout << s1 << endl;
//
//	cout << s1.length() << endl;
//	cout << s1.size() << endl;  // 二者无差别，但推荐size，学习其他容器（比如树用size含义更好，length无意义）成本降低
//
//	cout << s1.max_size() << endl;  // 字符串最大长度，和电脑有关，没啥意义
//	cout << s1 << endl;
//
//	cout << s1.capacity() << endl;  // 看字符串的容量大小，不够就扩容
//	s1.clear();  // 清空字符串的有效数据
//	cout << s1 << endl;
//	cout << s1.capacity() << endl;
//
//	return 0;
//}

//char& operator[] (size_t pos)  // operator[]重载底层大概实现逻辑，由于传引用返回，故可读可写
//{
//	assert(pos < _size);
//	return _str[pos];
//}

//int main()  // operator[]重载
//{
//	string s1("hello world");
//	cout << s1 << endl;
//
//	for (size_t i = 0; i < s1.size(); ++i)  // 读
//	{
//		cout << s1[i] << " ";  // 等价写法为cout << s1.operator[](i) << " ";
//	}
//	cout << endl;
//
//	for (size_t i = 0; i < s1.size(); ++i)  // 写
//	{
//		s1[i] += 1;
//	}
//	cout << s1 << endl;
//
//	return 0;
//}

//int main()  // at方法与operator[]用处类似，只是检查越界的方式不一样
//{
//	string s1("hello world");
//	cout << s1 << endl;
//
//	for (size_t i = 0; i < s1.size(); ++i)
//	{
//		s1.at(i) += 1;
//	}
//	cout << s1 << endl;
//
//	s1[100];  // assert断言
//
//	try
//	{
//		s1.at(100);  // 抛异常
//	}
//	catch (exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}

int main()  // 尾插
{
	string s1;
	s1.push_back('a');  // push_back尾插字符
	s1.append("bcde");  // append尾插字符串
	cout << s1 << endl;

	s1 += ':';  // +=既可以尾插字符，又可以尾插字符串
	s1 += "hello world";
	cout << s1 << endl;

	return 0;
}