# ifndef RECTANGLE_H
# define RECTANGLE_H

# include "Shape.h"

class Rectangle : public Shape
{
private:
    double width ;
    double height ;
    double x ;
public:
    Rectangle ( double width , double height , double x ) ;

    double area () const override ;
    void translate ( double dx ) override ;
    void show () const override ;
};

#endif