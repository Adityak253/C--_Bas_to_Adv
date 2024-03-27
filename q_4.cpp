#include<iostream>

using namespace std;
class Employee
{
    string Name;
    int CustomerID;
    float Salary;
    public:
    Employee()
    {
        Name="NULL";
        CustomerID=0;
        Salary=0;
    }
    Employee(string Name,int CustomerID)
    {
        this->Name=Name;
        this->CustomerID=CustomerID;
        Salary=0;
    }
    string GetName()
    {
        return Name;
    }
    int GetCustomerID()
    {
        return CustomerID;
    }
    float GetSalary()
    {
        return Salary;
    }
    void CalculateSalary()
    {
        float Perfomance;
        cout<<"Enter performance rate(%) of the employee : ";
        cin>>Perfomance;
        if(Perfomance>0 && Perfomance<=50)
        {
            Salary=20000 * (Perfomance);
        }
        else if(Perfomance>50 && Perfomance<=100)
        {
            Salary=30000 * (Perfomance);
        }
    }
    void AccessEmployee()
    {
        cout<<"MENU"<<endl<<"1.Name"<<endl<<"2.CustomerID"<<endl<<"3.CalculateSalary"<<endl<<"4.EXIT!"<<endl;
        while(1)
        {
        int choice;
        cout<<"Enter choice : ";
        cin>>choice;
        if(choice ==1)
        {
            cout<<this->Name<<endl;
        }
        else if(choice ==2 )
        {
            cout<<this->CustomerID<<endl;
        }
        else if(choice ==3 )
        {
            this->CalculateSalary();
            cout<<"The salary is : "<<this->GetSalary()<<endl;
        }
        else if(choice==4)
        {
            cout<<"Exit!";
            break;
        }
        else
        {
            cout<<"Invalid Option!"<<endl;
        }
        }
    }
};
int main() {
    Employee e1("Kumar",2205564);
    e1.AccessEmployee();
    return 0;
}