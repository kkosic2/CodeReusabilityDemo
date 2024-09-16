#include "Point2D.h"
#include <cmath>

Point2D::Point2D(double x_value, double y_value)

    // Calls base class
    :Point1D(x_value),
    y(y_value)
{
}

double Point2D::GetY()
{
    return y;
}

void Point2D::SetY(double value)
{
    y = value;
}

double Point2D::DistanceToOrigin()
{
    return hypot(x,y);
}
