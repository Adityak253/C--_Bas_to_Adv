#include<iostream>
template <typename T>
class Array
{
    private:
    T *ptr;
    size_t size;
    public:
    Array(T arr[],size_t s);
    void Print();
    ~Array();
};
template <typename T>
Array<T>::Array(T arr[],size_t S)
{
    size=S;
    ptr=new T[S];
    std::cout<<"Enter the values of the array"<<std::endl;
    for(int i=0;i<size;i++)
    {
        std::cin>>arr[i];
        ptr[i]=arr[i];
    }
}
template<typename T>
Array<T>::~Array()
{
    std::cout<<"Execution completed!";
    delete [] ptr;
}
template <typename T>
void Array<T>::Print()
{
    std::cout<<"The values are : "<<std::endl;
    for(int i=0;i<size;i++)
    {
        std::cout<<*(ptr+i)<<" ";
    }
    std::cout<<std::endl;
}
int main() {
    char arr[5];
    Array obj=Array(arr,5);
    obj.Print();
    return 0;
}