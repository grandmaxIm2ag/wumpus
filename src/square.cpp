#include "include/square.h"
#include <cstdlib>
#include <iostream>
using namespace std;

Square::Square(int x, int y, int v[5])
{
    Square::y=y;
    Square::x=x;
    Square::vector = (int *)malloc(sizeof(int)*5);
    for(int i=0; i<5; i++) {
        Square::vector[i] = v[i];
    }
}

int * Square::getVector()
{
    return Square::vector;
}

int Square::getX()
{
    return Square::x;
}

int Square::getY()
{
    return Square::y;
}

int Square::wumpus()
{
    return Square::vector[WUMPUS];
}

int Square::odor()
{
    return Square::vector[ODOR];
}

int Square::breeze()
{
    return Square::vector[BREEZE];
}

int Square::well()
{
    return Square::vector[WELL];
}

int Square::flash()
{
    return Square::vector[FLASH];
}
