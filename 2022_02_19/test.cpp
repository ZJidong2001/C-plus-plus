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
//int main()  // ��̬�ڴ����
//{
//	// C����
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
//	Stack st1;  // ջ
//
//	Stack* pst2 = new Stack;  // ���ٿռ䲢���캯����ʼ��
//	delete pst2;  // �������������������Դ���ͷſռ�
//
//	return 0;
//}

//int main()
//{
//	char* p1 = (char*)malloc(0x7fffffff);  // malloc���ٿռ�ʧ�ܷ��ؿ�ָ�루if������ָ�룩
//	char* p2 = new char[0x7fffffff];  // new���ٿռ�ʧ����ֹ�������쳣��try-catch����
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
//int main()  // try-catch���쳣������Ծ����
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
//int main()  // new��delete�ײ�ʵ�֣������new�����ȵ���operator new�����ٵ��ù��캯����
//{
//	Stack* pst = (Stack*)operator new(sizeof(Stack));  // ��malloc���÷�һ��������operator new������װ��malloc������malloc����NULL�����쳣
//	// ͬ��operator delete������װ��free������ͬʱ���˸��ּ�����쳣
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
//	Stack* pst1 = new Stack[10];  // ���ǵ�����10��operatornew�����ǵ�����1��operator new[]��������10�ι��캯��
//	Stack* pst2 = (Stack*)operator new[](sizeof(Stack) * 10);
//
//	delete[] pst1;  // �ȵ���10������������������һ��operator delete[]
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
//	void* operator new(size_t n)  // ����ListNodeר����operator new
//	{
//		void* p = nullptr;
//		p = allocator<ListNode>().allocate(1);  // STL���ڴ�ء����ռ�������
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
//		ListNode* newnode = new ListNode(val);  // new��Ҫoperator new��Ĭ��operator new����malloc��ÿ�β���Ԫ�ض���Ҫmalloc��ϵͳ������ռ䣬Ч�ʵ��£�������ǿ������ض���ר����operator new
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
//int main()  // ��λnew���ʽ�������ѷ����ԭʼ�ڴ�ռ��е��ù��캯����ʼ��һ������
//{
//	// ��ζ�malloc��operator new���ٵĿռ���г�ʼ���������캯����֧����ʽ���ã������Զ����ã�
//	A* p1 = (A*)malloc(sizeof(A));
//	A* p2 = (A*)operator new(sizeof(A));
//
//	new(p1)A();  // ��λnew����ʽ���ù��캯��
//	new(p2)A(3);
//
//	A* p = new A(5);
//	delete p;
//
//	A* p = (A*)operator new(sizeof(A));
//	new(p)A(5);
//	p->~A();  // ��������������ʽ����
//	operator delete(p);
//
//	return 0;
//}

//int main()  // �ڴ�й©������̬������ڴ棬����ʹ�ã���û�н��ÿռ������ͷŹ黹��ϵͳ���ʹ����ڴ�й©
//{
//	// �ڴ�й©��Σ����
//	// a�������ڴ�й©�Ľ���������������Щ�ڴ�ỹ��ϵͳ��������ʲô�˺�
//	// b�������ڴ�й©�Ľ��̷��������������罩ʬ���̣���Σ���ܴ�ϵͳ��Խ��Խ������������崻�
//	// c����Ҫ�������еĳ��򣨱�����������򣩳����ڴ�й©��Σ���ܴ�ϵͳ��Խ��Խ������������崻�
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
//int main()  // CPP��ͨ����������֧��ͨ�õĺ������ã���C����ֻ�ܵ������岻ͬ�ĺ���ʵ��
//{
//	// ȱ�㣺
//	// 1�����صĺ�������ֻ�����Ͳ�ͬ������ĸ����ʱȽϵͣ�ֻҪ�������ͳ���ʱ������Ҫ���Ӷ�Ӧ�ĺ���
//	// 2������Ŀ�ά���ԱȽϵͣ�һ������������е����ؾ�����
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

//template<class T>  // �ȼ�д����template<typename T>  // ģ������б�����������
//void Swap(T& x1, T& x2)  // ���������б�����������
//{
//	T x = x1;
//	x1 = x2;
//	x2 = x;
//}
//
//int main()  // C++֧�ַ��ͱ�̡���ͨ������ģ��
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

	cout << Add(a1, d1) << endl;  // err��T�޷�����int����double

	cout << Add((double)a1, d1) << endl;  // �����ʽ1����ʵ��ǿ������ת��

	cout << Add<int>(a1, d1) << endl;  // �����ʽ2����ʽʵ����ָ��ģ�������ʵ������
	cout << Add<double>(a1, d1) << endl;

	return 0;
}
