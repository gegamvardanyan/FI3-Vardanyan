#pragma once

#include "Vector.h"


template <class A>
class TMatrix : public TVector<TVector<A>>
{
protected:

	int len2;
public:
	TMatrix(int n = 1);
	TMatrix(int n1, int n2);
	~TMatrix();
	using TVector::operator=;
	
};

template<class A>
inline TMatrix<A>::TMatrix(int n) : TVector<TVector<A>>::TVector(n)
{
	len2 = n;
	for (int i = 0; i < n; i++)
	{
		this->data[i] = n;
		for (int j = 0; j < n; j++)
		{
			data[i][j] = 0;
		}
	}
}

template<class A>
inline TMatrix<A>::TMatrix(int n1, int n2) : TVector<TVector<A>>::TVector(n1)
{
	len2 = n2;
	
	for (int i = 0; i < n1; i++)

	{
		this->data[i] = n2;
		for (int j = 0; j < n2; j++)
		{		
			data[i][j] = rand()%100;	
		}
		
	}
}

template<class A>
inline TMatrix<A>::~TMatrix()
{
	for (int i = 0; i < len; i++)
		data = 0;
	delete[] data;
}










//void print();
