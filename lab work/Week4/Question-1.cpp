#include<iostream>
using namespace std;
int comparisons,inversion;
void merge(int arr[],int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[left+i];
    }
    for(int j=0;j<n2;j++)
    {
        b[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=left;
    int l=left;
    while(i<n1&&j<n2)
    {
        comparisons++;
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            l++;
            k++;
            i++;
        }
        else
        {
            arr[k]=b[j];
            inversion+=mid-l+1;
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        arr[k]=a[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
        k++;
        j++;
    }
}
void mergeSort(int arr[],int left,int right)
{
    if(left<right)
    {
        int mid=(left+right)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
int main()
{
    int testCases;
    cin>>testCases;
    while(testCases)
    {
        comparisons=0;
        inversion=0;
        int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        mergeSort(arr,0,size-1);
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\nComparisons="<<comparisons<<endl;
        cout<<"Inversions="<<inversion<<endl;
        testCases--;
    }
    return 0;
}