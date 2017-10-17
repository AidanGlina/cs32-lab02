// vec.h - defines class Vec3
// YOUR NAME(s), DATE

#include <iostream>
using namespace std;

class Vec3 {
 public:
    
    // DECLARE (NON-MEMBER) FRIENDS HERE

    
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
