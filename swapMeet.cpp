#include <iostream>
using namespace std;

int
print1 (int ar[], int i) {
	for(int j=0; j < i; j++) {
                cout << ar[j];
		cout << " ";
        }
	cout << endl;

	return 0;
} //print1


int
main ()
{
	int i=0, j=0, value, n, temp;
	int ar[35];

	while(cin >> value) {
		ar[i] = value;
		i++;
	}
		
	
	print1 (ar, i);	

	for(n=i-1; j<n; j++, n--) {
		temp = ar[j];
		ar[j] = ar[n];
		ar[n] = temp;
	}

	print1 (ar, i);	

	

	return 0;
} //main

