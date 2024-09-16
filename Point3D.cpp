#include "Point3D.h"
#include <cmath>

Point3D::Point3D(double x_value, double y_value, double z_value)

// Call direct parent
: Point2D(x_value, y_value),
z(z_value)
{
}

double Point3D::GetZ()
{
    return z;
}

void Point3D::SetZ(double value)
{
    z = value;
}

double Point3D::DistanceToOrigin()
{
    return sqrt((x*x) + (y*y) + (z*z));
}
