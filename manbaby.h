#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>


using namespace std;

char printarr(char l[]){
	cout << endl;

	for(int i = 0; i<32; i++){

		cout << l[i];

	}
	cout << endl << endl;
	
}

void clearmem(char l[][32]){

for(int x = 0; x<32; x++){
	for(int i = 0; i<32; i++){

		l[x][i] = '0';

	}
}

}

char cleararr(char l[]){

	for(int i = 0; i<32; i++){

		l[i] = '0';

	}

}

void printmem(char l[][32]){

	for(int x = 0; x<32; x++){
	for(int i = 0; i<32; i++){

		cout << l[x][i];

	}
	cout << endl;
}

}

char poke(char l[], char x[][32]){

	int line;

	cout << "Enter the line which you would like to poke data into, from 1 to 32: ";
	cin >> line;
	cin.ignore();
	cout << endl << "Enter a 32 bit string: ";
	cin.getline(l, 32);

	//for(int i = 0; i<32;i++){
		for(int p = 0; p<32; p++){
			x[line-1][p] = l[p];
		}
	//}



}



/*I know c++ parameters are pointers and I'm having this problem where I can't change the value of a variable through parameters.

It'll be easier to understand if I link it

https://gist.github.com/maccamcmacca/cb3c8a6ea0c0da0b6eef4a2d2356d960

This is what the compiler barfs at me

https://gist.github.com/maccamcmacca/6fe1d462c60f163011b4bec00540ed3f*/
