// fun.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <random>

using namespace std;
const int n = 6;
void print_array(double(&arr)[n]);
void gen_array(double(&arr)[n]) {
	for (int i = 0; i < n; i++) {
		int start = 0;
		int end = 100;
		arr[i] = rand() % (end - start + 1) + start;
	}
	print_array(arr);
}
void print_array(double(&arr)[n]) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "" << endl;
}
void sort_direct(double(&arr)[n]) {
	
	for (int i = 0; i < n; i++) {
		int h = 0;
		int mi = 10000;
		for (int j = i; j < n; j++) {
			if (mi>arr[j]) {
				mi = arr[j];
				h = j;
			}
		}
		int x = arr[i];
		arr[i] = arr[h];
		arr[h] = x;
	}
}
int main()
{
	srand(time(NULL));
	vector<double>x(n);
	vector<double>y(n);
	double a[n];
	double b[n];
	double c[n]{};
	gen_array(a);
	sort_direct(a);
	print_array(a);
	




	


	
	
	



  
}


