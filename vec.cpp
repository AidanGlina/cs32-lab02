// vec.cpp - implements Vec3 functions
// YOUR NAME(s), DATE

#include <iostream>
#include "vec.h"
using namespace std;

// constructors done
Vec3::Vec3() : x(0), y(0), z(0) { }
Vec3::Vec3(double x, double y, double z) : x(x), y(y), z(z) { }
/* Do not modify the following line. If you see the message "Pass by value
   fail." in your output, it means you aren't using a reference somewhere
   that you should be. */
Vec3::Vec3(const Vec3 &other) { cout << "Pass by value fail."; }

// getters and setters done
double Vec3::get_x() const { return x; }
double Vec3::get_y() const { return y; }
double Vec3::get_z() const { return z; }
void Vec3::set_x(double value) { x = value; }
void Vec3::set_y(double value) { y = value; }
void Vec3::set_z(double value) { z = value; }

// YOUR WORK GOES HERE
ostream& operator<<(ostream& os, Vec3 v)
{
   os << "(" << v.get_x() << ", " << v.get_y() << ", " << v.get_z() << ")"; 
}