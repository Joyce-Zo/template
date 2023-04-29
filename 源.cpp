#include<iostream>
using namespace std;
#include<string>

// 函数模板
//template<typename T>
//函数声明或定义

// 整型 交换函数
//void swapInt(int& x, int& y)
//{
//	int tmp = y;
//	y = x;
//	x = tmp;
//}
//// 浮点型 交换函数
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
//	// 1、自动推导类型
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
//	//// 2、显式指定类型
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


// 使用函数模板实现选择排序对不同数据类型的数组进行降序排序

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
//	// 整型数组测试
//	int arr[] = { 2,4,6,1,3,26,7,1,2,4,9,0,2,3 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	print(arr, len);
//	Select_sort(arr, len);
//	cout << endl;
//	print(arr, len);
//}
//void char_test()
//{
//	// 字符数组测试
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

// 普通函数与函数模板的区别
// 普通函数
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

// 普通函数与函数模板的调用规则

//void print(int x, int y)
//{
//	cout << "普通函数" << endl;
//}
////void print(int x, int y, int z)
////{
////	cout << "普通函数" << endl;
////}
//template<typename T>
//void print(T x, T y)
//{
//	cout << "函数模板" << endl;
//}
//template<typename T>
//void print(T x, T y,T z) // 重载
//{
//	cout << "函数模板重载" << endl;
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

// 模板的局限性

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
//		cout << "相等" << endl;
//	}
//	else
//	{
//		cout << "不等" << endl;
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

// 类模板 1

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

// 类模板与函数模板的区别
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
////	//person p1("joyce", 21); // 自动类型推导
////	person<string, int> p2("tatina", 22); // 显式指定类型
////	p2.show();
////}
//void test02()
//{
//	person<string> p2("tatina", 22); // 显式指定类型
//	p2.show();
//}

// 类模板中成员函数创建时机

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

// 类模板对象作函数参数

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
//// 1、指定传入类型
//void print1(person<string, int>& p)
//{
//	p.showinfo();
//}
//void test01()
//{
//	person<string, int> p1("joyce", 21);
//	print1(p1);
//}
//// 2、参数模板化
//template<class T1, class T2> 
//void print2(person<T1, T2>& p2)// 参树模板化为T1与T2
//{
//	p2.showinfo();
//	cout << typeid(T1).name() << endl;// 查看T1的类型
//	cout << typeid(T2).name() << endl;// 查看T2的类型
//}
//void test02()
//{
//	person<string, int> p2("tatina", 20);
//	print2(p2);
//}
//// 3、整个类模板化
//template<class T>
//void print3(T& p) // 直接用T，让编译器推导出类型
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

// 类模板与继承

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
//	son2<string,int> s2; // 显式指定类型
//}
//
//int main()
//{
//	test02();
//	return 0;
//}

// 类模板成员函数类外实现

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
//// 构造函数类外实现
//template<class T1,class T2>
//person<T1, T2>::person(T1 name, T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
//// 成员函数类外实现
//template<class T1,class T2>
//void person<T1,T2>::show() // 虽未用到T1T2，但由于其是类模板中成员函数，因此仍要写入T1/T2
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

// 类模板分文件编写
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

// 类模板与友元

//template<class T1, class T2>
//class person;
//
//template<class T1, class T2>
//void print2(person <T1, T2>p) // 因为有T1/T2，因此需要加上类模板
//{
//	cout << p.m_name << " " << p.m_age << endl;
//}
//
//template<class T1, class T2>
//class person
//{
//public:
//	// 全局函数 类内实现
//	friend void print1(person <T1, T2>p)
//	{
//		cout << p.m_name << " " << p.m_age << endl;
//	}
//	// 全局函数 类外实现
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

void print(my_array<int>&arr)// 打印函数
{
	for (int i = 0; i <arr.get_size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void test01()
{
	my_array<int> arr1(5); // 有参构造
//my_array<int> arr2(arr1);// 拷贝构造
//my_array<int> arr3(100); 
//arr1 = arr3; // 自定义类型=赋值

	for (int i = 0; i < 5; i++)
	{
		arr1.push_back(i);
	}
	print(arr1);
	cout << "capacity" << arr1.get_capacity() << endl;
	cout << "size" << arr1.get_size() << endl;

	my_array<int> arr2(arr1);// 拷贝构造
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
	// 创建数组并初始化
	my_array<person>arr(10);
	person a1("joyce", 21);
	person a2("tatina", 20);
	person a3("knaz", 40);
	person a4("nana", 20);
	person a5("yomi", 1);
	// 尾插到数组中
	arr.push_back(a1);
	arr.push_back(a2);
	arr.push_back(a3);
	arr.push_back(a4);
	arr.push_back(a5);
	// 打印数组中的每个元素的数据与大小容量
	print2(arr);
	cout << "capacity" << arr.get_capacity() << endl;
	cout << "size" << arr.get_size() << endl;
	// -----------------------------------------------------
	// 尾删2个元素
	arr.pop_back();
	arr.pop_back();
	// 打印数组中的每个元素的数据与大小容量
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