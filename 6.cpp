#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	vector <unsigned int> a;
	setlocale(LC_ALL, "rus");
	cout << "Введите стороны треугольника ";
	for (int i = 0; i < 3; i++){
		int b;
		cin >> b;
		a.push_back(b);
	}
	sort(a.begin(),a.end());
	if (pow(a[0],2) + pow(a[1], 2) == pow(a[2], 2)){
		cout << "Треугольник является прямоугольным";
	}
	else{
		cout << "Треугольник не является прямоугольным";
	}
}
