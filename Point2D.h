#pragma once

#include "Point1D.h"

// Point2D ("child class") is derived from Point1D ("base class")
// Point2D inherits everything from Point1D (code reusability)
// Point2D is an object of Point1D
class Point2D : public Point1D
{
public: 
	Point2D(double x_value, double y_value);

	double GetY();
	void SetY(double value);

	virtual double DistanceToOrigin() override;

protected:

	double y;

};


