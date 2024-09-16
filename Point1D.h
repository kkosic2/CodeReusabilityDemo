#pragma once

class Point1D
{
public:
	// MEMBER FUNCTIONS
	// Constructor (to initialize x)
	Point1D(double value);
	// Virtual destructor
	// Ensures proper cleanup of dynamically allocated memory in a derived class
	virtual ~Point1D();
	
	// Accessor (Getter) 
	// Retrieves the value of x from outside the class
	double GetX();

	// Mutator (Setter) 
	// Allows modification of x from outside the class
	void SetX(double value);

	// Member function 
	// Virtual so this function can be overridden in a derived class to change the
	// behavior of how the origin is calculated
	virtual double DistanceToOrigin();

protected:
	// x is a protected member variable.
	// Protected means its accessible within this class and any class that inherits this class
		double x;

};