#include <iostream>
#include <string>
using namespace std;
int main(){
	string c;
	setlocale(LC_ALL, "rus");
	cout <<"¬ведите четырЄх значное число ";
	getline(cin, c);
	string a = "";
	for (int i = 3; i > -1; i--){
		a = a+c[i];
	}
	if (a == c){
		cout << 1;
	}
	else{
		cout << 0;
	}
}
