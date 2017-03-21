#include <iostream>

using namespace std;

#define N 101

int a[N];

int partition(int p, int q)
{
    int key = a[p];
    int i = p, j = q;
    while (i < j)
    {
        while( a[j] >= key && i<j)
        {
            --j;
        }
        while ( a[i] <= key && i<j)
        {
            ++i;
        }
        if(i<j)
        {
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    a[p] = a[i];
    a[i] = key;
    return i;
}

void QuickSort(int left, int right)
{
    if (left > right) return;
    int pos = partition(left, right);
    QuickSort(left, pos-1);
    QuickSort(pos+1, right);
}

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n;i++)
    {
        cin >> a[i];
    }
    QuickSort(0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
