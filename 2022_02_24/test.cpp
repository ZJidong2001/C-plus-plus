#include <iostream>
#include <string>
using namespace std;

//int main()  // �ַ����ı���+�޸�
//{
//	string s1("hello world");
//
//	for (size_t i = 0; i < s1.size(); ++i)  // ��ʽ1��[]+�±�����
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
//	string::iterator it = s1.begin();  // ��ʽ2��������
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
//	for (auto& e : s1)  // ��ʽ3����Χfor���Զ�����������Զ��жϽ�����C++11��
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

//int main()  // ���������
//{
//	string s1("hello world");
//	string::reverse_iterator rit = s1.rbegin();  // �������鷳��ʹ��auto����auto rit = s1.rbegin();
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
//int main()  // list����ͨ��[]+�±��������б�����ֻ��ͨ��������
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

//int main()  // const������
//{
//	const string s("hello world");
//
//	string::const_iterator it = s.begin();  // �ȼ�д��Ϊauto it = s.begin();
//	while (it != s.end())
//	{
//		//*it -= 1;  // err�����ɱ��޸�
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	// C++11����cbegin��cend���Ķ�����֪�����ص���const��������������淶
//	string::const_reverse_iterator rit = s.crbegin();  // �ȼ�д��Ϊauto rit = s.rbegin();
//	while (rit != s.crend())
//	{
//		//*rit = 'A';  // err�����ɱ��޸�
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//
//	return 0;
//}

//int main()  // string�ռ䲻���Զ�����
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

//int main()  // ����reserve��߲������ݵ�Ч�ʣ��������ݴ����Ŀ���
//{
//	string s;
//	s.reserve(1000);  // ���������ܴ洢1000���ַ��Ŀռ�
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

//int main()  // resize����Ч�ַ��ĸ����ĳ�n��������Ŀռ����ַ�c���
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
//	cout << s << endl;  // string������������ȡ�������������������ֱ�Ӵ�ӡ
//	cout << s.c_str() << endl;  //  ����C��ʽ�ַ�����ָ�룬Ҳ���Դ�ӡ
//
//	return 0;
//}

//int main()  // c_str��ʹ�ó���
//{
//	string file("test.txt");
//	//FILE* fout = fopen(file, "w");  // err����һ������������const char*����file��string��
//	FILE* fout = fopen(file.c_str(), "w");  // ͨ��c_str���ַ�����ָ��
//
//	return 0;
//}

//int main()  // find�ַ�������
//{
//	string file1("test.txt");  // ȡ���ļ��ĺ�׺��
//
//	size_t pos1 = file1.find('.');
//	if (pos1 != string::npos)  // nposΪ-1����������size_t�����ܴ��ֵ
//	{
//		string suffix = file1.substr(pos1, file1.size() - pos1);
//		//string suffix = file.substr(pos);
//		cout << suffix << endl;
//	}
//
//	string file2("test.txt.zip");  // ȡ���ļ��ĺ�׺��
//
//	size_t pos2 = file2.rfind('.');
//	if (pos2 != string::npos)  // nposΪ-1����������size_t�����ܴ��ֵ
//	{
//		string suffix = file2.substr(pos2, file2.size() - pos2);
//		//string suffix = file.substr(pos);
//		cout << suffix << endl;
//	}
//
//	string url("http://www.cplusplus.com/reference/string/string/find/");  // ȡ����ַ��Э�顢������·��
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

//int main()  // insert�ַ������루���������ʹ�ã�Ч�ʵͣ�
//{
//	string s("hello world");
//
//	s += ' ';  // β��Ч�ʸ�
//	s += "!!!!";
//	cout << s << endl;
//
//	s.insert(0, 1, 'x');  // ͷ��Ч�ʵͣ�O(N)���Ӷ�
//	s.insert(s.begin(), 'y');
//	s.insert(0, "test");
//	cout << s << endl;
//
//	s.insert(4, "&&&&&");  // �м�λ�ò���Ч�ʵͣ�O(N)���Ӷ�
//	cout << s << endl;
//
//	return 0;
//}

//int main()  // erase�ַ���ɾ�������������ʹ�ã�Ч�ʵͣ�
//{
//	string s("hello world");
//
//	s.erase(0, 1);  // ��������ͷ�����м�ɾ������ΪҪŲ�����ݣ�Ч�ʵ�
//	s.erase(s.size() - 1);
//	cout << s << endl;
//
//	s.erase(3);
//	cout << s << endl;
//
//	return 0;
//}

//int main()  // �����ַ������һ�����ʵĳ��ȣ�����������
//{
//	string s;
//	cin >> s;  // cin��scanfһ����Ĭ���Կո���н��м���������޷���ȡȫ���ַ���
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

//int main()  // �����ַ������һ�����ʵĳ��ȣ���ȷ������
//{
//	string s;
//
//	char ch = getchar();  // �����ȡ�ַ����뵽�ַ����У��������з�����
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

int main()  // �����ַ������һ�����ʵĳ��ȣ���ȷ������
{
	string s;

	getline(cin, s);  // ʹ��getline������򵥣��������ȡ�ַ������з������Ĺ��̷�װ����getline����

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