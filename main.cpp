#include <iostream>
#include "QuickSort.h"
using namespace std;


void printarray(int *arr,int &size)
{

    cout<<"array:"<<endl<<"[";
    for(int i=0;i<size;i++)
    {
        if(i<size-1)
            cout<<arr[i]<<",";
        else
            cout<<arr[i];
    }
    cout<<"]"<<endl;
}
void checktwosum(int *arr,int &size,int &target)
{
    int i=0,j=size-1;
    while (i<j)
    {
        if(arr[i]+arr[j]==target)
        {
            cout<<"the indices after sort:"<<endl<<"["<<i<<","<<j<<"]"<<endl;
            return ;
        }
        else if(arr[i]+arr[j]>target)
            j--;
        else
            i++;
    }
    cout<<"dosent found two sum"<<endl;
}
int main() {
    int *arr,n,target;

    //building an array.
    cout<<"input size of array"<<endl;
    cin>> n;
    arr=new int(n);
    for(int i=0;i<n;i++)
    {
        cout<<"input number(int):"<<endl;
        cin>>arr[i];
    }
    //printing array
    printarray(arr,n);
    cout<<"input target:"<<endl;
    cin>>target;

    //solve in O(nlogn):

    //sorting array using quick sort.
//    quickSort(arr,0,n-1);
//    checktwosum(arr,n,target);
//

    //solve in O(n^2):
    for(int i=0;i<n;i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "the indices:" << endl << "[" << i << "," << j << "]" << endl;
                return 0;
            }
        }
    }
        cout<<"dosent found two sum"<<endl;


    return 0;
}
