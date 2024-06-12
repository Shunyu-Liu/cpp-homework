# include "Rectangle.h"

Rectangle::Rectangle ( double width , double height , double x )
    : width ( width ) , height ( height ) , x ( x ) {}

double Rectangle::area () const
{
    return width * height ;
}

void Rectangle::translate ( double dx )
{
    x += dx;
}

void Rectangle::show () const
{
    std::cout << "Rectangle with width " << width << ", height " << height << " at x position " << x << std::endl;
}
