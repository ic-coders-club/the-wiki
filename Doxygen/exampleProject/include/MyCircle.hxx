#ifndef MYCIRCLE
#define MYCIRCLE

/// A class to make circle shapes that inherits from the MyShape class
class MyCircle: public MyShape{
    public:
	/// The constructor
	MyCircle(double radius, char* name);

	/// The destructor, left virtual in case someone else inherits from this class (a square maybe?)
	virtual ~MyCircle(){};

    public:
	/// Returns the area of the object
	double GetArea() const;

	/// Returns the perimeter of the object
	double GetPerimeter() const;

	/// Dump the circle's properties
	void Print() const;

    private:
	double fRadius;
};

#endif //MYCIRCLE
