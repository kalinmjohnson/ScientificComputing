#include <iostream>
using namespace std;

char
encrypt (char *cptr, char *kpt, int neg) {
	int key  = *kpt;
	key -= 96;
	key = key*neg;
	if (*cptr + key > 122) {
                *cptr = 96 + (*cptr + key) % (122);
        } else if (*cptr + key < 97) {
                *cptr = (123 + ((key + (*cptr - 97))));
        } else {
                *cptr += key;
        }
}//encrypt

int
main () 
{
	int i;
	double temp, value;
	char neg, key[81], offset, mes [80];
	

	cout << "Enter message, with NO blanks: " << endl;
	cin >> mes;	
	cout << "Key: ";
        cin >> key;

	char *cptr = mes;
	char *kpt = key;
	
	if (*kpt == '-') {
		cout << "Decrypted: " << endl;
		neg = -1;
		kpt++;
	} else {
		cout << "Encrypted: " << endl;
		neg = 1;
	}

	
	while (*cptr) {
		if (*kpt == 0) {
                        kpt = key;
			if (*kpt == '-') {
				kpt++;
			}
                }
		encrypt(cptr, kpt, neg);
		cout << *cptr;
		cptr++;
                kpt++;
	}
	cout << endl;

	return 0;
} //main
