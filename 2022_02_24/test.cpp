#include <iostream>
#include <string>
using namespace std;

//int main()  // 字符串的遍历+修改
//{
//	string s1("hello world");
//
//	for (size_t i = 0; i < s1.size(); ++i)  // 方式1：[]+下标索引
//	{
//		s1[i] += 1;
//	}
//
//	for (size_t i = 0; i < s1.size(); ++i)
//	{
//		cout << s1[i] << " ";
//	}
//	cout << endl;
//
//	string::iterator it = s1.begin();  // 方式2：迭代器
//	while (it != s1.end())
//	{
//		*it -= 1;
//		++it;
//	}
//
//	it = s1.begin();
//	while (it != s1.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	for (auto& e : s1)  // 方式3：范围for，自动往后迭代，自动判断结束（C++11）
//	{
//		e -= 1;
//	}
//
//	for (auto e : s1)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

//int main()  // 反向迭代器
//{
//	string s1("hello world");
//	string::reverse_iterator rit = s1.rbegin();  // 若定义麻烦可使用auto，即auto rit = s1.rbegin();
//	while (rit != s1.rend())
//	{
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//
//	return 0;
//}

//#include <list>
//
//int main()  // list不能通过[]+下标索引进行遍历，只能通过迭代器
//{
//	list<int> lt(10, 5);
//	list<int>::iterator it = lt.begin();
//	while (it != lt.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	return 0;
//}

//int main()  // const迭代器
//{
//	const string s("hello world");
//
//	string::const_iterator it = s.begin();  // 等价写法为auto it = s.begin();
//	while (it != s.end())
//	{
//		//*it -= 1;  // err，不可被修改
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	// C++11新增cbegin和cend，阅读代码知道返回的是const迭代器，代码更规范
//	string::const_reverse_iterator rit = s.crbegin();  // 等价写法为auto rit = s.rbegin();
//	while (rit != s.crend())
//	{
//		//*rit = 'A';  // err，不可被修改
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//
//	return 0;
//}

//int main()  // string空间不够自动增容
//{
//	string s;
//	size_t sz = s.capacity();
//	cout << "making s grow:\n";
//	for (int i = 0; i < 1000; ++i)
//	{
//		s += 'c';
//		if (sz != s.capacity())
//		{
//			sz = s.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//
//	return 0;
//}

//int main()  // 利用reserve提高插入数据的效率，避免增容带来的开销
//{
//	string s;
//	s.reserve(1000);  // 申请至少能存储1000个字符的空间
//	size_t sz = s.capacity();
//	cout << "making s grow:\n";
//	for (int i = 0; i < 1000; ++i)
//	{
//		s += 'c';
//		if (sz != s.capacity())
//		{
//			sz = s.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//
//	return 0;
//}

//int main()  // resize将有效字符的个数改成n个，多出的空间用字符c填充
//{
//	string s1;
//	s1.reserve(100);
//
//	string s2;
//	s2.resize(100, 'x');
//
//	string s3("hello world");
//	s3.reserve(100);
//
//	string s4("hello world");
//	s4.resize(100, 'x');
//
//	string s5("hello world");
//	s5.resize(5);
//
//	return 0;
//}

//int main()
//{
//	string s("hello world");
//	cout << s << endl;  // string类重载了流提取和流插入运算符，可以直接打印
//	cout << s.c_str() << endl;  //  返回C形式字符串的指针，也可以打印
//
//	return 0;
//}

//int main()  // c_str的使用场景
//{
//	string file("test.txt");
//	//FILE* fout = fopen(file, "w");  // err，第一个参数必须是const char*，而file是string类
//	FILE* fout = fopen(file.c_str(), "w");  // 通过c_str传字符串的指针
//
//	return 0;
//}

//int main()  // find字符串查找
//{
//	string file1("test.txt");  // 取出文件的后缀名
//
//	size_t pos1 = file1.find('.');
//	if (pos1 != string::npos)  // npos为-1，但类型是size_t，即很大的值
//	{
//		string suffix = file1.substr(pos1, file1.size() - pos1);
//		//string suffix = file.substr(pos);
//		cout << suffix << endl;
//	}
//
//	string file2("test.txt.zip");  // 取出文件的后缀名
//
//	size_t pos2 = file2.rfind('.');
//	if (pos2 != string::npos)  // npos为-1，但类型是size_t，即很大的值
//	{
//		string suffix = file2.substr(pos2, file2.size() - pos2);
//		//string suffix = file.substr(pos);
//		cout << suffix << endl;
//	}
//
//	string url("http://www.cplusplus.com/reference/string/string/find/");  // 取出网址的协议、域名、路径
//
//	size_t p1 = url.find(':');
//	string protocol = url.substr(0, p1);
//	cout << protocol << endl;
//
//	size_t p2 = url.find('/', p1 + 3);
//	string domain = url.substr(p1 + 3, p2 - (p1 + 3));
//	cout << domain << endl;
//
//	string uri = url.substr(p2 + 1);
//	cout << uri << endl;
//
//	return 0;
//}

//int main()  // insert字符串插入（不建议过多使用，效率低）
//{
//	string s("hello world");
//
//	s += ' ';  // 尾插效率高
//	s += "!!!!";
//	cout << s << endl;
//
//	s.insert(0, 1, 'x');  // 头插效率低，O(N)复杂度
//	s.insert(s.begin(), 'y');
//	s.insert(0, "test");
//	cout << s << endl;
//
//	s.insert(4, "&&&&&");  // 中间位置插入效率低，O(N)复杂度
//	cout << s << endl;
//
//	return 0;
//}

//int main()  // erase字符串删除（不建议过多使用，效率低）
//{
//	string s("hello world");
//
//	s.erase(0, 1);  // 尽量少用头部和中间删除，因为要挪动数据，效率低
//	s.erase(s.size() - 1);
//	cout << s << endl;
//
//	s.erase(3);
//	cout << s << endl;
//
//	return 0;
//}

//int main()  // 计算字符串最后一个单词的长度（错误做法）
//{
//	string s;
//	cin >> s;  // cin和scanf一样，默认以空格或换行进行间隔，导致无法获取全部字符串
//
//	size_t pos = s.rfind(' ');
//	if (pos == string::npos)
//	{
//		cout << s.size() << endl;
//	}
//	else
//	{
//		cout << s.size() - pos - 1 << endl;
//	}
//
//	return 0;
//}

//int main()  // 计算字符串最后一个单词的长度（正确做法）
//{
//	string s;
//
//	char ch = getchar();  // 逐个读取字符存入到字符串中，遇到换行符结束
//	//char ch = cin.get();
//	while (ch != '\n')
//	{
//		s += ch;
//		ch = getchar();
//		//ch = cin.get();
//	}
//
//	size_t pos = s.rfind(' ');
//	if (pos == string::npos)
//	{
//		cout << s.size() << endl;
//	}
//	else
//	{
//		cout << s.size() - pos - 1 << endl;
//	}
//
//	return 0;
//}

int main()  // 计算字符串最后一个单词的长度（正确做法）
{
	string s;

	getline(cin, s);  // 使用getline函数最简单，将逐个读取字符遇换行符结束的过程封装成了getline函数

	size_t pos = s.rfind(' ');
	if (pos == string::npos)
	{
		cout << s.size() << endl;
	}
	else
	{
		cout << s.size() - pos - 1 << endl;
	}

	return 0;
}