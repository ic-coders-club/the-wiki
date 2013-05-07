#ifndef MYRECTANGLE
#define MYRECTANGLE

/// A class to make rectangle shapes that inherits from the MyShape class
class MyRectangle: public MyShape{
    public:
	/// The constructor
	MyRectangle(double width, double height, char* name);

	/// The destructor, left virtual in case someone else inherits from this class (a square maybe?)
	virtual ~MyRectangle(){};

    public:
	/// Returns the area of the object
	double GetArea() const;

	/// Returns the perimeter of the object
	double GetPerimeter() const;

	/// Dump the rectangle's properties
	void Print() const;

    private:
	double fWidth;
	double fHeight;
};

#endif //MYRECTANGLE
