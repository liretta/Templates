#include "templates_includ.hpp"
#define SIZE 20


using namespace std;
//template <typename T>

int main()
{
	int nSize = SIZE;

	int *pArInt = new int[nSize];
	char *pArChar = new char[nSize];
	double *pArDouble = new double[nSize];

	Init(pArInt, nSize);
	Init(pArChar, nSize);
	Init(pArDouble, nSize);

	cout << "Show int array:" << endl;
	Show(pArInt, nSize);
	cout << "Show double array: " << endl;
	Show(pArDouble, nSize);
	cout << "Show char array: " << endl;
	Show(pArChar, nSize);
	
	//bool(*pFn)(T,T) = Asc;
	Sort(pArInt, nSize, Asc);
	Sort(pArChar, nSize, Asc);
	Sort(pArDouble, nSize, Asc);
	
	cout << "Show sorted int array:" << endl;
	Show(pArInt, nSize);
	cout << "Show sorted double array: " << endl;
	Show(pArDouble, nSize);
	cout << "Show sorted char array: " << endl;
	Show(pArChar, nSize);


	delete[]pArDouble;
	delete[]pArChar;
	delete[] pArInt;
	
	Mem();

	system("pause");

	return 0;
}