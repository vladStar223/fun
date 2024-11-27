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
		k[0] = k[0] + 1;
		while ((x > 0) && (arr[x - 1] > v))
		{
			k[1] = k[1] + 1;
			arr[x] = arr[x - 1];
			x = x - 1;
		}
		arr[x] = v;
	}
	return k;

}
void copy_array(double(&arr)[n], double(&arr1)[n]) {
	for (int i = 0; i < n; i++)
	{
		arr1[i] = arr[i];

	}

}
int main()
{
	srand(time(NULL));
	vector<double>x(n);
	vector<double>y(n);
	double a[n] = {9,8,7,6,5,4};
	double b[n];
	double c[n];
	gen_array(a);
	cout << "Generate Array " << endl;
	print_array(a);
	cout << "Array a " << endl;
	copy_array(a, b);
	copy_array(a, c);
	sort_direct(a);
	print_array(a);
	sort_direct_on(b);
	print_array(b);
	//print_array(a);
	




	


	
	
	



  
}


