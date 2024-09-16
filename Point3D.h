#pragma once

#include "Point2D.h"

class Point3D : public Point2D
{
public: 
	Point3D(double x_value, double y_value, double z_value);

	double GetZ();
	void SetZ(double value);

	virtual double DistanceToOrigin() override;

protected:
	double z;




};