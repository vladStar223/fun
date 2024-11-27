// fun.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <random>

using namespace std;
const int n = 6;
void print_array(double(&arr)[n][n]);
void print_vector(vector<double>& v);
void gen_array(double(&arr)[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = rand();
		}
	}
	print_array(arr);
}
void print_array(double(&arr)[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "" << endl;
	}
	cout << "" << endl;
}
void gen_vector(vector<double>& v) {
	for (int i = 0; i < n; i++) {
		v[i] = rand();
	}
	print_vector(v);
}//generate random vector len = n
void print_vector(vector<double>& v) {
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	cout <<""<<endl;
}//print random vector
int main()
{
	srand(time(NULL));
	vector<double>x(n);
	vector<double>y(n);
	double a[n][n];
	double b[n][n];
	double c[n][n];
	




	


	
	
	



  
}


