#pragma once
#include<iostream>
using namespace std;
#include<string>

template<class T>
class my_array
{
public:

	// 防止浅拷贝问题的拷贝构造函数与operator=
	my_array(int capacity)// 有参构造函数
	{
		this->m_capacity = capacity;
		this->m_size = 0;
		p_array = new T[this->m_capacity]; // 开辟堆区空间以存储p_array
		//cout << "有参构造函数" << endl;
	}

	my_array(const my_array &p)// 拷贝构造函数
	{
		this->m_capacity = p.m_capacity; 
		this->m_size = p.m_size;
		//this->p_array = p.p_array;// 带来浅拷贝问题
		this->p_array = new T(p.m_capacity);// 根据capacity的大小重新开辟空间以赋值
		// 将p中的数据也拷贝过来
		for (int i = 0; i < this->m_size; i++)
		{
			this->p_array[i] = p.p_array[i];
		}
		//cout << "拷贝构造函数" << endl;
	}

	my_array& operator=(const my_array& p) // 赋值运算符的重载,返回引用才是返回自身
	{
		if (this->p_array != NULL) // 判断是否有属性在堆区，有则释放
		{
			delete[] this->p_array;
			//this->p_array = NULL;
			this->m_capacity = 0;
			this->m_size = 0;
		}
		// 深拷贝
		this->m_capacity = p.m_capacity;
		this->m_size = p.m_size;
		this->p_array = new T[this->m_capacity]; // 重新开辟空间
		for (int i = 0; i < this->m_size; i++) // 数据拷贝
		{
			this->p_array[i] = p[i];
		}
		cout << "operator=" << endl;
		return *this;
	}

	void push_back(const T& val)// 尾插
	{
		// 先判断数组是否满
		if (this->m_size == this->m_capacity)
		{
			return;
	/*		int new_capacity = m_capacity + 1;
			this->p_array = new T(new_capacity);*/
		}
		this->p_array[this->m_size ] = val; // 尾插数据
		this->m_size++;	// 当前大小+1
	}

	void pop_back()  // 尾删
	{
		if (this->m_size == 0)
		{
			cout << "数组为空！" << endl;
			return;
		}
		this->m_size--;
	}

	// 此时的数组为my_array类型，因此不能直接[]用下标访问，我们重载[]
	T& operator[](int index)
	{
		return this->p_array[index];
	}

	int get_capacity() // 获取容量
	{
		return this->m_capacity;
	}

	int get_size()	   // 获取大小
	{
		return this->m_size;
	}

	~my_array()// 析构函数
	{
		if (this->p_array != NULL)
		{
			delete[] this->p_array;
			this->p_array = NULL;
			this->m_capacity = 0;
			this->m_size = 0;
		}
		//cout << "析构函数" << endl;
	}
private:
	T* p_array;	   //	存储开辟的数组
	int m_capacity;//	数组的容量
	int m_size;	   //	数组当前大小
};