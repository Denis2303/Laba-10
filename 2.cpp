#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	setlocale(LC_ALL,"rus");
	cout << "������� ����� A B C ";
	cin >> a >> b >> c;
	if (a < b && b < c){
		cout << true;
	}
	else{
		cout << false;
	}
}
