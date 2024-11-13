// fun.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <random>

using namespace std;
const int n = 6;
void print_array(double(&arr)[n][n]);
void print_vector(vector<double>& v);
double sckalar(vector<double> &v, vector<double> &v1) {
	double s = 1;
	for (int i = 0; i < n; i++) {
		s = v[i] * v1[i] * s;
	}
	return s;
}
vector<double> array_vector(double(&arr)[n][n], vector<double>&v) {
	vector<double> s(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			s[i] = arr[i][j] * v[j];
		}
	}
	return s;
}
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
	gen_vector(x); gen_vector(y);//generate vectors
	cout << "" << endl;
	gen_array(a); gen_array(b); gen_array(c);//genetate arrays
	vector<double> s1 = array_vector(a, x);
	vector<double> s2 = array_vector(b, y);
	vector<double> s3 = array_vector(c, x);
	cout << sckalar(s1, s2) + (sckalar(s3, y) / sckalar(x, s2)) << endl;




	


	
	
	



  
}


