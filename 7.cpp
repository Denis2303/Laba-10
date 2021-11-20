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
	if ( a[2] < a[1] + a[0]){
		cout << "Такой треугольник существует";
	}
	else{
		cout << "Такого треугольника не существует";
	}
}
