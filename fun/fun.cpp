// fun.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <random>

using namespace std;
const int p = 4;//тестовые данные из-за условий задачи

void vector_gg(double(&arr)[p][p],int k,vector<int>&c){// в задача не было указан тип вектора с.поэтому был выбран int
	for (int i = 0; i <= k; i++) {
		double s = 0;
		for (int j = 1; j < p; j++) {
			s += arr[i][j];
		}
		c[i] = s;
	}
}

int main()
{
	double a[p][p];
	vector<int>c(10);








	


	
	
	



  
}


