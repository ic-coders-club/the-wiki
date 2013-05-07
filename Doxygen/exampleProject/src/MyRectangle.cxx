#include "MyRectangle.cxx"
MyRectangle::MyRectangle(double width, double height, char* name):
fWidth(width), fHeight(height), fName(name){
}

double MyRectangle::GetArea() const{
    return fHeight*fWidth;
}

double MyRectangle::GetPerimeter() const{
    return 2*(fHeight+fWidth);
}

void MyRectangle::Print() const{
    MyShape::Print();
    std::cout<<"Height: "<<fHeight<<std::endl;
    std::cout<<"Width: "<<fWidth<<std::endl;
}
