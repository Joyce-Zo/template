#include<iostream>
using namespace std;
#include<string>

// ����ģ��
//template<typename T>
//������������

// ���� ��������
//void swapInt(int& x, int& y)
//{
//	int tmp = y;
//	y = x;
//	x = tmp;
//}
//// ������ ��������
//void swapFloat(float& x, float& y)
//{
//	float tmp = y;
//	y = x;
//	x = tmp;
//}

//template<typename T>
//void Myswap(T& x, T& y)
//{
//	T tmp = y;
//	y = x;
//	x = tmp;
//}
//template<typename T,typename Y>
//void Myswap1(T& x, Y& y)
//{
//	Y tmp = y;
//	y = x;
//	x = tmp;
//}

//
//int main()
//{
//	//int a = 10;
//	//float b = 22.4;
//	//Myswap1(a, b);
//	//cout << a << " " << b << endl;
//
//
//	//cout << a << " " << b << endl;
//	// 1���Զ��Ƶ�����
//	//int a = 10;
//	//int b = 20;
//	////swapInt(a, b);
//	//Myswap(a, b);
//	//cout << a <<" " << b << endl;
//
//	//float c = 10.5;
//	//float d = 20.5;
//	////swapFloat(c, d);
//	//Myswap(c, d);
//	//cout << c << " " << d << endl;
//	//
//	//// 2����ʽָ������
//	//int e = 100;
//	//int f = 20;
//	//Myswap<int>(e, f);
//	//cout << e << " " << f << endl;
//
//	return 0;
//}

//template<typename T>
//void test01()
//{
//	cout << "ko" << endl;
//}
//int main()
//{
//	test01<int>();
//
//	return 0;
//
//}


// ʹ�ú���ģ��ʵ��ѡ������Բ�ͬ�������͵�������н�������

//template<typename T>
//void MYswap(T& x, T& y)
//{
//	T tmp = x;
//	x = y;
//	y = tmp;
//}
//template<typename T>
//void Select_sort(T arr[],int len)
//{
//	int index = 0;
//	for (int i = 0; i < len - 1; i++)
//	{
//		index = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[index] < arr[j])
//			{
//				index = j;
//			}
//		}
//		if (index != i)
//		{
//			MYswap(arr[index], arr[i]);
//		}
//	}
//}
//
//template<typename T>
//void print(T arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void int_test()
//{
//	// �����������
//	int arr[] = { 2,4,6,1,3,26,7,1,2,4,9,0,2,3 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	print(arr, len);
//	Select_sort(arr, len);
//	cout << endl;
//	print(arr, len);
//}
//void char_test()
//{
//	// �ַ��������
//	char arr2[] = "zcnasijda";
//	int len2 = sizeof(arr2) / sizeof(char);
//	print(arr2, len2);
//	Select_sort(arr2, len2);
//	cout << endl;
//	print(arr2, len2);
//}
//int main()
//{
//	int_test();
//	char_test();
//	return 0;
//}

// ��ͨ�����뺯��ģ�������
// ��ͨ����
//void add01(int x, int y)
//{
//	cout << x + y << endl;
//}
//template<typename T>
//void add02(T x, T y)
//{
//	cout << x + y << endl;
//}
//
//int main()
//{
//	//add01(10, 20);
//	char c = 'c';
//	add02<int>(10, c);
//	return 0;
//}

// ��ͨ�����뺯��ģ��ĵ��ù���

//void print(int x, int y)
//{
//	cout << "��ͨ����" << endl;
//}
////void print(int x, int y, int z)
////{
////	cout << "��ͨ����" << endl;
////}
//template<typename T>
//void print(T x, T y)
//{
//	cout << "����ģ��" << endl;
//}
//template<typename T>
//void print(T x, T y,T z) // ����
//{
//	cout << "����ģ������" << endl;
//}
//
//int main()
//{
//	char a = 10;
//	char b = 20;
//	print(a, b);
//
//	//print(10, 20);
//	//print<>(10, 20);
//	//char c = 'c';
//	//print(10, 20, 30);
//	//print<int>(10, 20, c);
//	return 0;
//}

// ģ��ľ�����

//template<typename T>
//bool My_compare(T &a, T &b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//void judge(bool a)
//{
//	if (a)
//	{
//		cout << "���" << endl;
//	}
//	else
//	{
//		cout << "����" << endl;
//	}
//}
//class person
//{
//public:
//	person(string name,int age)
//	{
//		m_age = age;
//		m_name = name;
//	}
//	int m_age;
//	string m_name;
//};
//template<>bool My_compare(person& p1, person& p2)
//{
//	if (p1.m_age == p2.m_age && p1.m_name == p2.m_name)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//void test02()
//{
//	person p1("Tim", 22);
//	person p2("Tim", 22);
//	bool ret = My_compare(p1, p2);
//	judge(ret);
//}
//void test01()
//{
//	int a = 10;
//	int b = 10;
//	bool ret = My_compare(a, b);
//	judge(ret);
//}
//int main()
//{
//	test02();
//	return 0;
//}

// ��ģ�� 1

//template<class Name_type,class Age_type >
//class person
//{
//public:
//	person(Name_type name, Age_type age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	void show()
//	{
//		cout << this->m_name << this->m_age << endl;
//	}
//	Name_type m_name;
//	Age_type m_age;
//};
//void test01()
//{
//	person<string, int> p1("Joyce", 22);
//	p1.show();
//}

// ��ģ���뺯��ģ�������
//template<class Name_type, class Age_type = int >
//class person
//{
//public:
//	person(Name_type name, Age_type age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	void show()
//	{
//		cout << this->m_name << this->m_age << endl;
//	}
//	Name_type m_name;
//	Age_type m_age;
//};
////void test01()
////{
////	//person p1("joyce", 21); // �Զ������Ƶ�
////	person<string, int> p2("tatina", 22); // ��ʽָ������
////	p2.show();
////}
//void test02()
//{
//	person<string> p2("tatina", 22); // ��ʽָ������
//	p2.show();
//}

// ��ģ���г�Ա��������ʱ��

//class person1
//{
//public:
//	void show1()
//	{
//		cout << "1" << endl;
//	}
//};
//class person2
//{
//public:
//	void show2()
//	{
//		cout << "2" << endl;
//	}
//};
//template<class T>
//class Myclass
//{
//public:
//	T obj;
//	void m_show1()
//	{
//		obj.show1();
//	}
//	void m_show2()
//	{
//		obj.show2();
//	}
//};
//void test02()
//{
//	Myclass<person2> m;
//	//m.m_show1();
//	m.m_show2();
//}
//int main()
//{
//	test02();
//	return 0;
//}

// ��ģ���������������

//template<class T1,class T2>
//class person
//{
//public:
//	person(T1 name, T2 age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	void showinfo()
//	{
//		cout << this->m_name << this->m_age << endl;
//	}
//	T1 m_name;
//	T2 m_age;
//};
//// 1��ָ����������
//void print1(person<string, int>& p)
//{
//	p.showinfo();
//}
//void test01()
//{
//	person<string, int> p1("joyce", 21);
//	print1(p1);
//}
//// 2������ģ�廯
//template<class T1, class T2> 
//void print2(person<T1, T2>& p2)// ����ģ�廯ΪT1��T2
//{
//	p2.showinfo();
//	cout << typeid(T1).name() << endl;// �鿴T1������
//	cout << typeid(T2).name() << endl;// �鿴T2������
//}
//void test02()
//{
//	person<string, int> p2("tatina", 20);
//	print2(p2);
//}
//// 3��������ģ�廯
//template<class T>
//void print3(T& p) // ֱ����T���ñ������Ƶ�������
//{
//	p.showinfo();
//	cout << typeid(T).name() << endl;
//}
//void test03()
//{
//	person<string, int> p3("yomi", 1);
//	print3(p3);
//}
//int main()
//{
//	test03();
//
//	return 0;
//}

// ��ģ����̳�

//template<class T>
//class base
//{
//public:
//
//	T m_a;
//};
//class son1 :public base<int>
//{
//	;
//};
//void test01()
//{
//	son1 s1;
//}
//
//template<class T1,class T2>
//class son2 :public base<T2>
//{
//public:
//	son2()
//	{
//		cout << typeid(T1).name() << endl;
//		cout << typeid(T2).name() << endl;
//	}
//	T1 m_a;
//};
//void test02()
//{
//	son2<string,int> s2; // ��ʽָ������
//}
//
//int main()
//{
//	test02();
//	return 0;
//}

// ��ģ���Ա��������ʵ��

//template<class T1,class T2>
//class person
//{
//public:
//	person(T1 name, T2 age);
//	//{
//	//	this->m_name = name;
//	//	this->m_age = age;
//	//}
//	void show();
//	//{
//	//	cout << this->m_name << " " << this->m_age << endl;
//	//}
//	T1 m_name;
//	T2 m_age;
//};
//// ���캯������ʵ��
//template<class T1,class T2>
//person<T1, T2>::person(T1 name, T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
//// ��Ա��������ʵ��
//template<class T1,class T2>
//void person<T1,T2>::show() // ��δ�õ�T1T2��������������ģ���г�Ա�����������Ҫд��T1/T2
//{
//	cout << this->m_name << " " << this->m_age << endl;
//}
//void test01()
//{
//	person<string, int> p("joyce",21);
//	p.show();
//}
//int main()
//{
//	test01();
//
//	return 0;
//}

// ��ģ����ļ���д
//#include"person.cpp"
//#include"person.hpp"
//
//void test01()
//{
//	person<string, int> p("joyce",21);
//	p.show();
//}
//int main()
//{
//	test01();
//
//	return 0;
//}

// ��ģ������Ԫ

//template<class T1, class T2>
//class person;
//
//template<class T1, class T2>
//void print2(person <T1, T2>p) // ��Ϊ��T1/T2�������Ҫ������ģ��
//{
//	cout << p.m_name << " " << p.m_age << endl;
//}
//
//template<class T1, class T2>
//class person
//{
//public:
//	// ȫ�ֺ��� ����ʵ��
//	friend void print1(person <T1, T2>p)
//	{
//		cout << p.m_name << " " << p.m_age << endl;
//	}
//	// ȫ�ֺ��� ����ʵ��
//	friend void print2<>(person <T1, T2>p);
//
//	person(T1 name, T2 age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//private:
//	T1 m_name;
//	T2 m_age;
//};
//
//void test01()
//{
//	person<string,int> p("joyce", 21);
//	print1(p);
//}
//
//void test02()
//{
//	person<string, int> p("joyce", 21);
//	print2(p);
//}
//int main()
//{
//	test02();
//	return 0;
//}
#include"my_array.hpp"

void print(my_array<int>&arr)// ��ӡ����
{
	for (int i = 0; i <arr.get_size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test01()
{
	my_array<int> arr1(5); // �вι���
//my_array<int> arr2(arr1);// ��������
//my_array<int> arr3(100); 
//arr1 = arr3; // �Զ�������=��ֵ

	for (int i = 0; i < 5; i++)
	{
		arr1.push_back(i);
	}
	print(arr1);
	cout << "capacity" << arr1.get_capacity() << endl;
	cout << "size" << arr1.get_size() << endl;

	my_array<int> arr2(arr1);// ��������
	print(arr2);
	arr2.pop_back();
	print(arr2);
	cout << "capacity" << arr2.get_capacity() << endl;
	cout << "size" << arr2.get_size() << endl;
}

class person
{
public:
	person() {};
	person( string name,int age )
	{
		this->m_age = age;
		this->m_name = name;
	}
	int m_age;
	string m_name;
};

void print2(my_array<person>& arr)
{
	for (int i = 0; i < arr.get_size(); i++)
	{
		cout << arr[i].m_name <<arr[i].m_age<<endl;
	}
	cout << endl;
}
void test02()
{
	// �������鲢��ʼ��
	my_array<person>arr(10);
	person a1("joyce", 21);
	person a2("tatina", 20);
	person a3("knaz", 40);
	person a4("nana", 20);
	person a5("yomi", 1);
	// β�嵽������
	arr.push_back(a1);
	arr.push_back(a2);
	arr.push_back(a3);
	arr.push_back(a4);
	arr.push_back(a5);
	// ��ӡ�����е�ÿ��Ԫ�ص��������С����
	print2(arr);
	cout << "capacity" << arr.get_capacity() << endl;
	cout << "size" << arr.get_size() << endl;
	// -----------------------------------------------------
	// βɾ2��Ԫ��
	arr.pop_back();
	arr.pop_back();
	// ��ӡ�����е�ÿ��Ԫ�ص��������С����
	print2(arr);
	cout << "capacity" << arr.get_capacity() << endl;
	cout << "size" << arr.get_size() << endl;
}
int main()
{
	//test01();
	test02();
		
	return 0;
}