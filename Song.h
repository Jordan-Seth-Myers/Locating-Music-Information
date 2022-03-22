#if!defined SONG_H
#define SONG_H

#include <string>
using namespace std; 

struct Song 
{
	string lengthOfSong , titleOfSong; 
	int numSongs;
	
};

Song* createSong (string title, string length);
void displaySong (Song* s);
void destroySong (Song* s);

#endif 