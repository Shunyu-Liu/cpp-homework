# include "Circle.cpp"
# include "Rectangle.cpp"
# include <vector>

int main ()
{
    std::vector < Shape* > shapes ;

    shapes.push_back ( new Circle ( 5.0 , 0.0 ) ) ;
    shapes.push_back ( new Rectangle ( 4.0 , 3.0 , 0.0 ) ) ;
    shapes.push_back ( new Circle ( 2.5 , 10.0 ) ) ;
    shapes.push_back ( new Rectangle ( 6.0 , 2.0 , 5.0 ) ) ;

    double totalArea = 0.0 ;

    for ( const auto& shape : shapes )
    {
        shape->show () ;
        std::cout << "Area: " << shape->area() << std::endl ;
        totalArea += shape->area () ;
    }

    std::cout << "Total Area: " << totalArea << std::endl ;

    for (auto& shape : shapes)
    {
        shape->translate(10.0);
    }

    std::cout << "After translation:" << std::endl ;
    for ( const auto& shape : shapes )
    {
        shape->show () ;
    }

    for ( auto& shape : shapes )
    {
        delete shape ;
    }

    return 0;
}