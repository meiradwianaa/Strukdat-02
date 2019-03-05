/*
Nama Program	: exercise-02
Nama			: Meira Dwiana Anjani
NPM				: 140810180015
Tanggal Buat 	: 5 Maret 2018
*/

#include<iostream>
#include<string.h>

using namespace std;

struct Theater {
	int room;
	char seat[3];
	char movieTitle[30];
};

int main (){
	Theater theater;
	theater.room = 7;
    strcpy (theater.seat, "J9");
    strcpy (theater.movieTitle, "Adit & Jarwo");

    cout << theater.room << endl;
    cout << theater.seat << endl;
    cout << theater.movieTitle << endl;
}
	

