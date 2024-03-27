#include<iostream>

using namespace std;
class Circle
{
    float Radius;
    public:
    void SetRadius()
    {
        float radius;
        cout<<"Enter the radius : ";
        cin>>radius;
        Radius=radius;
    }
    float GetRadius()
    {
        return Radius;
    }
    void CalculateArea()
    {
        cout<<"The area of the circle with radius "<<Radius<<" is "<<3.14*Radius*Radius;
    }
    void Circumference()
    {
        cout<<"The circumference of the circle is : "<<2*3.14*Radius;
    }
};
int main() {
    Circle c1;
    c1.SetRadius();
    cout<<c1.GetRadius()<<endl;
    c1.CalculateArea();
    return 0;
}