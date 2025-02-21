// fun.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <random>
#include<math.h>
#include<string>
using namespace std;


string pro(string x) {
	int k = 1;
	string y;
	for (int i = 0; i < x.length(); i++) {
		if (x[i] == x[i + 1]) {
			k = k + 1;
		}
		else {
			if (k >= 5) {
				y = "X(" + to_string(k) + ")";
				x.replace(i - k + 1, k, y);
				k = 0;
				i = 0;
			}
		}
		
		
	}
	return x;
}
void anwer(string x) {
	string v = pro(x);
}
int main() {
	string x;
	getline(cin,x);
	cout << pro(x) << endl;

}


