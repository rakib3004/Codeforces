#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t;
    cin>>t;
    while(t--)
    {

        int a1,b1,a2,b2;
        cin>>a1>>b1;
        cin>>a2>>b2;

     int max1,max2;
     int min1,min2;

     max1 = max(a1,b1);
     max2 = max(a2,b2);
     min1 = min(a1,b1);
     min2 = min(a2,b2);
     if(max1==max2 && min1+min2==max1){

        cout<<"YES"<<endl;
     }
     else{

                cout<<"NO"<<endl;

     }


    }
    return 0;
}

