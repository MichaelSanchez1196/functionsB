// Name: Michael Sanchez
// 10/13/15
// Program that has functions using pass by reference

#include <iostream>
using namespace std;
double feetToInches(double);
void ftToInches(double, double&);
double computeRectangle(double, double);
void computeArea(double, double, double&);
void computeArea(double, double, double& area, double& perimeter);
void stats(double, double, double, double, double&, double&);
void calcAreaPerimeter(double, double&, double& );
double calcArea(double, double);

int main()
{
    double inches,valA,area,perimeter,sum,circum;
    
    //*********************************
    cout << feetToInches(2) << endl;
    cout << feetToInches(5) << endl;
    ftToInches(2,valA);
    inches = valA;
    //**************************
    cout << computeRectangle(10,10) << endl;
    cout << computeRectangle(2,2) << endl;
    computeArea(2,2,area);
    area = area;
    cout << area << endl;
    //*****************************
    computeArea(2,2,area,perimeter);
    area = area;
    perimeter = perimeter;
    cout << area << endl << perimeter << endl;
    //*************************************
    stats(1,1,1,1,area,sum);
    area = area;
    sum = sum;
    cout << area << endl << sum << endl;
    //********************************
    calcAreaPerimeter(5,area,circum);
    area = area;
    circum = circum;
    cout << area << endl << circum << endl;
    //*************************************
    cout << calcArea(2,2) << endl;

    return 0;
}
double feetToInches(double valA)
{
    return valA * 12;
}
void ftToInches(double valA, double& inches)
{
    inches = valA * 12;
    return;
}
double computeRectangle(double l, double w)
{
    return l*w;
}
void computeArea(double l, double w, double& a)
{
    a = l * w;
    return;
}
void computeArea(double l, double w, double& a, double& p)
{
    a = l * w;
    p = l * 2 + 2 * w;
    return;
}
void stats(double num1, double num2, double num3, double num4, double& a, double& s)
{
    a = (num1 + num2 + num3 + num4) / 4;
    s = num1 + num2 + num3 + num4;
    return;
}
void calcAreaPerimeter(double r, double& a, double& c)
{
    double const PI = 3.14159;
    
    a = PI * r * r;
    c = 2 * PI * r;
    return;
}
double calcArea(double l, double w)
{
    return l * w;
}




