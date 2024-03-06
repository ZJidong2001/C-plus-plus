#include <iostream>
#include <assert.h>
using namespace std;

// 对比C++和C定义类别的区别和联系（以Stack为例）

//typedef int STDataType;  // C面向过程，数据和方法分离
//typedef struct Stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}ST, Stack;
//
//void StackInit(ST* ps);
//void StackDestroy(ST* ps);
//void StackPush(ST* ps, STDataType x);
//void StackPop(ST* ps);
//STDataType StackTop(ST* ps);
//int StackSize(ST* ps);
//bool StackEmpty(ST* ps);
//
//void StackInit(ST* ps)
//{
//	assert(ps);
//	ps->a = NULL;
//	ps->top = 0;
//	ps->capacity = 0;
//}
//
//void StackDestroy(ST* ps)
//{
//	assert(ps);
//	free(ps->a);
//	ps->a = NULL;
//	ps->capacity = ps->top = 0;
//}
//
//void StackPush(ST* ps, STDataType x)
//{
//	assert(ps);
//	if (ps->top == ps->capacity)
//	{
//		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newCapacity);
//		if (tmp == NULL)
//		{
//			printf("realloc fail\n");
//			exit(-1);
//		}
//		ps->a = tmp;
//		ps->capacity = newCapacity;
//	}
//	ps->a[ps->top] = x;
//	ps->top++;
//}
//
//void StackPop(ST* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//	ps->top--;
//}
//
//STDataType StackTop(ST* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//	return ps->a[ps->top - 1];
//}
//
//int StackSize(ST* ps)
//{
//	assert(ps);
//	return ps->top;
//}
//
//bool StackEmpty(ST* ps)
//{
//	assert(ps);
//	return ps->top == 0;
//}
//
//void TestStack_C()
//{
//	Stack st;
//
//	StackInit(&st);  // C常忘记初始化和数据销毁（编译不会报错）
//
//	StackPush(&st, 1);  // 调用传地址，很麻烦
//	StackPush(&st, 2);
//	StackPush(&st, 3);
//
//	printf("%d\n", st.a[st.top]);  // 随意操作类别里的数据，不通过已实现的函数进行访问，容易出错，取错栈顶元素
//
//	StackDestroy(&st);
//}

//class Stack  // CPP面向对象，数据和方法封装
//{
//public:
//	Stack();  // 构造函数
//	void Push(int x);
//	int Top();
//	~Stack();  // 析构函数
//
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//void TestStack_CPP()
//{
//	Stack st;  // C++对象自动初始化和数据销毁
//	st.Push(1);  // 隐藏this指针，调用方便
//	st.Push(2);
//	st.Push(3);
//	st.Push(4);
//	cout << st.Top() << endl;  // 数据封装进行保护，不允许操作数据，只能通过已实现的函数进行访问
//}

//int main()  // C语言动态内存管理方式（malloc/calloc/realloc和free）
//{
//	int* p1 = (int*)malloc(sizeof(int));  // malloc——动态地分配一块指定大小的内存空间，并返回指向该内存空间的指针（该函数不会初始化内存空间的值）
//	int* p2 = (int*)calloc(4, sizeof(int));  // calloc——动态地分配一块指定数量和大小的内存空间，并返回指向该内存空间的指针（该函数会把分配到的内存空间的值初始化为空值<0或者NULL>）
//	int* p3 = (int*)realloc(p2, sizeof(int) * 10);  // realloc——动态地调整之前分配的内存块的大小
//	free(p1);
//	free(p3);
//	p1 = p2 = p3 = NULL;
//
//	return 0;
//}

//int main()  // C++动态内存管理方式（new和delete）
//{
//	// malloc/free和new/delete对于内置类型没有本质区别
//
//	int* p1 = new int;  // 	int* p1 = (int*)malloc(sizeof(int));
//	int* p2 = new int[5];  // int* p2 = (int*)malloc(sizeof(int) * 5);
//	delete p1;  // free(p1);
//	delete[] p2;  //  free(p2);
//	p1 = p2 = nullptr;  // p1 = p2 = NULL;
//
//	return 0;
//}

//int main()
//{
//	int* p1 = new int(5);  // 动态申请一个int空间，这块空间初始化为5
//	int* p2 = new int[5];  // 动态申请5个int空间
//	delete p1;
//	delete[] p2;
//	p1 = p2 = nullptr;
//
//	return 0;
//}

//int main()  // C++98不支持初始化new的数组，C++11支持用{}列表初始化new的数组
//{
//
//	int* p1 = new int[5];  // C++98
//	int* p2 = new int[5] {1, 2};  // C++11
//	delete[] p1;
//	delete[] p2;
//	p1 = p2 = nullptr;
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
//int main()
//{
//	// malloc/free和new/delete对于自定义类型区别很大
//
//	// malloc动态申请单个A对象和5个A对象数组，只开辟空间不初始化
//	A* p1 = (A*)malloc(sizeof(A));
//	A* p2 = (A*)malloc(sizeof(A) * 5);
//
//	// new在堆上申请单个A对象和5个A对象数组，并调用构造函数初始化对象
//	A* p3 = new A;
//	A* p4 = new A[5];
//
//	// free将开辟的空间释放归还给系统
//	free(p1);
//	free(p2);
//
//	// delete先调用指针类型析构函数，再释放空间给堆上
//	delete p3;
//	delete[] p4;
//
//	// 一定要malloc/free、new/delete、new[]/delete[]匹配使用，否则可能会崩溃
//
//	return 0;
//}

//int main()  // 面向过程的语言，处理错误的方式是返回值+错误码解决
//{
//	char* p1 = (char*)malloc(1024u * 1024u * 1024u * 2u);  // 堆空间虽然很大，但终究有限
//	if (p1 == NULL)
//	{
//		printf("%d\n", errno);
//		perror("malloc fail");
//		exit(-1);
//	}
//	else
//	{
//		printf("%p\n", p1);
//	}
//
//	return 0;
//}

int main()  // 面向对象的语言，处理错误的方式一般是抛异常，C++中也要求出错抛异常——try、catch
{
	char* p1 = nullptr;
	try
	{
		p1 = new char[1024u * 1024u * 1024u * 2u - 1];  // new开辟空间失败不会返回nullptr，抛异常不会执行下面代码，直接跳到catch部分（甚至函数也会跳过）
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
	printf("%p\n", p1);

	return 0;
}