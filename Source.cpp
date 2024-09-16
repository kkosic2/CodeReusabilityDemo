#include <vector>
#include <iostream>

#include "Point1D.h"
#include "Point2D.h"
#include "Point3D.h"

int main()
{
	
	// A vector of POINTERS (*) to Point1D objects hence (<Point1D*>).
	// The pointers stored are from the dynamically allocated objects using "new" below
	std::vector<Point1D*> pointers1D;

	std::vector<Point2D*> pointers2D;
	std::vector<Point3D*> pointers3D;
	// DYNAMIC MEMORY ALLOCATION. 
	// "new Point1D(-7.0)" is creating an instance (an object) of the Point1D class and storing its POINTER in the vector
	// "new" clarification. Creates an instance of Point1D on the heap and ALWAYS returns a pointer.
	pointers1D.push_back(new Point1D(-7.0));  

	pointers2D.push_back(new Point2D(4.0, 4.0));
	pointers3D.push_back(new Point3D(3.0, 4.0, 5.0));

	// RANGED BASED FOR LOOP
	// for (declaration : containter)
	// For each iteration, p is assigned a pointer
	// The pointer is a memory address of a Point1D object from pointers1D 
	// The -> is a pointer dereference operator.
	// It dereferences the pointer p to access the point1D object it points to

	for (Point1D* p : pointers1D) 
	{
		std::cout << "1D SPACE" << std::endl << "X = -7.0" << std::endl << "Distance to Origin: ";
		std::cout << p->DistanceToOrigin() << std::endl;
	}

	for (Point2D* p : pointers2D) 
	{
		std::cout << std::endl << "2D SPACE" << std::endl << "X = 2.0 Y = 2.0" << std::endl << "Distance to Origin: ";
		std::cout << p->DistanceToOrigin() << std::endl;
	}

	for (Point3D* p : pointers3D)
	{
		std::cout << std::endl << "3D SPACE" << std::endl << "X = 3.0 Y = 4.0 Z = 5.0" << std::endl << "Distance to Origin: ";
		std::cout << p->DistanceToOrigin() << std::endl;
	}


	

}