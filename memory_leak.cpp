#include<iostream>

using namespace std;
//memory leaks
int main() {
    //situation 1-->
    int *ptr1 {new int {20}};//address 1
    int num {40};//address 2
    ptr1 =&num;//reference to address1 is lost-->leak of memory
    //situation 2-->
    int *p_1{new int {20}};
    p_1 =new int {60};//p_1 is now pointing to int{60}
    //reference to int{20} is lost-->memory leakage
    //situation 3-->ptr in local scope
    if(1==3)
    {
        int *ptr_2{new int {50}};//local to the if condition 
        //the pointer will die but the new int {50} will be in heap-->memory leak
    }
    cout<<"Program is ending well !"<<endl;
    return 0;
}