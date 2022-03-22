#include <iostream>
//include <fsstream>
#include "Song.h"
#include <string>

using namespace std; 


Song* createSong (string title, string length)
{
	Song* s = new Song;
	s-> titleOfSong = title;
	s-> lengthOfSong = length;
	
	return s;

}


void displaySong (Song* s)
{
	cout << s->titleOfSong << endl; 
	
	cout <<  s->lengthOfSong << endl;


}


void destroySong (Song* s)
{
	
	delete s; 

}


int main ()
{
	Song * Song1 = createSong("song1","5");
	
	displaySong(Song1);
	destroySong(Song1);

}