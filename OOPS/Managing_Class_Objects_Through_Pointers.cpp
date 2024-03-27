#include<iostream>
#include<math.h>
#define pie 3.141
class Cylinder
{
    float radius;
    float height;
    public:
    Cylinder(float radius, float height)
    {
        this->height=height;
        this->radius=radius;
    }
    float getRadius()
    {
        return radius;
    }
    float getHeight()
    {
        return height;
    }
    float Volume()
    {
        return pie*pow(radius,2)*height;
    }
    float surfaceArea()
    {
        return 2*pie*radius*height;
    }
};
int main() {
    Cylinder c1=Cylinder(10,10);//in the static memory
    std::cout<<"The radius is (using static memory) : "<<c1.getRadius()<<std::endl;
    std::cout<<"The height is(using static memory) : "<<c1.getHeight()<<std::endl;
    std::cout<<"The surface area is(using static memory) : "<<c1.surfaceArea()<<std::endl;
    std::cout<<"The volume is (using static memory): "<<c1.Volume()<<std::endl;
  /*   managing stack object using pointers illustration below ----------------------------------------------------------*/
    Cylinder *c2=&c1;
    std::cout<<"The radius is (using pointer) : "<<c2->getRadius()<<std::endl;
    std::cout<<"The height is(using pointer) : "<<c2->getHeight()<<std::endl;
    std::cout<<"The surface area is(using pointer) : "<<c2->surfaceArea()<<std::endl;
    std::cout<<"The volume is (using pointer): "<<c2->Volume()<<std::endl;
    /*   allocating object in heap using pointers illustration below ----------------------------------------------------------*/ 
    Cylinder *c3=new Cylinder(3,4);
    std::cout<<"The radius is (using dynamic memory) : "<<c3->getRadius()<<std::endl;
    std::cout<<"The height is(using dynamic memory) : "<<c3->getHeight()<<std::endl;
    std::cout<<"The surface area is(using dynamic memory) : "<<c3->surfaceArea()<<std::endl;
    std::cout<<"The volume is (using dynamic memory): "<<c3->Volume()<<std::endl;
    delete c3;//delete dynamically allocated memory!
    return 0;
}