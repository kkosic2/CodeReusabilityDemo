<h1>Code Reusability Demo</h1>

<h2>Description</h2>
Project consists of a simple C++ program that demonstrates the use of class inheritance to enhance code reusability. The program calculates the distance from a point to the origin in 1D, 2D, and 3D spaces. Rather than duplicating code for each dimension, inheritance allows common functionality to be reused efficiently.

Components
1. Class Inheritance:
   - Project consists of three classes: Point1D, Point2D and Point3D.
   - Inheritance is used to share common code between these classes. Since each space builds on the previous one (e.g., Point2D includes both x and y coordinates, and Point3D adds a z coordinate), the x coordinate is only declared once in the Point1D class and reused        in the other classes.
   - This prevents code duplication and simplifies future maintenance or changes to the program.

2. Memory and Vectors
   - The program dynamically allocates memory for objects and stores them in three separate vectors: one for 1D points, another for 2D points, and the last for 3D points.
   - Range-based for loops are used to iterate through these vectors.
  
3. Main Function
   - The main function initializes the points in 1D, 2D, and 3D spaces and calculates their distances to the origin using the respective DistanceToOrigin() method, which is defined in each class.
   - For each class (Point1D, Point2D, Point3D), a separate calculation is made using the inherited x value (and additional y and z values for 2D and 3D respectively).

Why Inheritance is Important
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
Launch the utility: <br/>
<img src="https://i.imgur.com/7ZLEj3v.png" height="80%" width="80%" alt="Program Steps"/>
<br />
<br />
Select your spacecraft:  <br/>
<img src="https://i.imgur.com/9liQxav.png" height="80%" width="80%" alt="Program Steps"/>
<br />
<br />
Choose your orbital destination: <br/>
<img src="https://i.imgur.com/nkc7D6l.png" height="80%" width="80%" alt="Program Steps"/>
<br />
<br />
Your maximum payload is calculated:  <br/>
<img src="https://i.imgur.com/jRXyy5x.png" height="80%" width="80%" alt="Program Steps"/>
<br />
<br />
OR enter your payload:  <br/>
<img src="https://i.imgur.com/X0CPTpR.png" height="80%" width="80%" alt="Program Steps"/>
<br />
<br />
Possible orbital destinations are calculated:  <br/>
<img src="https://i.imgur.com/kSYLddY.png" height="80%" width="80%" alt="Program Steps"/>
<br />
<br />
OR display engine specifications:  <br/>
<img src="https://i.imgur.com/fOGrjUe.png" height="80%" width="80%" alt="Program Steps"/>
</p>

<h2>Tsiolkovsky Rocket Equation Explanation:</h2>
<p align="center">
The rocket equation: <br/>
<img src="https://i.imgur.com/ojSbSKy.png" height="80%" width="80%" alt="Rocket Equation Steps"/>
<br />
<br />
The ISP (specific impulse) is the efficiency of your rocket engine.
g is the gravitational constant 9.81 m/s2:  <br/>
<img src="https://i.imgur.com/XVicfVF.png" height="80%" width="80%" alt="Rocket Equation Steps"/>
<br />
<br />
The ln is to mathematically describe how the velocity of the rocket changes as it burns fuel (mass).
m0/m1 is the mass ratio (initial mass/final mass):  <br/>
<img src="https://i.imgur.com/70YFbvd.png" height="80%" width="80%" alt="Rocket Equation Steps"/>
<br />
<br />
