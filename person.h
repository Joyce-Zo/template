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
