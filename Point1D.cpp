#include "Point1D.h"
#include <cmath>

Point1D::Point1D(double value)
    :x(value)
{
}

Point1D::~Point1D()
{
}

double Point1D::GetX()
{
    return x;
}

void Point1D::SetX(double value)
{
    x = value;
}

double Point1D::DistanceToOrigin()
{
    return abs(x);
}
