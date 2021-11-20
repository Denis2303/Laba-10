#include <iostream>
#include <string>
using namespace std;
int main(){
	string c;
	setlocale(LC_ALL,"rus");
	cout << "¬ведите число ";
	getline(cin, c);
	string d = "02468";
	if (c.size() == 2 && d.find(c[1]) != -1){
		cout << 1;	
	}
	else{
		cout << 0;
	}
}
