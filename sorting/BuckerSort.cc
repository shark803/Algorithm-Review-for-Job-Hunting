#include <iostream>

using namespace std;

#define N 1001


int main()
{
    int a[N],m,t;
    for(int i=0;i<N;i++)
        a[i] = 0;
    cin>>m;\
    for (int i=0;i<m;i++)
    {
        cin>>t;
        ++a[t];
    }
    for(int i=0;i<N;i++)
        for(int j=0;j<a[i];j++)
        {
            cout<<i<<" ";
        }
    cout<<endl;
    
    return 0;
}
