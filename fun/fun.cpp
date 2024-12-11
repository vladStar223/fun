// fun.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <random>

using namespace std;
const int p = 4;//тестовые данные из-за условий задачи

void vector_gg(double(&arr)[p][p],int k,vector<int>&c){// в задача не было указан тип вектора с.поэтому был выбран int
	for (int i = 0; i < k; i++) {
		double s = 0;
		for (int j = 1; j < p; j++) {
			s += arr[i][j];
		}
		c[i] = s;
	}
}
void print_array(double(&arr)[p][p]) {
	for (int i = 0; i < p; i++) {
		for (int j = 0; j < p; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "" << endl;
	}
	cout << "" << endl;
}
void gen_array(double(&arr)[p][p]) {
	for (int i = 0; i < p; i++) {
		for (int j = 0; j < p; j++) {
			double x = (double)rand();
			arr[i][j] = x;
		}
	}
	print_array(arr);
}

void print_vector(vector<int>& v) {
	for (int i = 0; i < 10; i++) {
		cout << v[i] << " ";
	}
	cout << "" << endl;
}//print random vector

int main()
{
	srand(time(NULL));
	double a[p][p];
	gen_array(a);
	vector<int>c(10);
	vector_gg(a, 2, c);
	print_vector(c);








	


	
	
	



  
}


