/*
I MADE THIS PROGRAM AS I WAS LEARNING C++ AND WANTED TO IMPLEMENT THE ONE AND ONLY
MEME OF ADDING 'IN MY ASS' TO THE LAST SONG YOU LISTENED TO SO ENJOY KINDLY
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string lastSong;
	cout << "Enter the name of the last song you listened to: ";
	getline(cin, lastSong);
	cout << lastSong.append(" IN MY ASS");
  	return 0;
}