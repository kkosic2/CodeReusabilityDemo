<h1>Code Reusability Demo</h1>

<h2>Description</h2>
Project consists of a simple C++ program that demonstrates the use of class inheritance to enhance code reusability. The program calculates the distance from a point to the origin in 1D, 2D, and 3D spaces. Rather than duplicating code for each dimension, inheritance allows common functionality to be reused efficiently.


<h3>Why Inheritance is Important</h3>

   - The x coordinate is declared once in Point1D and reused in Point2D and Point3D, avoiding code duplication.
   - The DistanceToOrigin() function can be overridden in the derived classes to calculate distances in higher dimensions, while still reusing the code from the base class (Point1D).
   - This approach simplifies the code structure and makes it easier to extend to more dimensions if needed in the future.




<br />


<h2>Languages and Utilities Used</h2>

- <b>Visual Studio 2022</b> 
- <b>C++</b>

<h2>Environments Used </h2>

- <b>Windows 11</b> 

<h2>Program walk-through:</h2>

<p align="center">
Launch the utility to view output: <br/>
<img src="https://imgur.com/5MjHlOV.png" height="80%" width="80%" alt="Program Steps"/>
<br />
<br />
<h2>Key Components of Program</h2>


<h4>Class Inheritance</h4>
   
   - Project consists of three classes: Point1D, Point2D and Point3D.
   - Inheritance is used to share common code between these classes. Since each space builds on the previous one (e.g., Point2D includes both x and y coordinates, and Point3D adds a z coordinate), the x coordinate is only declared once in the Point1D class and reused       in the other classes.
   - This prevents code duplication and simplifies future maintenance or changes to the program.

<p align="center">
<img src="https://imgur.com/uvyG5QY.png" height="40%" width="40%" alt="Program Steps"/>
<br />
<br />
<h4>Memory and Vectors</h4>

   - The program dynamically allocates memory for objects and stores them in three separate vectors: one for 1D points, another for 2D points, and the last for 3D points.
   - Range-based for loops are used to iterate through these vectors.

<h4>The Main Function</h4>

   - The main function initializes the points in 1D, 2D, and 3D spaces and calculates their distances to the origin using the respective DistanceToOrigin() method, which is defined in each class.
   - For each class (Point1D, Point2D, Point3D), a separate calculation is made using the inherited x value (and additional y and z values for 2D and 3D respectively).









