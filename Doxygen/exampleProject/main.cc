#include "MyRectangle.hxx"
#include "MyCircle.hxx"
#include <iostream>

using namespace std;

int main(int argc, char** argv){

    MyCircle aCircle(3,"Shape1");
    MyRectangle aRectangle(1,2,"Shape1");

    aCircle.Print();
    aRectangle.Print();

    return 0;
}
