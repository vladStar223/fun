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

static long long factorial_search(int a) {
	long long  n = a;
	if (n<=2) {
			return n;
	}
	return n * factorial_search(n - 1);
}
static long  long poow(long long x,long long n) {
	if (n < 0) {
		return 1;
	}
	return x * poow(x, n - 1);
}
static long double decide(long double s, long double eps,int n, double x) {
	if (abs(s)< eps) {
		return s;
	}
	return decide(s + ((static_cast<long double>(pow(x, n))) / (factorial_search(n))), eps, n + 1, x);
}
int main()
{
	srand(time(NULL));
	long double eps = 1;
	double x;
	do
	{ 
		cout << "Input eps" << endl;
		cin >> eps;
		cout << "input x" << endl;
		cin >> x;
		if (eps > 0 && eps < 1) {
			break;
		}

	} while (true);
	cout << decide(1, eps, 1, x);

	

	



	


	
	
	



  
}


