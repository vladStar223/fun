// fun.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <random>

using namespace std;
const int n = 4;
void print_array(double(&arr)[n][n]);
void print_vector(vector<double>& v);
void gen_array(double(&arr)[n][n]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			double x= (double)rand() / 588;
			if (int(x) % 2 == 0) {
				arr[i][j] = x ;
			}
			else {
				arr[i][j] = x*-1;
			}
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
double search_normal(double(&arr)[n][n]) {
	double m = abs(arr[0][0]);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (abs(arr[i][j]) > m) {
				m = abs(arr[i][j]);
			}
		}
	}
	return m;
}
int main()
{
	srand(time(NULL));
	double a[n][n];
	double b[n][n];
	double c[n][n];
	double d[n][n];
	gen_array(a); gen_array(b); gen_array(c); gen_array(d);
	cout << "matrix genetate" << endl;
	double x1 = search_normal(a); double x2 = search_normal(b); double x3 = search_normal(c); double x4 = search_normal(d);
	double m = max({ x1, x2, x3, x4 });
	cout << "Max is" << " " << m << endl;
	if (x1 == m) {
		print_array(a);
	}
	else if (x2 == m) {
		print_array(b);
	}
	else if (x3 == m) {
		print_array(c);
	}
	else if (x4 == m) {
		print_array(d);
	}
	else {
		cout << "not array" << endl;
	}







	


	
	
	



  
}


