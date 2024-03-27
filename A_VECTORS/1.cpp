#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>name;
    int in;
    name.push_back(4);
    name.push_back(8);
    cout<<"Capacity : "<<name.capacity()<<endl;
    cout<<"Size : "<<name.size()<<endl;
    name.push_back(5);
    cout<<"Capacity : "<<name.capacity()<<endl;
    cout<<"Size : "<<name.size()<<endl;
    for(auto i : name)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Enter to insert : ";
    for(int i=0;i<2;i++)
    {
        cin>>in;
        name.push_back(in);
    }
    cout<<"Capicity 3 : "<<name.capacity()<<endl;
    cout<<"Size 3 : "<<name.size()<<endl;
    cout<<"Modified vector : ";
    for(auto i : name)
    {
        cout<<i<<" ";
    }
    return 0;
    }