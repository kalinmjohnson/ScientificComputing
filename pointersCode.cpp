#include <iostream>
using namespace std;

int
move (char *cptr, int key) {
	if (*cptr + key > 122) {
		*cptr = 96 + (*cptr + key) % (122);
	} else if (*cptr + key < 97) {
		*cptr = (123 + (key + (*cptr - 97))); 
	} else {
                *cptr += key;
        }
}// 

int
main () 
{
	int key, i;
	double temp, value;
	char mes [80];
	
	cout << "Key: ";
	cin >> key;
	cin >> mes;	

	char *cptr = mes;

	while (*cptr) {
		move (cptr, key);
		cout << *cptr;
		cptr++;
	}
	cout << endl;

	return 0;
} //main
