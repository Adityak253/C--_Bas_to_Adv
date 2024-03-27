#include<iostream>
#include<vector>
using namespace std;
int main() {
    int cap2D=0;
    //way 1 -->
    vector<vector<int>>vect
    {
        {1,2},
        {3,4,5},
        {6,7,8}
    };
    cout<<"The 2D vector(by first way ) is : "<<endl;
    for(int i=0;i<vect.size();i++)
    {
        for(int j=0;j<vect[i].size();j++)
        {
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }
    int rows;//no of rows;
    int col;//no of columns;
    cout<<"Enter the number of rows and columns : "<<endl;
    cin>>rows>>col;
    vector<vector<int>>vect1(rows,vector<int>(col));
    cout<<"Enter the values of the vector : ";
    for(int i=0;i<vect1.size();i++)
    {
        for(int j=0;j<vect1[i].size();j++)
        {
            cin>>vect1[i][j];
        }
    }
    cout<<"Print the result by way 2 : "<<endl;
    for(auto &rows : vect1 )
    {
        for(auto value : rows)
        {
            cout<<value<<" ";
        }
        cout<<endl;
    }
    cout<<"The capicity of the 2D vector is : ";
    for(auto &rows : vect1)
    {
            cap2D+=rows.capacity();
    }
    cout<<cap2D;
    return 0;
}