#pragma once
#include<iostream>
using namespace std;
#include<string>

template<class T>
class my_array
{
public:

	// ��ֹǳ��������Ŀ������캯����operator=
	my_array(int capacity)// �вι��캯��
	{
		this->m_capacity = capacity;
		this->m_size = 0;
		p_array = new T[this->m_capacity]; // ���ٶ����ռ��Դ洢p_array
		//cout << "�вι��캯��" << endl;
	}

	my_array(const my_array &p)// �������캯��
	{
		this->m_capacity = p.m_capacity; 
		this->m_size = p.m_size;
		//this->p_array = p.p_array;// ����ǳ��������
		this->p_array = new T(p.m_capacity);// ����capacity�Ĵ�С���¿��ٿռ��Ը�ֵ
		// ��p�е�����Ҳ��������
		for (int i = 0; i < this->m_size; i++)
		{
			this->p_array[i] = p.p_array[i];
		}
		//cout << "�������캯��" << endl;
	}

	my_array& operator=(const my_array& p) // ��ֵ�����������,�������ò��Ƿ�������
	{
		if (this->p_array != NULL) // �ж��Ƿ��������ڶ����������ͷ�
		{
			delete[] this->p_array;
			//this->p_array = NULL;
			this->m_capacity = 0;
			this->m_size = 0;
		}
		// ���
		this->m_capacity = p.m_capacity;
		this->m_size = p.m_size;
		this->p_array = new T[this->m_capacity]; // ���¿��ٿռ�
		for (int i = 0; i < this->m_size; i++) // ���ݿ���
		{
			this->p_array[i] = p[i];
		}
		cout << "operator=" << endl;
		return *this;
	}

	void push_back(const T& val)// β��
	{
		// ���ж������Ƿ���
		if (this->m_size == this->m_capacity)
		{
			return;
	/*		int new_capacity = m_capacity + 1;
			this->p_array = new T(new_capacity);*/
		}
		this->p_array[this->m_size ] = val; // β������
		this->m_size++;	// ��ǰ��С+1
	}

	void pop_back()  // βɾ
	{
		if (this->m_size == 0)
		{
			cout << "����Ϊ�գ�" << endl;
			return;
		}
		this->m_size--;
	}

	// ��ʱ������Ϊmy_array���ͣ���˲���ֱ��[]���±���ʣ���������[]
	T& operator[](int index)
	{
		return this->p_array[index];
	}

	int get_capacity() // ��ȡ����
	{
		return this->m_capacity;
	}

	int get_size()	   // ��ȡ��С
	{
		return this->m_size;
	}

	~my_array()// ��������
	{
		if (this->p_array != NULL)
		{
			delete[] this->p_array;
			this->p_array = NULL;
			this->m_capacity = 0;
			this->m_size = 0;
		}
		//cout << "��������" << endl;
	}
private:
	T* p_array;	   //	�洢���ٵ�����
	int m_capacity;//	���������
	int m_size;	   //	���鵱ǰ��С
};