/*#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int n;
    cin >> n;
    
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    const int N = 1e6+2;
    int idx[N];
    for(int i=0; i<n; i++){
        idx[i] = -1;
    }

    int minidx = INT_MAX;
    for(int i=0; i<n; i++){
        if(idx[a[i]] != -1){
            minidx = min(minidx,idx[a[i]]);

        }
        else{
            idx[a[1]] = i;
        }
    }

    if(minidx == INT_MAX){
        cout << "-1" << endl;
    }
    else{
        cout << minidx + 1 << endl;
    }
    
    return 0;
}*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n=0,i;
    cout<<"Enter the length of array:";
    cin>>n;
    
    cout<<"Enter the elements of the array";
    
    int a[n];   //declaring the main array which is to be inserted by the user
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    //declaring idx[]
    
    const int N=1e6+2;
    int idx[N];
    for(i=0;i<N;i++)
    {
        idx[i]=-1;
    }
    
    //main block of code
    int small=1e8;
    
    for(i=0;i<n;i++)
    {
        if(idx[a[i]]!=-1 && idx[a[i]]<small){small=idx[a[i]];}
        else{idx[a[i]]=i;}
    }
    cout<<"The answer is"<<small;
}