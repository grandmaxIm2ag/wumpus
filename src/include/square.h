#ifndef __SQUARE_H_
#define __SQUARE_H_

#define WUMPUS 0
#define ODOR 1
#define BREEZE 2
#define WELL 3
#define FLASH 4

class Square
{ 
 private:
    int * vector;
    int x;
    int y;
    
 public:
    Square(int x, int y, int * v);
    int * getVector();
    int getX();
    int getY();

    int wumpus();
    int odor();
    int breeze();
    int well();
    int flash();
};

#endif
