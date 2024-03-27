#include<iostream>

using namespace std;
//case --> 'new' operator fails (very rare)
//key concept-->
//exception mechanism
//no throw setting
//1.Exception mechanism--> try and catch;
int main() {
    //cases new fails -->
    //case 1->exhaust heap;
    // int *ptr =new int[10000000000000000];//system terminates
    //solving the above issue
    //solution 1 ->exception mechanism
    try{
        int *ptr =new int[10000000000000000];
    }catch(std::exception &ex)
    {
        cout<<"something went wrong : "<<ex.what()<<endl;
    }
    //std::nothrow(set to null if fails)-->
    int *data=new (std::nothrow) int[10000000000000000];
    if(data==nullptr)
    {
        cout<<"Allocation failed !"<<endl;
    }
    else
    {
        cout<<"Allocation is success!"<<endl;
    }
    cout<<"Program ended well!"<<endl;
    return 0;
}