#include <iostream>
using namespace std;

//struct ListNode
//{
//	ListNode* _next;
//	ListNode* _prev;
//	int _val;
//
//	ListNode(int val)
//		:_next(nullptr)
//		, _prev(nullptr)
//		, _val(val)
//	{}
//};
//
//int main()  // 动态内存管理
//{
//	// C语言
//	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	n1->_next = NULL;
//	n1->_prev = NULL;
//	n1->_val = 0;
//	free(n1);
//	n1 = NULL;
//
//	// CPP
//	ListNode* n2 = new ListNode(0);
//	delete n2;
//
//	return 0;
//}

//class Stack
//{
//public:
//	Stack(int capacity = 4)
//		:_top(0)
//		, _capacity(capacity)
//	{
//		_a = new int[capacity];
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
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//int main()
//{
//	Stack st1;  // 栈
//
//	Stack* pst2 = new Stack;  // 开辟空间并构造函数初始化
//	delete pst2;  // 析构函数清理对象中资源并释放空间
//
//	return 0;
//}

//int main()
//{
//	char* p1 = (char*)malloc(0x7fffffff);  // malloc开辟空间失败返回空指针（if语句检查空指针）
//	char* p2 = new char[0x7fffffff];  // new开辟空间失败终止程序抛异常（try-catch捕获）
//
//	if (p1 == nullptr)
//	{
//		printf("malloc fail\n");
//	}
//
//	try
//	{
//		char* p2 = new char[0x7fffffff];
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}

//void f()
//{
//	char* p = new char[0x7fffffff];
//	cout << "hello" << endl;
//}
//
//int main()  // try-catch抛异常可以跳跃函数
//{
//	try
//	{
//		f();
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}

//class Stack
//{
//public:
//	Stack(int capacity = 4)
//		:_top(0)
//		, _capacity(capacity)
//	{
//		_a = new int[capacity];
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
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//int main()  // new和delete底层实现（反汇编new发现先调用operator new函数再调用构造函数）
//{
//	Stack* pst = (Stack*)operator new(sizeof(Stack));  // 跟malloc的用法一样，但是operator new函数封装了malloc函数，malloc返回NULL会抛异常
//	// 同理，operator delete函数封装了free函数，同时做了各种检查抛异常
//	return 0;
//}

//class Stack
//{
//public:
//	Stack(int capacity = 4)
//		:_top(0)
//		, _capacity(capacity)
//	{
//		_a = new int[capacity];
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
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//int main()
//{
//	Stack* pst1 = new Stack[10];  // 不是调用了10次operatornew，而是调用了1次operator new[]，最后调用10次构造函数
//	Stack* pst2 = (Stack*)operator new[](sizeof(Stack) * 10);
//
//	delete[] pst1;  // 先调用10次析构函数，最后调用一次operator delete[]
//	return 0;
//}

//struct ListNode
//{
//	ListNode* _next;
//	ListNode* _prev;
//	int _data;
//
//	ListNode(int val)
//		:_next(nullptr)
//		, _prev(nullptr)
//		, _data(val)
//	{}
//
//	void* operator new(size_t n)  // 定义ListNode专属的operator new
//	{
//		void* p = nullptr;
//		p = allocator<ListNode>().allocate(1);  // STL中内存池——空间配置器
//		cout << "memory pool allocate ListNode" << endl;
//		return p;
//	}
//
//	void operator delete(void* p)
//	{
//		allocator<ListNode>().deallocate((ListNode*)p, 1);
//		cout << "memory pool deallocate ListNode" << endl;
//	}
//};
//
//class List
//{
//public:
//	List()
//	{
//		_head = new ListNode(-1);
//		_head->_next = _head;
//		_head->_prev = _head;
//	}
//
//	void PushBack(int val)
//	{
//		ListNode* newnode = new ListNode(val);  // new需要operator new，默认operator new调用malloc，每次插入元素都需要malloc向系统堆申请空间，效率低下，因此我们可以重载定义专属的operator new
//		ListNode* tail = _head->_prev;
//		tail->_next = newnode;
//		newnode->_prev = tail;
//		newnode->_next = _head;
//		_head->_prev = newnode;
//	}
//
//	~List()
//	{
//		ListNode* cur = _head->_next;
//		while (cur != _head)
//		{
//			ListNode* next = cur->_next;
//			delete cur;
//			cur = next;
//		}
//		delete _head;
//		_head = nullptr;
//	}
//
//private:
//	ListNode* _head;
//};
//
//int main()
//{
//	List l;
//	l.PushBack(1);
//	l.PushBack(2);
//	l.PushBack(3);
//	l.PushBack(4);
//	l.PushBack(5);
//
//	return 0;
//}

//class A
//{
//public:
//	A(int a = 0)
//		: _a(a)
//	{
//		cout << "A():" << this << endl;
//	}
//
//	~A()
//	{
//		cout << "~A():" << this << endl;
//	}
//
//private:
//	int _a;
//};
//
//int main()  // 定位new表达式——在已分配的原始内存空间中调用构造函数初始化一个对象
//{
//	// 如何对malloc或operator new开辟的空间进行初始化？（构造函数不支持显式调用，而是自动调用）
//	A* p1 = (A*)malloc(sizeof(A));
//	A* p2 = (A*)operator new(sizeof(A));
//
//	new(p1)A();  // 定位new，显式调用构造函数
//	new(p2)A(3);
//
//	A* p = new A(5);
//	delete p;
//
//	A* p = (A*)operator new(sizeof(A));
//	new(p)A(5);
//	p->~A();  // 析构函数可以显式调用
//	operator delete(p);
//
//	return 0;
//}

//int main()  // 内存泄漏——动态申请的内存，不再使用，又没有将该空间主动释放归还给系统，就存在内存泄漏
//{
//	// 内存泄漏的危害：
//	// a、出现内存泄漏的进程正常结束，这些内存会还给系统，不会有什么伤害
//	// b、出现内存泄漏的进程非正常结束（比如僵尸进程），危害很大，系统会越来越慢，甚至卡死宕机
//	// c、需要长期运行的程序（比如服务器程序）出现内存泄漏，危害很大，系统会越来越慢，甚至卡死宕机
//
//	char* p = new char[1024 * 1024 * 1024];  // 1G
//	printf("%p\n", p);
//
//	return 0;
//}

//void Swap(int& x1, int& x2)
//{
//	int x = x1;
//	x1 = x2;
//	x2 = x;
//}
//
//void Swap(double& x1, double& x2)
//{
//	double x = x1;
//	x1 = x2;
//	x2 = x;
//}
//
//void Swap(char& x1, char& x2)
//{
//	char x = x1;
//	x1 = x2;
//	x2 = x;
//}
//
//int main()  // CPP可通过函数重载支持通用的函数调用，而C语言只能单独定义不同的函数实现
//{
//	// 缺点：
//	// 1、重载的函数仅仅只是类型不同，代码的复用率比较低，只要有新类型出现时，就需要增加对应的函数
//	// 2、代码的可维护性比较低，一个出错可能所有的重载均出错
//	int a = 0, b = 1;
//	double c = 1.1, d = 2.22;
//	char e = 'A', f = 'B';
//
//	Swap(a, b);
//	Swap(c, d);
//	Swap(e, f);
//
//	return 0;
//}

//template<class T>  // 等价写法：template<typename T>  // 模板参数列表——参数类型
//void Swap(T& x1, T& x2)  // 函数参数列表——参数对象
//{
//	T x = x1;
//	x1 = x2;
//	x2 = x;
//}
//
//int main()  // C++支持泛型编程——通过函数模板
//{
//	int a = 0, b = 1;
//	double c = 1.1, d = 2.22;
//	char e = 'A', f = 'B';
//
//	Swap(a, b);
//	Swap(c, d);
//	Swap(e, f);
//
//	return 0;
//}

template<class T>
T Add(const T& left, const T& right)
{
	return left + right;
}

int main()
{
	int a1 = 10, a2 = 20;
	double d1 = 10.1, d2 = 20.2;

	cout << Add(a1, a2) << endl;
	cout << Add(d1, d2) << endl;

	cout << Add(a1, d1) << endl;  // err，T无法既是int又是double

	cout << Add((double)a1, d1) << endl;  // 解决方式1：对实参强制类型转换

	cout << Add<int>(a1, d1) << endl;  // 解决方式2：显式实例化指定模板参数的实际类型
	cout << Add<double>(a1, d1) << endl;

	return 0;
}
