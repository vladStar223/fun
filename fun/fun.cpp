// fun.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <random>
#include<math.h>
#include<vector>
using namespace std;


double f(int w) {
	return sin(w);
}
void gen_vector(vector<int>& v,int n) {
	for (int i = 0; i < n; i++) {
		v[i] = rand()/100;
	}
}//generate random vector len = n
void per(double(&f)(int w)) {
	int n = 100;
	do
	{
		cout << " input n" << endl;
		cin >> n;
	} while (n >> 100 && n < 0);
	vector<int>a(n);
	gen_vector(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	double s = 0;
	for (int i = 0; i < n; i++) {
		s = s + (f(a[i]) * f(a[i]));
	}
	cout << "S =" << s<< endl;
	
	
}
int main()
{
	srand(time(NULL));
	per(f);
	




	





	


	
	
	



  
}


