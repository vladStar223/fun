﻿// fun.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <random>

using namespace std;
double s_triangle(vector<double>& a, vector<double>& b, vector<double>& c){

	return 0.5*(a[0]*(b[1]-c[1])+b[0]*(c[1]-a[1])+c[0]*(a[1]-b[1]));
}
vector<double> half_cor(double(&a)[2], double(&b)[2]) {
	vector<double>s(2);
	s[0] = (a[0] + b[0]) / 2;
	s[0] = (a[1] + b[1]) / 2;
	return s;

}

int main()
{
	srand(time(NULL));
	vector<double>a(2);
	vector<double> b(2);
	vector<double>c(2);
	string v = "ABC";
	for (int i = 0; i < 3; i++) {
		cout << "Input x y" << v[i] << endl;
		if (i == 0) {
			cin >> a[0]>> a[1];

		}
		else if (i == 1) {
			cin >> b[0] >> b[1];
		}
		else if (i == 2) {
			cin >> c[0] >> c[1];
		}

	}
	double s_abs = s_triangle(a, b, c);
	cout << "S ABS = " << " " << s_abs << endl;
	vector<double>l = half_cor(a, b);
	//double s_lmn = s_triangle();
	//cout << "S LMN = " << " " << s_lmn << endl;

	




	


	
	
	



  
}


