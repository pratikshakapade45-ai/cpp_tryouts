#include<iostream>
using namespace std;
int main()
{
    int arrr[]={10,20,30,40,60};
    int ele,i;

    cout<<"Enterr no ";
    cin>>ele;

    for(i=0;i<5;i++)
    {
        if(arrr[i]==ele)
        {
            cout<<"found";
            break;
        }
    }

}