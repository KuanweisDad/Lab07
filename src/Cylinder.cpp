# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"


double Cylinder :: SurfaceArea(){
    double temp=2*M_PI*radius*radius+2*M_PI*height*radius;
    return (temp);
}

double Cylinder :: Volume(){
    double temp=M_PI*radius*radius*height;
    return (temp);
}

double Cylinder :: Circumference(){
    double temp=2*M_PI*radius;
    return (temp);
}

istream & operator>>(istream & in, Cylinder & cyl)
{
    in >> cyl.radius >> cyl.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cyl)
{
    out << fixed << std::setprecision(3);
    out << "Circumference: " << cyl.Circumference() << endl;
    out << "SurfaceArea: " << cyl.SurfaceArea() << endl;
    out << "Volume: " << cyl.Volume() << endl;
    return out;
}

# endif
