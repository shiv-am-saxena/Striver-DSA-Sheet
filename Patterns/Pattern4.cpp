#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 1
    // 2 2 
    // 3 3 3
    // 4 4 4 4
    cout<<"Enter num:";
    int n;
    cin>>n;
    for (int i = 1; i <= n;i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
  return 0;
}