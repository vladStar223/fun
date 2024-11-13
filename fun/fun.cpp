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

int factorial_search(int a) {
	int n = a;
	int i = 1;
	if (n < 2) {
			return i;
	}
	else {
			return n * factorial_search(n - 1);
	}
}
long  long poow(long long x,long long n) {
	return poow()
}
int main()
{
	srand(time(NULL));
	int eps = 1;
	cout << poow(3,4) << endl;

	



	


	
	
	



  
}


