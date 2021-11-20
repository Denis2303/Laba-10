#include <iostream>
using namespace std;
int main(){
	int a;
	setlocale(LC_ALL,"rus");
	cout <<"Введите трехзначное число ";
	cin >> a;
	int a1, a2, a3;
	a1 = a%10;
	a2 = a/10 % 10;
	a3 = a / 100;
	if ( (a1 < a2 && a2 < a3) || (a1 > a2 && a2 > a3)){
		cout << 1;
	}
	else{
		cout << 0;
	}
}
