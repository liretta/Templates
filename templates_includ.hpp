#include <iostream>
#include <iomanip>
#include <time.h>


template <typename type>
void Init(type &pAr, int nSize)
{
	srand((unsigned int)time);
	for (int i = 0; i < nSize; ++i)
		pAr[i] = rand() % 26 + 'A';
	 
	std::cout << "Here was initialisation from templates" << std::endl;
}

void Init(double *pAr, int nSize) //only for double arrays
{
	srand((unsigned int)time);
	for (int i = 0; i < nSize; ++i)
		pAr[i] = (double)(rand() % 26) + 0.01;
	std::cout << "Here was initialisation double array" << std::endl;
}

template <typename type>
void Sort(type *pAr, int nSize, bool(*pFn)(type, type))
{
	type nBuff;
	int iBuffInd;
	for (int i = 0; i < nSize; ++i)
	{
		nBuff = pAr[i];
		iBuffInd = i;
		for (int j = i+1; j<nSize; ++j)
			if (pFn(pAr[j], nBuff)) //if result by comparison is true (exmp. [j] <nBuff than save min number and value
			{
				nBuff = pAr[j];
				iBuffInd = j;
			}
		pAr[iBuffInd] = pAr[i];
		pAr[i] = nBuff;
	}
	std::cout << "Here was cort by " << pFn << std::endl;
}

template <typename T>
bool Asc(T a, T b)
{
	return a < b;
}

template <typename T>
bool Desc(T a, T b)
{
	return a > b;
}

template <typename T>
void Show(T const *pAr, int nSize)
{
	std::cout << "\nThere is the array from templates function" << std::endl;
	for (int i = 0; i < nSize; ++i)
		std::cout << setw(6) << pAr[i];
	std::cout << endl;
	
}

void Mem()
{
	if (_CrtDumpMemoryLeaks())
		std::cout << "Worning!! Memory leaks!" << std::endl;
	else
		std::cout << "Memory ok! :-)" << std::endl;
}