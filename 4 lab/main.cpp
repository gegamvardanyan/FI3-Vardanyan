
#include "Vector.h"
#include <iostream>
#include "Matrix.h"


using namespace std;


int main()
{
	clock_t start = clock();
	cout << "vectors:" << endl;
	TVector<int> A(5);
	TVector<int> B(5);
	TVector<int> C;
	TVector<int> F(5, 10);
	TVector<int> G;
	TVector<int> H;

	
	C = A * B;
	

	G = F;
	H = F / G;
	
	cout << "vector A = " << A << "vector B = " << B << endl;
	cout << "vector A * vector B = "<<"\n" << C << endl;
	cout << "vector F = " << F << "vector G = " << G << endl;
	

	bool equal = F == G;
	cout << "vector F / vector G = " << "\n" << H << endl;

	cout << "_________________________________________________________" << "\n" << endl;

	TVector<double> D(5, 2.5);
	TVector<double> E(5, 1.3);
	TVector<double> D_E_sum;
	TVector<double> D_E_sub;
	
	D_E_sum = D + E;
	D_E_sub = D - E;
	
	cout << "vector D = " << D << "vector E =" << E << endl;
	cout << "vector D + vector E = " << "\n" << D_E_sum << endl;
	cout << "vector D - vector E = " << "\n" << D_E_sub << endl;

	cout << "_________________________________________________________" << "\n" << endl;

	cout << "matrices: " << endl;

	TMatrix<int> Q(4,5);
    TMatrix<int> Q2(4, 5);
	TMatrix<int> QQ2(4, 5);
	TMatrix<int> Q3(4, 5);
	QQ2 = Q + Q2;
	Q3 = Q2 - Q;

	cout << "matrix Q = " << endl;
	cout << "\t" << Q << endl;
	cout << "matrix Q2 = " << endl;
	cout << "\t" << Q2 << endl;
	cout << "matrix Q + matrix Q2 = " << endl;
	cout << "\t" << QQ2 << endl;
	cout << "matrix Q2 - matrix Q = " << endl;
	cout << "\t" << Q3 << endl;

	TMatrix<double> P(3, 3);
	TMatrix<double> P2(3, 3);
	TMatrix<double> P3;
	TMatrix<double> P4;

	P3 = P / P2;

	P4 = P * P2;

	cout << "matrix P = " << endl;
	cout << "\t" << P << endl;
	cout << "matrix P2 = " << endl;
	cout << "\t" << P2 << endl;
	cout << "matrix P / P2 = " << endl;
	cout << "\t" << P3 << endl;

	cout << "matrix P * P2 = " << endl;
	cout << "\t" << P4 << endl;
	//clock_t end = clock();
	
}