// fun.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <random>
#include<math.h>
using namespace std;


int kor(int k) {
	int a= pow(2, k);
	int b = pow(2, k + 1);
	int k2 = 0;
	for (int i = a + 1; i < b; i++) {
		if (i % 3 == 0) {
			k2 = k2 + 1;
		}
	}
	return k;
}

int main()
{
	
	int k = 0;
	cout << "Input k" << endl;
	do
	{
		cin >> k;
	} while (k<=0 && k>=6);
	cout << "Fun" << endl;
	cout << kor(k) << endl;






	


	
	
	



  
}


