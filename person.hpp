#pragma once
#include<string>
#include<iostream>

template<class T1, class T2>
class person
{
public:
	person(T1 name, T2 age);

	void show();

	T1 m_name;
	T2 m_age;
};

// 构造函数
template<class T1, class T2>
person<T1, T2>::person(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}
// 成员函数
template<class T1, class T2>
void person<T1, T2>::show()
{
	cout << this->m_name << " " << this->m_age << endl;
}