#include<iostream>
#include<array>
#include<tuple>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    array<int,5> marks = {87,91,70,90,100};
    
    // accessing and printing array elements using at()
    cout<<"Elements dispalyed using at()"<<endl;
    for(int i=0;i<5;i++)
    cout<<marks.at(i)<<endl;
    
    // accessing and printing array elements using [ ] operator
    cout<<"Elements dispalyed using [ ] operator"<<endl;
    for(int i=0;i<5;i++)
    cout<<marks[i]<<endl;
    
    // accessing and printing array elements using get()
        cout<<"Elements dispalyed using get()"<<endl;
        cout<<get<0> (marks)<<endl;
        cout<<get<1> (marks)<<endl;
        cout<<get<2> (marks)<<endl;
        cout<<get<3> (marks)<<endl;
        cout<<get<4> (marks)<<endl;
    
    return 0;
}
