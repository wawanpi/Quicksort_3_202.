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


	for (int i = 0; i < n; i++) {
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}


//swap the element at index x with the element at index y
void swap(int x, int y) {
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_short(int low, int high) {
	int pivot, i, j;
	if (low > high)// Langkah 1
		return;
	// partition the list into two parts
	// one contaning element less that or equal to pivot
	// outher contaning element greather than pivot
	i = low + 1; //Langkah 3
	j = high;	 //Langkah 4
	pivot = arr[low]; //Langkah 2

