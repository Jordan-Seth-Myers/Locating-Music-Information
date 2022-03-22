#if!define CD_H
#define CD_H

CD* createCD (string artist, string title, int year, int rate, int numSongs);
void displayCD (CD* c);
void destroySong (CD* c);
void addSong (CD* cd, string title, string length);

#endif 