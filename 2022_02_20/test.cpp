#include <iostream>
using namespace std;

//int Add(int left, int right)  // ר�Ŵ���int�ļӷ�����
//{
//	return left + right;
//}
//
//template<class T1, class T2>  // ͨ�üӷ�����
//T2 Add(const T1& left, const T2& right)
//{
//	return left + right;
//}
//
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.1, d2 = 20.2;
//	cout << Add(a1, a2) << endl;  // ���ģ�庯��ƥ�䣬����������Ҫ�ػ�
//	cout << Add(d1, d2) << endl;  // ���ñ������ػ���Add�汾
//
//	cout << Add(a1, d1) << endl;  // ���ñ������ػ���Add�汾
//	return 0;
//}

//typedef int STDataType;  // C��֧�ַ��ͱ�̣��޷�ͬʱʵ�ָ������͵�ջ
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
//int main()  // C���Բ���ͬʱʹ���������͵�ջ
//{
//	Stack st1;  // ��ջ���int����
//	Stack st2;  // ��ջ���double����
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
//int main()  // C����Ψһ����취�ǹ����������͵�ջ�������븴���Բ�
//{
//	StackInt st1;  // ��ջ���int����
//	StackDouble st2;  // ��ջ���double����
//
//	return 0;
//}

//template<class T>  // C++�ṩ�˷��ͱ�̡�����ģ��
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
//	void Push(const T& x);  // ��Ա���������Ͷ������
//
//private:
//	T* _a;
//	int _top;
//	int _capacity;
//};
//
//template<class T>  // ��Ա����ʵ��
//void Stack<T>::Push(const T& x)
//{
//	// ...
//}
//
//int main()  // ��ģ��ʵ�����뺯��ģ��ʵ������ͬ����ģ��ʵ������Ҫ����ģ�����ֺ��<>��Ȼ��ʵ���������ͷ���<>��
//{
//	Stack<int> st1;  // ��ջ���int����
//	Stack<double> st2;  // ��ջ���double����
//	Stack<char> st3;  // ��ջ���char����
//	Stack<int*> st4;  // ��ջ���int*����
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
//typedef basic_string<char> string;  // string����basic_string��ģ���ʵ����
// ֮���Բ�ֱ��ʵ��string�࣬����Ϊ�������¼ֵ�����֮���ӳ���ϵ���Ĳ�ͬ
// ASCII����Ӣ�ı����
// Unicode����ȫ�������ֱ���� utf-8��utf-16��utf-32
// GBK�������ı����

//int main()
//{
//	char str1[] = "hello";  // �����ʵ�ʴ����ASCII��ֵ���������ַ�
//	cout << str1 << endl;
//
//	char str2[] = "�Է�";  // ��������ռ�����ֽ�
//	cout << str2 << endl;
//
//	str2[1] += 1;  // ͨ�����Է�������˼������
//	str2[3] += 1;  // ����Ϸ����ƥ��ʿ��Ϊ*****��г�����ڱ����һ�η�Χ�ڣ�г����Ҳ�ܱ�����
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

//int main()  // string�����ĳ�������
//{
//	string s1;  // ����յ�string����󣬼����ַ���
//	string s2("hello world");  // ��C-string������string�����
//	string s3(s2);  // �������캯��
//
//	cin >> s1;
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//
//	string s4(s2, 2, 6);  // ��������ĳ��λ�ÿ�ʼȷ���������������Ӵ�
//	cout << s4 << endl;
//
//	string s5(s2, 2);
//	cout << s5 << endl;
//
//	string s6(s2, 2, 100);
//	cout << s6 << endl;
//
//	string s7("hello world", 3);  // ȡĳ���ַ�����ǰn���ַ����й���
//	cout << s7 << endl;
//
//	string s8(10, '!');  // n���ַ������ַ���
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
//	cout << s1.size() << endl;  // �����޲�𣬵��Ƽ�size��ѧϰ������������������size������ã�length�����壩�ɱ�����
//
//	cout << s1.max_size() << endl;  // �ַ�����󳤶ȣ��͵����йأ�ûɶ����
//	cout << s1 << endl;
//
//	cout << s1.capacity() << endl;  // ���ַ�����������С������������
//	s1.clear();  // ����ַ�������Ч����
//	cout << s1 << endl;
//	cout << s1.capacity() << endl;
//
//	return 0;
//}

//char& operator[] (size_t pos)  // operator[]���صײ���ʵ���߼������ڴ����÷��أ��ʿɶ���д
//{
//	assert(pos < _size);
//	return _str[pos];
//}

//int main()  // operator[]����
//{
//	string s1("hello world");
//	cout << s1 << endl;
//
//	for (size_t i = 0; i < s1.size(); ++i)  // ��
//	{
//		cout << s1[i] << " ";  // �ȼ�д��Ϊcout << s1.operator[](i) << " ";
//	}
//	cout << endl;
//
//	for (size_t i = 0; i < s1.size(); ++i)  // д
//	{
//		s1[i] += 1;
//	}
//	cout << s1 << endl;
//
//	return 0;
//}

//int main()  // at������operator[]�ô����ƣ�ֻ�Ǽ��Խ��ķ�ʽ��һ��
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
//	s1[100];  // assert����
//
//	try
//	{
//		s1.at(100);  // ���쳣
//	}
//	catch (exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}

int main()  // β��
{
	string s1;
	s1.push_back('a');  // push_backβ���ַ�
	s1.append("bcde");  // appendβ���ַ���
	cout << s1 << endl;

	s1 += ':';  // +=�ȿ���β���ַ����ֿ���β���ַ���
	s1 += "hello world";
	cout << s1 << endl;

	return 0;
}