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
vector<int> sort_direct(double(&arr)[n]) {
	vector<int>k(2);
	for (int i = 0; i < n; i++) {
		int h = 0;
		int mi = 10000;
		for (int j = i; j < n; j++) {
			if (mi > arr[j]) {
				k[0] = k[0]+1;
				mi = arr[j];
				h = j;
			}
		}
		int x = arr[i];
		arr[i] = arr[h];
		arr[h] = x;
		k[1] = k[1]+1;
	}
	return k;
}
vector<int> sort_direct_on(double(&arr)[n]) {
	vector<int>k(2);
	
	for (int i = 1; i < n; i++)
	{
		int v = arr[i];
		int x = i;
		int c = x;
		
		while ((x > 0) && (arr[x - 1] > v))
		{
			k[0] = k[0] + 1;
			k[1] = k[1] + 1;
			arr[x] = arr[x - 1];
			x = x - 1;
		}
		if (c != x) {
			k[0] = k[0] + 1;
		}
		arr[x] = v;
		k[1] = k[1] + 1;
	}
	return k;

}
void copy_array(double(&arr)[n], double(&arr1)[n]) {
	for (int i = 0; i < n; i++)
	{
		arr1[i] = arr[i];

	}

}
vector<int> sort_bubble(double(&arr)[n]) {
	vector<int>k(2);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			k[0] = k[0] + 1;
			if (arr[i] < arr[j]) {
				swap(arr[i], arr[j] );
				k[1] = k[1] + 1;
				
			}
		}
	}
	return k;

}
vector<int> sort_shaker(double(&arr)[n]) {
	vector<int>k(2);

	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0) {
			for (int j = 0; j < n; j++) {
				k[0] = k[0] + 1;
				if (arr[i] < arr[j]) {
					k[1] = k[1] + 1;
					swap(arr[i], arr[j]);
				}
			}
		}
		else {
			for (int j = n-1; j >0; j--) {
				k[0] = k[0] + 1;
				if (arr[i] < arr[j]) {
					k[1] = k[1] + 1;
					swap(arr[i], arr[j]);
				}
			}
		}
		
	}
	return k;

}
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	vector<double>x(n);
	vector<double>y(n);
	double a[n] = {9,8,7,6,5,4};
	double b[n];
	double c[n];
	double d[n];
	cout << "Generate Array " << endl;
	gen_array(a);
	copy_array(a, b);
	copy_array(a, c);
	copy_array(a, d);
	cout << "Сортировка прямым выбором" << endl;
	vector<int>k(2);
	k = sort_direct(a);
	print_array(a);
	
	cout << "Количество сравнений" << " " <<k[0]<< endl;
	cout << "Количество перестановок" << " " << k[1] << endl;
	cout << "Сортировка прямым включением" << endl;
	k = sort_direct_on(b);
	print_array(b);
	cout << "Количество сравнений" << " " << k[0] << endl;
	cout << "Количество перестановок" << " " << k[1] << endl;
	cout << "Сортировка Пузырьком" << endl;
	k = sort_bubble(c);
	print_array(c);
	cout << "Количество сравнений" << " " << k[0] << endl;
	cout << "Количество перестановок" << " " << k[1] << endl;
	cout << "Сортировка Шейкер" << endl;
	k = sort_shaker(d);
	print_array(d);
	cout << "Количество сравнений" << " " << k[0] << endl;
	cout << "Количество перестановок" << " " << k[1] << endl;
	
	//print_array(a);
	




	


	
	
	



  
}


