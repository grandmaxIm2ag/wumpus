#include "include/square.h"
#include <cstdlib>
using namespace std;

Square::Square(int x, int y, int v[5])
{
    Square::y=y;
    Square::x=x;
    Square::vector = (int *)malloc(sizeof(int)*5);
    for(int i=0; i<5; i++) {
        Square::vector[i] = v[i];
    }
    free(v);
    Square::vector=v;
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

Square::~Square()
{
    free(Square::vector);
}
