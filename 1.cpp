#include <iostream>
using namespace std;
int main(){
	int a, b;
	setlocale(LC_ALL,"rus");
	cout <<"¬ведите числа A и B ";
	cin >> a >> b;
	if (a > 2 and b <= 3){
		cout << true;
	}
	else{
		cout << false;
	}
}
