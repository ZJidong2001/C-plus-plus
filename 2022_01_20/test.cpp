#include <iostream>
#include <assert.h>
using namespace std;

// �Ա�C++��C���������������ϵ����StackΪ����

//typedef int STDataType;  // C������̣����ݺͷ�������
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
//	StackInit(&st);  // C�����ǳ�ʼ�����������٣����벻�ᱨ��
//
//	StackPush(&st, 1);  // ���ô���ַ�����鷳
//	StackPush(&st, 2);
//	StackPush(&st, 3);
//
//	printf("%d\n", st.a[st.top]);  // ����������������ݣ���ͨ����ʵ�ֵĺ������з��ʣ����׳���ȡ��ջ��Ԫ��
//
//	StackDestroy(&st);
//}

//class Stack  // CPP����������ݺͷ�����װ
//{
//public:
//	Stack();  // ���캯��
//	void Push(int x);
//	int Top();
//	~Stack();  // ��������
//
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//void TestStack_CPP()
//{
//	Stack st;  // C++�����Զ���ʼ������������
//	st.Push(1);  // ����thisָ�룬���÷���
//	st.Push(2);
//	st.Push(3);
//	st.Push(4);
//	cout << st.Top() << endl;  // ���ݷ�װ���б�����������������ݣ�ֻ��ͨ����ʵ�ֵĺ������з���
//}

//int main()  // C���Զ�̬�ڴ����ʽ��malloc/calloc/realloc��free��
//{
//	int* p1 = (int*)malloc(sizeof(int));  // malloc������̬�ط���һ��ָ����С���ڴ�ռ䣬������ָ����ڴ�ռ��ָ�루�ú��������ʼ���ڴ�ռ��ֵ��
//	int* p2 = (int*)calloc(4, sizeof(int));  // calloc������̬�ط���һ��ָ�������ʹ�С���ڴ�ռ䣬������ָ����ڴ�ռ��ָ�루�ú�����ѷ��䵽���ڴ�ռ��ֵ��ʼ��Ϊ��ֵ<0����NULL>��
//	int* p3 = (int*)realloc(p2, sizeof(int) * 10);  // realloc������̬�ص���֮ǰ������ڴ��Ĵ�С
//	free(p1);
//	free(p3);
//	p1 = p2 = p3 = NULL;
//
//	return 0;
//}

//int main()  // C++��̬�ڴ����ʽ��new��delete��
//{
//	// malloc/free��new/delete������������û�б�������
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
//	int* p1 = new int(5);  // ��̬����һ��int�ռ䣬���ռ��ʼ��Ϊ5
//	int* p2 = new int[5];  // ��̬����5��int�ռ�
//	delete p1;
//	delete[] p2;
//	p1 = p2 = nullptr;
//
//	return 0;
//}

//int main()  // C++98��֧�ֳ�ʼ��new�����飬C++11֧����{}�б��ʼ��new������
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
//	// malloc/free��new/delete�����Զ�����������ܴ�
//
//	// malloc��̬���뵥��A�����5��A�������飬ֻ���ٿռ䲻��ʼ��
//	A* p1 = (A*)malloc(sizeof(A));
//	A* p2 = (A*)malloc(sizeof(A) * 5);
//
//	// new�ڶ������뵥��A�����5��A�������飬�����ù��캯����ʼ������
//	A* p3 = new A;
//	A* p4 = new A[5];
//
//	// free�����ٵĿռ��ͷŹ黹��ϵͳ
//	free(p1);
//	free(p2);
//
//	// delete�ȵ���ָ�������������������ͷſռ������
//	delete p3;
//	delete[] p4;
//
//	// һ��Ҫmalloc/free��new/delete��new[]/delete[]ƥ��ʹ�ã�������ܻ����
//
//	return 0;
//}

//int main()  // ������̵����ԣ��������ķ�ʽ�Ƿ���ֵ+��������
//{
//	char* p1 = (char*)malloc(1024u * 1024u * 1024u * 2u);  // �ѿռ���Ȼ�ܴ󣬵��վ�����
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

int main()  // �����������ԣ��������ķ�ʽһ�������쳣��C++��ҲҪ��������쳣����try��catch
{
	char* p1 = nullptr;
	try
	{
		p1 = new char[1024u * 1024u * 1024u * 2u - 1];  // new���ٿռ�ʧ�ܲ��᷵��nullptr�����쳣����ִ��������룬ֱ������catch���֣���������Ҳ��������
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
	printf("%p\n", p1);

	return 0;
}