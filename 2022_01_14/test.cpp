#include <iostream>

// 1���ճ���ϰ����̫�ں�������Ⱦ��using namespace std;ȫ��չ��
// 2����Ŀ�У���Ҫȫ��չ��,ָ�����ʻ���չ������
using namespace std;
//using std::cout;
//using std::endl;

//int main()
//{
//	int i = 0;
//	double d = 0;
//	std::cin >> i >> d;  // ����ȡ
//	cout << i << d << endl;  // ������
//	cout << "hello world" << endl;
//
//	return 0;
//}

//int main()  // &һ����������
//{
//	int a = 0;
//	int& b = a;  // ����
//	int* p = &b;  // ȡ��ַ
//
//	return 0;
//}

//int main()  // ����ȡ�����Ĺ����У�Ȩ�޿�����С���߲��䣬���ǲ��ܷŴ�
//{
//	int a = 10;
//	const int b = 20;
//
//	int& c = b;  // err��Ȩ�޷Ŵ�
//	const int& d = b;  // Ȩ�޲���
//	const int& e = a;  // Ȩ����С
//
//	return 0;
//}

//int main()  // ����ת�������м������ʱ��������ʱ�������г����ԣ����ɱ��޸ģ�
//{
//	double d = 1.1;
//
//	int i = d;
//	int& ri1 = d;  // err��Ȩ�޷Ŵ�
//	const int& ri2 = d;
//
//	return 0;
//}

//int main()  // �������Կ����õĵײ�ԭ��ָ�룩
//{
//	int a = 1;
//
//	int& b = a;
//	int* p = &a;
//
//	b = 2;
//	*p = 3;
//
//	return 0;
//}

//int main()  // ��Ȼ���õײ�ʵ����ָ�룬����ƽʱ�õ�ʱ��Ҫ��ײ㣬�����������ɡ�
//{
//	char ch = 'a';
//	char& rch = ch;
//	cout << sizeof(rch) << endl;  // 1Byte
//
//	return 0;
//}

//int main()  // ���ڵ�auto��C++���ѷϳ���C��֧�֣���auto���εı������Ǿ����Զ��洢���ľֲ��������������������Զ����٣�û���κ�����
//{
//	int a = 10;
//	auto int b = 20;  // ���벻��autoû���κ�����
//	return 0;
//}

//int main()  // auto�ؼ��֣�C++11�����Զ��Ƶ����ͣ������ṹ�壩
//{
//	int a = 0;
//
//	auto b = a;  // �Զ��Ƶ�b������Ϊint
//	auto c = 'A';  // �Զ��Ƶ�c������Ϊchar
//	auto d = 10.11;  // �Զ��Ƶ�d������Ϊdouble
//
//	// ��ȡ���������
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//
//	return 0;
//}

//#include <map>
//#include <string>
//
//int main()  // autoʵ��ʹ�ó���1�����������߳��鷳ʱ��ʹ��auto
//{
//	std::map<std::string, std::string>dict = { {"sort","����"},{"insert","����"} };
//
//	// std::map<std::string, std::string>::iterator it = dict.begin();  // ����it̫����д�����鷳
//	auto it = dict.begin();  // �����ұߵ�ֵȥ�Զ��Ƶ�it�����ͣ�д�����ͷ�����
//
//	return 0;
//}

//int main()  // auto��ָ������ý������ʹ��
//{
//	// ��auto����ָ������ʱ����auto��auto*û���κ����𣬵���auto������������ʱ������&
//	int x = 10;
//	auto a = &x;  // int*
//	auto* b = &x;  // int*
//	auto& c = x;  // int
//
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//
//	*a = 20;
//	*b = 30;
//	c = 40;
//
//	return 0;
//}

//int main()  // auto�Զ�ȥ��const���ԣ�������г����Կ���ʹ��const auto
//{
//	const int x = 10;
//
//	auto y = x;
//	y = 20;  // y�����޸ģ�auto�Զ�ȥ��const����
//
//	const auto z = x;  // ʹ��const auto���г�����
//	z = 30;  // err�������޸�
//
//	return 0;
//}

//int main()  // auto�������ʱ���������г�ʼ�������ܶ�������
//{
//	int i = 0;
//	auto j;  // err
//
//	return 0;
//}

//void TestAuto(auto a) {}  // �˴��������ʧ�ܣ�����auto���ܶ������壬�������޷���a��ʵ�����ͽ����Ƶ�����˲�����Ϊ�β�����

//int main()  // auto����ֱ��������������
//{
//	int a[] = { 1,2,3 };
//	auto b[] = { 4,5,6 };  // err
//
//	return 0;
//}

//int main()  // autoʵ��ʹ�ó���2����Χfor
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//
//	// C/C++��ͳ��������
//	for (int i = 0; i < sizeof(array) / sizeof(int); ++i)
//	{
//		cout << array[i] << endl;
//	}
//
//	// �﷨�ǡ���C++11��Χfor��������
//	for (auto e : array)  // �Զ�����ȡ����array�е�ÿ��Ԫ�ظ�ֵ��e
//	{
//		cout << e << endl;
//	}
//	for (int x : array)  // �˴�������int������д��Χfor����ʱ����auto
//	{
//		cout << x << endl;
//	}
//
//	// ��Χfor��array������ÿ��ֵ��1
//	for (auto e : array)  // err����array�����е�Ԫ�����θ�ֵ��e��e�ĸı䲻Ӱ���������ֵ
//	{
//		e++;
//	}
//	for (auto& e : array)  // right
//	{
//		e++;
//	}
//
//	return 0;
//}

//void TestFor(int a[])  // ��Χfor����������
//{
//	for (auto& e : a)  // �˴���a�˻���ָ�룬��������
//		cout << e << endl;
//}
//
//int main()
//{
//	int array[5] = { 1,2,3,4,5 };
//	TestFor(array);
//
//	return 0;
//}

//int main()  // ָ���ֵnullptr��C++11��
//{
//	// C++98/03������ʼ����ָ��ʹ��NULL��NULL�����Ǻ��滻��
//	int* p1 = NULL;  // ���󲿷ֳ���ʹ��NULLû���⣬��������»�������
//	int* p2 = 0;
//
//	// C++11������ʼ����ָ���Ƽ�ʹ��nullptr
//	int* p3 = nullptr;
//
//	return 0;
//}

//void f(int)  // ֻҪ�������治���βΣ�ֻ�����Ͳ����β���Ҳ�ǿ��Եģ����ͱ������
//{
//	cout << "f(int)" << endl;
//}
//
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//
//int main()  // ��ָ��NULL��������»�������
//{
//	f(NULL);  // ����Ӧ��ƥ��f(int*)����
//	f(0);  // ����Ӧ��ƥ��f(int)����
//	// �����������ֶ�ƥ����f(int)����������ȱ��
//
//	f(nullptr);  // ���C++���ڿ�ָ�벻�Ƽ�ʹ��NULL������nullptr
//
//	return 0;
//}

//#include <string>
//
//struct Student  // C++������������ؼ���struct/class��struct��C++�У��ȼ���C�Ľṹ���÷���ͬʱҲ���������ࣩ
//{
//	char name[10];
//	int age = 20;
//	int id;
//};
//
//int main()
//{
//	struct Student s1;  // ����C�Ľṹ���÷�
//	Student s2;  // �������ࡪ��Student��������Ҳ������
//
//	strcpy(s1.name, "����");
//	s1.id = 1;
//	s1.age = 18;
//
//	strcpy(s2.name, "����");
//	s2.id = 2;
//	s2.age = 19;
//
//	return 0;
//}

//#include <string>
//
//struct Student  // C++��ͽṹ��������಻�����Զ�������������Զ��巽��/����
//{
//	// ��Ա����
//	char _name[10];
//	int  _age;
//	int  _id;
//
//	// ��Ա����/��Ա����
//	void Init(const char* name, int age, int id)  // �����Ա�������ͳ�Ա������������ͻ���ڳ�Ա����ǰ�������_��ʾ����
//	{
//		strcpy(_name, name);
//		_age = age;
//		_id = id;
//	}
//
//	void Print()
//	{
//		cout << _name << endl;
//		cout << _age << endl;
//		cout << _id << endl;
//	}
//};
//
//int main()
//{
//	Student s1;
//	Student s2;
//
//	s1.Init("����", 18, 1);
//	s2.Init("����", 19, 2);
//
//	s1.Print();
//	s2.Print();
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <stdbool.h>
//
//typedef int STDataType;
//typedef struct Stack
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}ST;
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
//
//	if (ps->top == ps->capacity)
//	{
//		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newCapacity);
//		if (tmp == NULL)
//		{
//			printf("realloc fail\n");
//			exit(-1);
//		}
//
//		ps->a = tmp;
//		ps->capacity = newCapacity;
//	}
//
//	ps->a[ps->top] = x;
//	ps->top++;
//}
//
//void StackPop(ST* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//
//	ps->top--;
//}
//
//STDataType StackTop(ST* ps)
//{
//	assert(ps);
//	assert(!StackEmpty(ps));
//
//	return ps->a[ps->top - 1];
//}
//
//int StackSize(ST* ps)
//{
//	assert(ps);
//
//	return ps->top;
//}
//
//bool StackEmpty(ST* ps)
//{
//	assert(ps);
//
//	return ps->top == 0;
//}
//
//int main()  // struct����C�ṹ����÷�
//{
//	ST st;
//	StackInit(&st);
//	StackPush(&st, 1);
//	StackPush(&st, 2);
//	StackPush(&st, 3);
//	StackPush(&st, 4);
//
//	return 0;
//}

//#include <string>
//// ��������������ԣ���װ���̳С���̬
//// ��װ��1�����Ժͷ�������������ŵ���һ�� 2��ʹ�÷����޶���public/protected/private
//class Student  // C++��ϰ����class�����ࣨ��struct������������ͬ��classĬ�Ϸ���Ȩ��Ϊprivate��structĬ�Ϸ���Ȩ��Ϊpublic��
//{
//	// һ���ڶ������ʱ�򣬽�����ȷ��������޶�������Ҫ��class/structĬ���޶�
//private:
//	// ��Ա����
//	char _name[10];
//	int  _age;
//	int  _id;
//
//public:
//	// ��Ա����/��Ա����
//	void Init(const char* name, int age, int id)
//	{
//		strcpy(_name, name);
//		_age = age;
//		_id = id;
//	}
//
//	void Print()
//	{
//		cout << _name << endl;
//		cout << _age << endl;
//		cout << _id << endl;
//	}
//};
//
//int main()
//{
//	Student s1;
//	Student s2;
//
//	s1.Init("����", 18, 1);
//	s2.Init("����", 19, 2);
//
//	s1.Print();
//	s2.Print();
//
//	return 0;
//}

//typedef int STDataType;
//typedef struct Stack  // C���Բ���װ�����������ݼȿ��Ե��ú�������Ҳ����ֱ�ӷ��ʽṹ���ڽṹ����ֱ�Ӵ����޷�������
//{
//	STDataType* a;
//	int top;
//	int capacity;
//}ST;
//
//void StackPush(ST* ps, STDataType x)
//{
//	assert(ps);
//
//	if (ps->top == ps->capacity)
//	{
//		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
//		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newCapacity);
//		if (tmp == NULL)
//		{
//			printf("realloc fail\n");
//			exit(-1);
//		}
//
//		ps->a = tmp;
//		ps->capacity = newCapacity;
//	}
//
//	ps->a[ps->top] = x;
//	ps->top++;
//}

//class Stack  // C++��װ�����������ݽ��ܵ��ú�����������ֱ����������ֱ�Ӵ��������Ҳ�����
//{
//public:
//	void StackInit()
//	{
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//
//	void StackPush(int x)
//	{
//		if (_top == _capacity)
//		{
//			int newCapacity = _capacity == 0 ? 4 : _capacity * 2;
//			int* tmp = (int*)realloc(_a, sizeof(int) * newCapacity);
//			if (tmp == NULL)
//			{
//				printf("realloc fail\n");
//				exit(-1);
//			}
//
//			_a = tmp;
//			_capacity = newCapacity;
//		}
//
//		_a[_top] = x;
//		_top++;
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
//	Stack st;
//	st.StackInit();
//	st.StackPush(1);
//	st.StackPush(4);
//
//	return 0;
//}

//#include "stack.h"
//
//int main()  // ����������������ռ�ڴ�ռ�ĵĴ�С��ֻ����Ա�����������ڴ������򣬺�C�Ľṹ��һ�£�
//{
//	Stack s1;
//	Stack s2;
//
//	// �����д��˳�Ա�������Ƿ���˳�Ա�����أ�
//	// û���Ա����
//	cout << sizeof(Stack) << endl;  // 12
//	cout << sizeof(s1) << endl;  // 12
//
//	// ÿ�������ж��ж����ĳ�Ա����
//	s1._top = 0;
//	s2._top = -1;
//
//	// ��ͬ������ó�Ա���������õ���ͬһ��
//	s1.Init();
//	s2.Init();
//
//	return 0;
//}

class A1  // ���м��г�Ա���������г�Ա����
{
public:
	void f1() {}
private:
	int _a;
};

class A2  // ���н��г�Ա����
{
public:
	void f2() {}
};

class A3  // ����ʲô��û�С�������
{};

int main()  // ����A1��A2��A3��������ռ�ڴ�ռ�Ĵ�С
{
	// ����ͽ��г�Ա�������࣬�Ὺ��1Byte�Ŀռ䣨��1byte���洢��Ч���ݣ�ֻ��Ϊ��ռλ����ʾ������ڣ�
	cout << sizeof(A1) << endl;  // 4
	cout << sizeof(A2) << endl;  // 1
	cout << sizeof(A3) << endl;  // 1

	// Ϊ�ο���1Byte�Ŀռ䣿
	A2 a;
	A3 b;
	cout << &a << endl;  // �������ٿռ䣬��ȡ��ַΪ��ָ�룬�����޷����ֶ���a��b
	cout << &b << endl;

	return 0;
}