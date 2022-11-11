//Quick sort where pivot element is always middle of the array
//Best case complexity
#include<bits/stdc++.h>
using namespace std;
void Swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int a[],int l,int h)
{
        int pivot=(l+h)/2;
        int i=l;
        int j=h;
       if(i<j){
       while (a[i]<=a[pivot] && i<h)i++;
        while (a[j]>=a[pivot] && j>l)j--;
       if(i<=j)Swap(&a[i],&a[j]);
       
   }
   if(i>=j && i>pivot && j<pivot)
       {
           return pivot;
       }
       else if(i>=j && i<pivot && j<pivot)
       {
          Swap(&a[i],&a[pivot]);
          return i;
       }
       else{
        Swap(&a[pivot],&a[j]);
        return j;
       }

}
void quickSort(int a[],int l,int h)
{
    int p;
    if(l<h)
    {
        p=partition(a,l,h);
        quickSort(a,l,p);
        quickSort(a,p+1,h);
    }
}



int main()
{
//Enter number of elements
int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }
quickSort(a,0,n-1);
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
    return 0;
}