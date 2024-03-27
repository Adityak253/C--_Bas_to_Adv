#include<iostream>

using namespace std;
//friend class;
class Myself
{
    private:
    string Name;
    int Age=20;
    string FavouriteSub;
    public:
    void Fun()
    {
        Age=20;
        Name="Kumar";
    }
    friend class Friend;
};
class Friend
{
    public:
    void Fun(Myself &t )
    {
        cout<<"The value of private variable is : "<<t.Age<<endl;
    }
};
int main() 
{
    Myself m1;
    Friend f1;
    // Calling the Fun function of Friend class, passing Myself object as a reference
    f1.Fun(m1);
    return 0;
}