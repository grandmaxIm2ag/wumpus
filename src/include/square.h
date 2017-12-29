#ifndef __SQUARE_H_
#define __SQUARE_H_

class Square
{ 
 private:
    int * vector;
    int x;
    int y;
    
 public:
    Square(int x, int y, int * v);
    ~Square();
    int * getVector();
    int getX();
    int getY();
};

#endif
