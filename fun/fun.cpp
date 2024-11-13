// fun.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <random>

using namespace std;
double s_triangle(double(&a)[2], double(&b)[2], double(&c)[2]){

	return 0.5*(a[0]*(b[1]-c[1])+b[0]*(c[1]-a[1])+c[0]*(a[1]-b[1]));
}
vector<double>(2) half_cor(double(&a)[2]) {
	vector<double>s(2);

}

int main()
{
	srand(time(NULL));
	double a[2];
	double b[2];
	double c[2];
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




	


	
	
	



  
}


