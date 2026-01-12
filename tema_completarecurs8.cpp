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
    
 double Distanta(Point p_1, Point p_2);
    double latura_a = calculeazaDistanta(p_1(t), p_2(t));
    double latura_b = calculeazaDistanta(p_2(t), p_3(t));
    double latura_c = calculeazaDistanta(p_3(t), p_1(t));
    
  
  
    
int main()
{
   Point p_1;
   p_1.x = 2;
   p_1.y = 5;
   
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
   
    //double latura_a = ;
    //double latura_b = ;
    //double latura_c = ;
    double s = (a + b + c) / 2.0;
    double calculAriaTriunghiului(double t.p_1, double t.p_2, double t.p_3) {
    
    double aria = std::sqrt(s * (s - t.p_1) * (s - t.p_2) * (s - t.p_3));
    return aria;
    }
    
    double Distanta(Point p_1, Point p_2) {
    
    double distanta_x = pow(p_2.x - p_1.x, 2);
    double distanta_y = pow(p_2.y - p_1.y, 2);

    return sqrt(distanta_x + distanta_y);
}

    
    std::cout << "a: (" << p_1.x << ", " << p_1.y << ")" << std::endl;
    std::cout << "b: (" << p_2.x << ", " << p_2.y << ")" << std::endl;
    std::cout << "c: (" << p_3.x << ", " << p_3.y << ")" << std::endl;
    
      // double aria = calculeazaAriaHeron(latura_a, latura_b, latura_c);

   // if (aria != -1.0) {
     //   std::cout << "Laturile: " << latura_a << ", " << latura_b << ", " << latura_c << std::endl;
     //   std::cout << "**Aria triunghiului este: " << aria << "**" << std::endl;
   
   std::cout << is_point_origin(p_1)<< std::endl;
   std::cout <<TriangleIsValid(t) <<std::endl;
return 0;
   
}