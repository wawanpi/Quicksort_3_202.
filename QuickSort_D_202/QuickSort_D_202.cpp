#include <iostream>
using namespace std;

//array of integres to hold valuse
int arr[20];
int cmp_count = 0; //number of comparaison
int mov_count = 0; //number of comparaison
int n;

void input() {
	while (true){
		cout << "Masukan panjang element array :";
		cin >> n;
			if (n <= 20)
				break;
			else
			
				cout << "\n maksimum panjang arrary adalah 20" << endl;
		}
		cout << "\n--------------------------" << endl;
		cout << "\nEnter array element" << endl;
		cout << "\n--------------------------" << endl;

	}
}
