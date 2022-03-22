#if!define CDs_H
#define CDs_H

CDs* createCDs (const char* filename);
void displayCDs (CDs* c);
void destroyCDs (CDs* c);
CDs* findCDs (CDs* cds, string artist);
CDs* sortCDs (CDs* cds);


#endif 