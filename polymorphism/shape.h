# ifndef SHAPE_H
# define SHAPE_H

# include <iostream>
# include <cmath>

class Shape
{
public:
    virtual ~Shape () = default ;

    virtual double area () const = 0 ;
    virtual void translate ( double dx ) = 0 ;
    virtual void show () const = 0 ;
};

# endif 