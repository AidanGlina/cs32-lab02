// vec.h - defines class Vec3
// YOUR NAME(s), DATE

#include <iostream>
using namespace std;

class Vec3 {
 public:
    
    // DECLARE (NON-MEMBER) FRIENDS HERE

   // NON-MEMBER BINARY OPERATORS
    friend
    Vec3 operator +(const Vec3& v1, const Vec3& v2);
    friend 
    Vec3 operator *(const Vec3& v1, const Vec3& v2);
    
    // NON-MEMBER OUTPUT FUNCTION
    friend
    ostream& operator << (std::ostream& out, const Vec3& V);
    friend
    ostream& operator >> (std::istream& in, Vec3& V);
    
    // constructors already done
    Vec3();
    Vec3(double, double, double);
    Vec3(const Vec3 &other);
    
    // getters and setters already done too
    double get_x() const;
    double get_y() const;
    double get_z() const;
    void set_x(double);
    void set_y(double);
    void set_z(double);
    
    // DECLARE ANY MORE MEMBER FUNCTIONS HERE


 private:
    double x, y, z;
};
