#include<iostream>
using namespace std;
#include"person.h"

// ���캯��
template<class T1, class T2>
person<T1, T2>::person(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}
// ��Ա����
template<class T1, class T2>
void person<T1, T2>::show()
{
	cout << this->m_name << " " << this->m_age << endl;
}