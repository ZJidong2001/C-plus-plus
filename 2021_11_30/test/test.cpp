#include <iostream>
using namespace std;

//int main()  // ���á��������
//{
//	int a = 10;
//	int& b = a;
//	int& c = b;
//
//	return 0;
//}

// ��������������a�����Ч�� b���βε��޸Ŀ���Ӱ��ʵ�Σ�����Ͳ�����

//struct Stack
//{
//	int a[100];
//	int top;
//};
//
//void Func1(struct Stack st) {}  // ��ֵ�����������ݿ�����Ҫ���ټ���ռ�
//void Func2(struct Stack* pst) {}  // ����ַ����ָ�뿪��4/8Byte�ռ�
//void Func3(struct Stack& rst) {}  // �����á����﷨�����Ͽ�δ���ٿռ�
//
//void StackInit(struct Stack st) {}  // ��ֵ�����޸��ββ���Ӱ��ʵ��
//void StackInit(struct Stack* pst) {}  // ����ַ����ͨ��ָ�룬�޸��βο���Ӱ��ʵ��
//void StackInit(struct Stack& rst) {}  // �����á����βε��޸Ŀ���Ӱ��ʵ��
//
//int main()
//{
//	struct Stack st1;
//
//	Func1(st1);
//	Func2(&st1);
//	Func3(st1);  // a�����Ч��
//
//	StackInit(st1);
//	StackInit(&st1);
//	StackInit(st1);  // b���βε��޸Ŀ���Ӱ��ʵ�Σ�����Ͳ�����
//
//	return 0;
//}

// ����������ֵ����a�����Ч�� b���޸ķ��ر���

//int Add1(int a, int b)  // ��ֵ���ء������ض����ֵ�´������ʱ���󣬷��ص�����ʱ����
//{
//	int c = a + b;
//	return c;
//}
//int& Add2(int a, int b)  // �����÷��ء������ص��Ƿ��ض��������
//{
//	static int c = a + b;  // ǰ���Ƿ��ض���δ����ϵͳ
//	return c;
//}
//
//int main()
//{
//	int ret1 = Add1(1, 2);
//	int ret2 = Add2(3, 4);  // a�����Ч��
//	return 0;
//}

//int& At(int i)  // �ɶ���д
//{
//	static int a[10];
//	return a[i];
//}
//
//int main()
//{
//	for (size_t i = 0; i < 10; ++i)
//	{
//		At(i) = 10 + i;  // b���޸ķ��ر���
//	}
//
//	for (size_t i = 0; i < 10; ++i)
//	{
//		cout << At(i) << " ";
//	}
//
//	return 0;
//}

//int main()  // ������
//{
//	int a1 = 10;  // ����
//	int& b1 = a1;
//
//	const int a2 = 10;  // Ȩ�޷Ŵ󣬲�����
//	int& b2 = a2;  // a2�����޸ģ�b2��Ϊ�����ø������޸�
//
//	const int a3 = 10;  // Ȩ�޲��䣬����
//	const int& b3 = a3;
//
//	int a4 = 10;  // Ȩ����С������
//	const int& b4 = a4;  // a4���޸ģ�b4��Ϊ�����ò����޸�Ҳ����
//
//	return 0;
//}

//int main()
//{
//	double d1 = 11.11;
//	int i1 = d1;  // d1����д��i1����ʽ����ת������ֱ�ӷ����ģ�ת���в�����һ����ʱ������
//
//	double d2 = 11.11;
//	int& i2 = d2;  // ת���в�����һ����ʱ��������ʱ�������г����Բ��ɱ��޸ģ�Ȩ�޷Ŵ�
//
//	double d3 = 11.11;
//	const int& i3 = d3;  // // ת���в�����һ����ʱ������i3��Ϊ��ʱ�����ı���
//
//	return 0;
//}

//void StackPrint(const struct Stack& st) {}  // ʹ�����ô��Σ���������в��ı������ֵ������ʹ��const &

//void f1(int* p)
//{
//	*p = 10;
//}
//
//void f2(int& r)
//{
//	r = 10;
//}
//
//int main()  // ָ����������ȣ�ָ������������ڷ��ֳ���bug
//{
//	int a = 0;
//	f1(&a);
//	f2(a);
//
//	f1(NULL);  // err�������׷��ִ���
//	f1(0);  // err�������׷��ִ���
//
//	f2(NULL);  // err�������ڱ���ʱ�ͱ�������ȫ
//	f2(0);  // err
//
//	return 0;
//}

// ����Ŀ��C++���򣬵�����д�õ����ݽṹ�Ŀ�����C����д��
//extern "C"  // C++��C���Եĺ�����������ͬ����C++�������C���Կ���Ҫʹ��extern "C"
//{
//// ����C++��������extern "C"{}����ĺ�����C����������ģ����ӵ�ʱ����C�ĺ���������ȥ�ң��Ϳ���������
//#include "..\stack_C\stack.h"  // �������·����ͷ�ļ�
//}
//
//bool isValid(const char* s)  // �ڲ��ĺ���ʵ�ֵ��ñ���д�õ����ݽṹ�Ŀ�
//{
//	ST st;
//	StackInit(&st);
//	while (*s)
//	{
//		if (*s == '(' || *s == '{' || *s == '[')
//		{
//			StackPush(&st, *s);
//			++s;
//		}
//		else
//		{
//			if (StackEmpty(&st))
//			{
//				StackDestroy(&st);
//				return false;
//			}
//
//			STDataType top = StackTop(&st);
//			StackPop(&st);
//			if ((*s == '}' && top != '{') || (*s == ']' && top != '[') || (*s == ')' && top != '('))
//			{
//				StackDestroy(&st);
//				return false;
//			}
//			else
//			{
//				++s;
//			}
//		}
//	}
//	bool ret = StackEmpty(&st);
//	StackDestroy(&st);
//	return ret;
//}
//
//int main()
//{
//	cout << isValid("{[]}") << endl;
//	cout << isValid("([)]") << endl;
//	return 0;
//}

// ����Ŀ��C���򣬵�����д�õ����ݽṹ�Ŀ�����C++д��
// ������C������extern "C"��������Ҫ��C++�ľ�̬����extern "C"��C++�ľ�̬����C������չ��������C�ı���������ʶextern "C"���ʻ���Ҫ��������
//#include "..\stack_CPP\stack.h"  // �������·����ͷ�ļ�
//
//bool isValid(const char* s)  // �ڲ��ĺ���ʵ�ֵ��ñ���д�õ����ݽṹ�Ŀ�
//{
//	ST st;
//	StackInit(&st);
//	while (*s)
//	{
//		if (*s == '(' || *s == '{' || *s == '[')
//		{
//			StackPush(&st, *s);
//			++s;
//		}
//		else
//		{
//			if (StackEmpty(&st))
//			{
//				StackDestroy(&st);
//				return false;
//			}
//
//			STDataType top = StackTop(&st);
//			StackPop(&st);
//			if ((*s == '}' && top != '{') || (*s == ']' && top != '[') || (*s == ')' && top != '('))
//			{
//				StackDestroy(&st);
//				return false;
//			}
//			else
//			{
//				++s;
//			}
//		}
//	}
//	bool ret = StackEmpty(&st);
//	StackDestroy(&st);
//	return ret;
//}
//
//int main()
//{
//	printf("%d\n", isValid("{[]}"));
//	printf("%d\n", isValid("([)]"));
//
//	return 0;
//}

// ���ú�������Ҫ����ջ֡��ջ֡��Ҫ����һЩ�Ĵ��������ݣ���������Ҫ�ָ��������Կ�����Щ���������ĵ�
// ����Ƶ�����õ�С�������ܷ��Ż�һ�£�
//int ADD(int x, int y)
//{
//	int ret = x + y;
//	return ret;
//}
//
//int main()
//{
//	ADD(1, 2);
//	ADD(1, 2);
//	ADD(1, 2);
//	ADD(1, 2);
//	ADD(1, 2);
//	ADD(1, 2);
//	ADD(1, 2);
//	ADD(1, 2);
//
//	return 0;
//}

// C�����ṩ�˺��滻��������д����ס��ԭ�����滻���滻һ�¿����Բ��ԣ�
//#define ADD(int x, int y) { return x + y;}  // err1�����Ǻ�����
//#define ADD(int x, int y) return x + y;  // err2�����Ǻ�����
//#define ADD(int x, int y) x + y;  // err3�����Ǻ�����
//#define ADD(x, y) x + y;  // err4��û�зֺţ�
//#define ADD(x, y) x + y  // err5�����滻�����ȼ����ܴ������⣩
//#define ADD(x, y) (x + y)  // err6�����滻�����ȼ����ܴ������⣩

//#define ADD(x, y) ((x) + (y))  // right
//
//int main()
//{
//	cout << ADD(3, 4) << endl;  // err4����� cout << 3 + 4; << endl;
//
//	cout << 10 * ADD(3, 4) << endl;  // err5����� cout << 10 * 3 + 4 << endl;
//
//	int a = 0, b = 1;
//	cout << ADD(a | b, a & b) << endl;  // err6����� cout << (a | b + a & b) << endl;
//
//	return 0;
//}

// �ɴ˿ɼ�C���Եĺ��滻�ܸ��ӣ����׳���C++�������������������﷨
inline int Add(int x, int y)  // inline��release�汾�¾Ͳ��Ὠ��ջ֡��ֻ���ڵ��õĵط�չ��
{
	int ret = x + y;
	return ret;
}

inline void Swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int ret = Add(1, 2);
	cout << ret << endl;

	int x = 0, y = 1;
	Swap(x, y);

	return 0;
}