#include <stdio.h>
#include <assert.h>
#define MAX_COLORPAIR_NAME_CHARS 16
#define MAX_COLORPAIR 26
#define TRUE 1

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

extern int numberOfMajorColors; 
extern int numberOfMinorColors;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

void ColorPairString(const ColorPair* colorPair, char* buffer) ;
ColorPair GetColorPair(int pairNumber);
int GetPairNumber(const ColorPair* colorPair) ;
int GetReferenceManual();

void testGetColorPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testGetPairNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
void testGetReferenceManual();
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber) ;
void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
