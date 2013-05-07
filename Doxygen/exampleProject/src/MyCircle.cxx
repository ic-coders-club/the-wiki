#include "MyCircle.cxx"
MyCircle::MyCircle(double width, double height, char* name):
fWidth(width), fHeight(height), fName(name){
}

double MyCircle::GetArea() const{
    return 3.1415926* fRadius*fRadius;
}

double MyCircle::GetPerimeter() const{
    return 3.1415926*fRadius*2;
}

void MyCircle::Print() const{
    MyShape::Print();
    std::cout<<"Radius: "<<fRadius<<std::endl;
}

