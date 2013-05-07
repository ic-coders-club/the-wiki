#ifndef MYSHAPE
#define MYSHAPE

#include <iostream>

/// A base class that defines the interface to some shape objects.
/// Inherit from this class to use polymorphism in containers
class MyShape{
    protected:
	/// The constructor, protected so it can only be called by inheriting classes
	MyShape(){};

	/// The destructor 
	virtual ~MyShape(){};

    public:
	/// Returns the area of the object
	virtual double GetArea() const=0;

	/// Returns the perimeter of the object
	virtual double GetPerimeter() const=0;

	/// Returns the name of the object
        char* GetName()const { return name; };

	/// Sets the name of the object
        void SetName(char* n ) { name=n; };

	/// Dump to screen the information stored in this class:
	void Print() const;

    protected:
	/// Stores the name of the object
	char* fName;
};

void MyShape::Print() const{
    std::cout<<"Shape: "<<GetName()<<std::endl;
    std::cout<<"has Area: "<<GetArea()<<std::endl;
    std::cout<<"and Perimeter: "<<GetPerimeter()<<std::endl;
}

#endif //MYSHAPE
