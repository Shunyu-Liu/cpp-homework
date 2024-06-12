# ifndef CIRCLE_H
# define CIRCLE_H

# include "Shape.h"

class Circle : public Shape
{
private:
    double radius;
    double x;
public:
    Circle ( double radius , double x ) ;

    double area () const override ;
    void translate ( double dx ) override ;
    void show () const override ;
};

# endif