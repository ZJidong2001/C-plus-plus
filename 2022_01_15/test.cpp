#include <iostream>
using namespace std;

//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		month = month;  // ��Ȼ����ͨ�������ǲ�δ�޸�����ĳ�Ա����ֵ�����ǽ��β�month��ֵ���β�month
//		_day = day;
//	}
//
//private:
//	int _year;  // ��Ա������ǰ�������_��Ϊ�˺ͺ����β����������֣������ͻ
//	int month;  // ������_�������֣����뺯���β�����ͻ
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
//		Date::year = year;  // ��Ա�������뺯���β������������֣����뽫�βθ�ֵ�����Ա����������ָ������
//		Date::month = month;
//		Date::day = day;
//	}
//
//private:
//	int year;  // ��Ա�������뺯���β�����ͬ��ͨ��ָ���������ɿ������֣���ʵ���о�����Ҫ���������Լ����Լ�
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
//		//this = nullptr;  // err��this���ܸ���ָ�����
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
//		//cout << this->_year << "-" << this->_month << "-" << this->_day << endl;  // һ����������ǲ�������д
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
//	// ÿ������Ϊ���Եĳ�Ա�������ٿռ䣬���õķ�����ͬһ�����������Կ��Բ鿴�������õ�ַ��ͬ��
//	// ��ͬ���������ͬ���������ȷ���÷���ʹ����һ�������أ���������������thisָ��
//	Date d1;
//	d1.Init(2022, 1, 15);  // d1.Init(&d1, 2022, 1, 15);
//	d1.Print();  // d1.Print(&d1);
//
//	Date d2;
//	d2.Init(2022, 1, 16);  // d2.Init(&d2, 2022, 1, 16);
//	d2.Print();  // d2.Print(&d2);
//
//	// ע�⣺
//	// 1�����ó�Ա����ʱ��������ʽ��ʵ�θ�this
//	// 2�������Ա����ʱ��������ʽ�����β�this
//	// 3���ڳ�Ա�����ڲ���������ʽʹ��this
//	return 0;
//}

//class A  // p��Ȼ�ǿ�ָ�룬����p���ó�Ա����������ֿ�ָ����ʣ���Ϊ��Ա����û�д��ڶ�������
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
//	p->Show();  // ��������
//
//	return 0;
//}

//class A  // ���б��������ڳ�Ա�����ڶԿ�ָ��p�����˷���
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
//	p->PrintA();  // ���б���
//
//	return 0;
//}

//int main()  // C���Դ�������ʵ�ֲ����ó�ʼ�����������⣬���C++�����Զ�������6��Ĭ�ϳ�Ա����
//{
//	Stack st;
//
//	// ����ʵ�ֲ����ó�ʼ������
//	StackPush(&st, 1);
//	StackPush(&st, 1);
//	StackPush(&st, 1);
//	// ����ʵ�ֲ��������ٺ���
//
//	return 0;
//}

//class Date  // ���캯���������ǿ��ռ䴴�����󣬶��ǳ�ʼ������
//{
//	// ���캯��������
//	// 1����������������ͬ
//	// 2���޷���ֵ
//	// 3������ʵ����ʱ�������Զ����ö�Ӧ�Ĺ��캯��
//	// 4�����캯����������
//	// 5���������û����ʽ���幹�캯������C++���������Զ�����һ���޲ε�Ĭ�Ϲ��캯����һ���û���ʽ�������������������
//public:
//	Date()  // ��һ�ֹ��캯��
//	{
//		_year = 0;
//		_month = 1;
//		_day = 1;
//	}
//
//	Date(int year, int month, int day)  // �ڶ��ֹ��캯��
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
//	Date d1;  // �޲������Զ����õ�һ�ֹ��캯��
//	Date d2(2022, 1, 15);  // ���Σ��Զ����õڶ��ֹ��캯��
//
//	return 0;
//}

//class Date  // ��������ֹ��캯�����Ժϲ���һ��
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)  // C++��ʽ���幹�캯�����Ƽ�ȫȱʡ���߰�ȱʡ���ȽϺ���
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

//class Date  // �������û����ʽ���幹�캯������C++���������Զ�����һ���޲ε�Ĭ�Ϲ��캯��
//{
//	// Ĭ�Ϲ��캯���������ò����Ϳ��Ե���
//	// �κ�һ�����Ĭ�Ϲ��캯�������ֿ��ܣ�ȫȱʡ���޲Ρ�����ʽʵ�ֱ������Զ�����
//public:
//
//private:
//	// C++�����ͷ�Ϊ���ࣺ�������ͣ��������ͣ����Զ�������
//	// �������ͣ�int��char��double��ָ�롢�������������
//	// �Զ������ͣ�struct��class���������
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;  // ������Ĭ�Ϲ��캯���������Է��ֶ�����ĳ�Ա�����������ֵ���Ƿ�˵���������Զ����ɵ�Ĭ�Ϲ��캯��ɶ��û���أ���ʵ������
//	// ��Ĭ�Ϲ��캯�������������Ͳ�����ʼ�����������Զ�������ȥ��������Ĭ�Ϲ��캯����ʼ�������û��Ĭ�Ϲ��캯���ͻᱨ��
//	return 0;
//}

//class A
//{
//public:
//	//A()  // ���ò����Ϳ��Ե��ã���Ĭ�Ϲ��캯��
//	//{
//	//	cout << "A()" << endl;
//	//	_a = 0;
//	//}
//
//	A(int a)  // ���봫�Σ�����Ĭ�Ϲ��캯�������û��Ĭ�Ϲ��캯���ͻᱨ��
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
//	Date d1;  // ��Ĭ�Ϲ��캯�������������Ͳ�����ʼ�����������Զ�������ȥ��������Ĭ�Ϲ��캯����ʼ��
//
//	return 0;
//}

//class Date  // ������������������ɶ�������٣�������ɶ����һЩ��Դ������
//{
//	// ��������������
//	// 1��������������������ǰ�����ַ�~
//	// 2���޲����޷���ֵ
//	// 3��һ��������ֻ��һ��������������δ��ʽ���壬ϵͳ���Զ�����Ĭ�ϵ���������
//	// 4�������������ڽ���ʱ��C++����ϵͳ�Զ�������������
//public:
//	~Date()  // Date��û����Դ��Ҫ��������ʵ��ʵ����������������
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
//	return 0;  // �����������ڽ���ʱ��C++����ϵͳ�Զ�������������
//}

//class Stack
//{
//public:
//	Stack(int capacity = 4)  // ���캯��
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
//	~Stack()  // ��������������ɶ����һЩ��Դ������
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
//int main()  // ���캯��˳����s1��s2������������s2��s1��ջ��
//{
//	Stack s1;
//	Stack s2(20);
//
//	return 0;
//}

//class Stack
//{
//public:
//	Stack(int capacity = 4)  // ���캯��
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
//int main()  // һ��������ֻ��һ��������������δ��ʽ���壬ϵͳ���Զ�����Ĭ�ϵ���������
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
//class MyQueue  // ����ջʵ��һ�����У�������ʵ�֣�ֻ�Ǽ�һ�¹��캯��������������ʵ�����ã�
//{
//public:
//	// ϵͳ�Զ�����Ĭ�Ϲ��캯������������������Զ������ͳ�Ա�����������Ĺ��캯������������
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
//int main()  // �������ʽ����������������ô�������Զ����ɵ����������͹��캯�����ƣ������������Ͳ������������Զ������͵���������������
//{
//	MyQueue mq;
//
//	return 0;
//}

//class Date  // �������캯������������ĳ������һģһ�����¶���
//{
//	// �������캯��������
//	// 1���������캯���ǹ��캯����һ��������ʽ
//	// 2���������캯���Ĳ���ֻ��һ���ұ���ʹ�����ô��Σ�ʹ�ô�ֵ��ʽ����������ݹ����
//	// 3����δ��ʽ���壬ϵͳ����Ĭ�ϵĿ������캯�����������ͳ�Ա����������ɰ��ֽ���Ŀ���<ǳ����>���Զ������ͳ�Ա��������������Ŀ������캯����
//public:
//	Date(int year = 0, int month = 1, int day = 1)  // ���캯��
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Date(const Date& d)  // �������캯�����������const��������޸ģ�
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//	~Date()  // ��������
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
//	Date d2(d1);  // ��������
//
//	return 0;
//}

//class Date  // ϵͳ����Ĭ�ϵĿ������캯���������������ͳ�Ա����������ɰ��ֽ���Ŀ���<ǳ����>�����޿������캯���Կɣ�
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)  // ���캯��
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	~Date()  // ��������
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
//	Date d2(d1);  // ��������
//
//	return 0;
//}

//class Stack  // ϵͳ����Ĭ�ϵĿ������캯�����ᵼ�³��������������ʽ���忽�����캯�������������
//{
//public:
//	Stack(int capacity = 4)  // ���캯��
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
//	~Stack()  // ��������
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
//	Stack st2(st1);  // ��������
//
//	return 0;  // ���ֽ���Ŀ���������st1��st2��_a��ͬ�������ָ���ͬһ��ռ䱻�ͷ����Σ���ɳ������
//			   // ���������������⣬����st1�޸Ŀ��ٿռ�����ݣ��ᵼ��st2�ڿ��ٿռ�����ݷ����޸�
//}

class A  // ϵͳ����Ĭ�ϵĿ������캯���������Զ������ͳ�Ա��������������Ŀ������캯��
{
public:
	A() {}  // ���캯��
	A(const A&)  // �������캯��
	{
		cout << "A(const A&)" << endl;
	}
};

class Date
{
public:
	Date(int year = 0, int month = 1, int day = 1)  // ���캯��
	{
		_year = year;
		_month = month;
		_day = day;
	}

	~Date()  // ��������
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
	Date d2(d1);  // ��������

	return 0;
}