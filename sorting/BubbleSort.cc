#include <iostream>

using namespace std;

#define N 101

int main()
{
    int a[N], m;
    cin >> m;
    for(int i=0;i<m;i++)
    {
        cin >> a[i];
    }
    for (int i=0;i<m-1;i++)
        for(int j=0;j<m-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                int t = a[j];
                a[j]= a[j+1];
                a[j+1] = t;
            }
        }
    for (int i=0 ; i<m; i++)
    {
        cout << a[i]<<" ";

    }
    cout << endl;
    return 0;
}
