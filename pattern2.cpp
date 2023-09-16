#include<iostream>
using namespace std;
int main()
{
    int i=1,j;
    int n=3;
    int count=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<count;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i++;
    }
}