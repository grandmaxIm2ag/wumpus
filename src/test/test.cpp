#include <cstdlib>
#include <iostream>
#include "../include/square.h"
#include <cassert>

using namespace std;

int main()
{
    cout << "####################################" << endl;
    cout << "#             TEST SQUARE          #" << endl;
    cout << "####################################" << endl;
    int * v = (int *)malloc(sizeof(int)*5);
    for(int i=0; i<5; i++) {
        v[i] = i;
    }
    Square s(1,0,v);
    assert(1 == s.getX());
    assert(0 == s.getY());
    for(int i=0; i<5; i++) {
        assert(v[i] == s.getVector()[i]);
    }
    int * v2 = (int *)malloc(sizeof(int)*5);
    v2[WUMPUS]=0;
    v2[ODOR]=1;
    v2[BREEZE]=0;
    v2[WELL]=1;
    v2[FLASH]=0;
    Square s2(0,0,v2);
    assert(!s2.wumpus());
    assert(s2.odor());
    assert(!s2.breeze());
    assert(s2.well());
    assert(!s2.flash());
    cout << "Test OK" << endl;
    free(v);
    free(v2);
    return 0;
}
