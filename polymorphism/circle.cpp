# include "Circle.h"
# include <cmath>

Circle::Circle ( double radius , double x )
    : radius ( radius ) , x ( x ) {}

double Circle::area () const
{
    return 3.1415926 * radius * radius ;
}

void Circle::translate ( double dx )
{
    x += dx;
}

void Circle::show () const
{
    std::cout << "Circle with radius " << radius << " at x position " << x << std::endl;
}
