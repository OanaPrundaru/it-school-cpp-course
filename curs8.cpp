/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
#include <math.h>

//std::pow
//std::sqrt 

#define BUFFER_MAX_LEN 256

struct Point {
    int x;
    int y;
};
    
struct Triangle {
    Point p_1;
    Point p_2;
    Point p_3;
};

void printPoint(Point p){
    std::cout << "Point (" << p.x << " , " << p.y << ")" << std::endl; 
}
void printTriangle(Triangle t){
    printPoint(t.p_1);
    printPoint(t.p_2);
    printPoint(t.p_3);
}

bool is_point_origin(Point p_1){
    return( p_1.x == 0 && p_1.y == 0);
}

float TriangleIsValid(Triangle t)
{
    float det = t.p_1.x * (t.p_2.y - t.p_3.y) +
              t.p_2.x * (t.p_2.y - t.p_1.y) +
              t.p_3.x * (t.p_1.y - t.p_2.y);
    return fabs(det) > 1e-12;
    }
    
int main()
{
   Point p_1;
   p_1.x = 2;
   p_1.x = 5;
   
   Point p_2;
   p_2.x = 3;
   p_2.y = 9;
   
   Point p_3;
   p_3.x = 15;
   p_3.y = 1;
   
   printPoint(p_3);
   
   Triangle t;
   
   t.p_1.x = 12;
   t.p_1.y = 2;
   t.p_2.x = 13;
   t.p_2.y = 15;
   t.p_3.x = 8;
   t.p_3.y = 5;
   
   printTriangle(t);
   
   std::cout << is_point_origin(p_1)<< std::endl;
   std::cout <<TriangleIsValid(t) <<std::endl;
return 0;
   
}