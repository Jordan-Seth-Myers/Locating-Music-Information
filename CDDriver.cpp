#include <iostream> 
#include <fstream>
#include "Song.h"

using namespace std;

/* 
		control all interaction with the user and call the functions in CDs.cpp to return the desired results. 
	It should not call any functions in CD.cpp or Song.cpp directly
*/

int main()
{
	
	cout << "Welcome to the Cds" << endl;
	cout << "Enter your  selection below : " << endl;
	
Song* createSong (string title, string length);
void displaySong (Song* s);
void destroySong (Song* s);

	return 0;

}