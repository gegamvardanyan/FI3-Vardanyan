#pragma once
#include <iostream>
using namespace std;


template<class T>
class TVector {
protected:

	T* data;
	int len;
	


public:

	TVector(int n, T v);
	TVector(int n= 1);
	TVector(const TVector<T>& p);
	~TVector();

	int GetLen();

	T& operator [] (int i);
	TVector<T>& operator = (const TVector<T>& p);
	TVector<T> operator + ( TVector<T>& p);
	TVector<T> operator - (TVector<T>& p);
	TVector<T> operator * (TVector<T>& p);
	TVector<T> operator / (TVector<T>& p);

	friend ostream& operator << (ostream&, const TVector<T>&);
	friend istream& operator >> (istream&, const TVector<T>&);
	bool operator == (const TVector<T>& other);


};



template<class T>
inline TVector<T>::TVector(int n, T v)
{
	data = new T[n];
	len = n;
	for (int i = 0; i < n; i++)
		data[i] = v;
}

template<class T>
inline TVector<T>::TVector(int n)
{
	data = new T[n];
	len = n;
	for (int i = 0; i < n; i++)
		data[i] = rand()%100;

}

template<class T>
inline TVector<T>::TVector(const TVector<T>& p)
{
	data = new T[p.len];
	len = p.len;
	for (int i = 0; i < p.len; i++)
		data[i] = p.data[i];
}

template<class T>
inline TVector<T>::~TVector()
{
	if (data != 0)
		delete[] data;
	data = 0;
}

template<class T>
inline int TVector<T>::GetLen()
{
	return len;
}

template<class T>
inline T& TVector<T>::operator[](int i)
{
	return data[i];
}

template<class T>
inline TVector<T>& TVector<T>::operator=(const TVector<T>& p)
{
	data = new T[p.len];
	len = p.len;
	for (int i = 0; i < p.len; i++)
		data[i] = p.data[i];

	return *this;
}

template<class T>
inline TVector<T> TVector<T>::operator+(TVector<T>& p)
{
	TVector<T> res(this->len);

	for (int i = 0; i < len; i++)
		res[i] = (*this)[i] + p[i];

	return res;
}

template<class T>
inline TVector<T> TVector<T>::operator-(TVector<T>& p)
{
	TVector<T> res(this->len);

	for (int i = 0; i < len; i++)
		res[i] = (*this)[i] - p[i];

	return res;
}

template<class T>
inline TVector<T> TVector<T>::operator*(TVector<T>& p)
{
	TVector<T> tmp;
	tmp.len = len;
	tmp.data = new T[tmp.len];
	for (int i = 0; i < tmp.len; i++) {
		tmp.data[i] = data[i] * p[i];
	}

	return tmp;
}

template<class T>
inline TVector<T> TVector<T>::operator/(TVector<T>& p)
{
	TVector<T> tmp;
	tmp.len = len;
	tmp.data = new T[tmp.len];
	for (int i = 0; i < tmp.len; i++) {
		tmp.data[i] = data[i] / p[i];
	}

	return tmp;
}



template<class T>
inline bool TVector<T>::operator==(const TVector<T>& other)
{
	if (this->len != other.len)
	{
		cout << "vectors are not same" << endl;
		return false;
	}

	for (int i = 0; i < this->len; i++)
	{
		if (this->data[i] != other.data[i])
		{
			cout << "vectors are not same" << endl;
			return false;
		}
	}
	cout << "vectors are same" << endl;
	return true;
}


template<class T>
ostream& operator<<(ostream& o, TVector<T> & p) {
	for (int i = 0; i < p.GetLen(); i++)
		
		o << p[i] <<"\t";
	
	cout << "\n";
	return o;

}





