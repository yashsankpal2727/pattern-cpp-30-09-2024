#include<iostream>
using namespace std;

int main ()
{

    int n ;
    cout <<"enter your number "<<endl;
    cin>> n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout <<"*";
        }
        cout<<endl;

    }
}


/*
output: 
n=3 
***
***
***
 
 logic: when i=0--> j=0,1,2,3 then j is tramenated,and i is run endl. 
        when i=1--> j=0,1,2,3 then j is tramenated,and i is run endl. 
        when i=2--> j=0,1,2,3 then j is tramenated,and i is run endl. 
*/