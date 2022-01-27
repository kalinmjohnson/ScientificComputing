#include <iostream>
#include <stdlib.h>
using namespace std;

int**
board(int r, int c) {
	int i;
	int **arr = (int**)malloc(r * sizeof(int*));
        for (i=0; i<r; i++){
            arr[i] = (int*)malloc(c * sizeof(int));
        }
	return arr; 
}//board

void
fill(int r, int c, int **arr) {
	int j = 1;
	for(int i = 0; i < r; i++) {
		for(int h = 0; h < c; h++) {
			arr[i][h] = rand() % (r*c);
		}
	}
			
}//fill

void
print(int **arr, int r, int c) {
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << arr[i][j] << "	";
		}
		cout << endl;
	}
}//print

void
transpose(int **ra, int **tr, int r, int c) {
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			tr[j][i] = ra[i][j];
		}
	}
}//transpose

int
main ()
{
	int r, c;

	cout << "How many rows? ";
	cin >> r;
	cout << "How many columns? ";
	cin >> c;

	int ** ra = board (r, c);	
	fill(r, c, ra);

	cout << "Matrix is: " << endl;
	print (ra, r, c);

	int ** tr = board (c, r);
	transpose(ra, tr, r, c);

	cout << "Transpose is: " << endl;
	print (tr, c, r);

 
	return 0;
}//main
