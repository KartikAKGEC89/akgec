#include <bits/stdc++.h>
using namespace std;

void py(int N)
{
    for (int i = 0; i < N; i++)
    {
        
        for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
       
        
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }
        
       
         for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
        
       
        cout << endl;
    }
}

void pyr(int N)
{
   
    for (int i = 1; i < N; i++)
    {
        
        for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
       
        for(int j=0;j< 2*N -(2*i +1);j++){
            
            cout<<"*";
        }
        
       
         for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        
        cout << endl;
    }
}

int main()
{
    int N = 5;
    py(N);
    pyr(N);

    return 0;
}
