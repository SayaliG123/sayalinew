
#include <iostream>
#include <iomanip>
using namespace std;
class sort
{
     public: int arr[40];
             int n,no;
    
    void bubble_sort(int arr[],int n);
    void selection_sort(int arr[], int n);
    void disp_arr(int n);
    void insertion_sort(int n, int arr[]);
    int l_search(int arr[],int n,int no);
    int b_search (int arr[],int n,int no);

};
void sort::bubble_sort(int arr[],int n)
{   int temp;
    for(int i=0;i<n;i++)
    {
        for (int j=1;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
}
void sort::selection_sort(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int min=1;
        for( int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        if (min!=i)
        {
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }

    }
    
}
void sort::disp_arr(int n)
{
    cout<<"\nyour info is\n";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

}
void sort::insertion_sort(int n, int arr[])
{
    
    for (int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j<=0&& arr[j]>arr[key])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

    }
}
int sort::l_search(int arr[],int n,int no)
{
    for (int i=0;i<n;i++)
    {
        if(arr[i]==no)
        {
            cout<<"found";
            return(1);

        }
       
    }
    cout<<"not found";
       return 0;

}
int main (void)
{
    sort s1;
    cout<<"eneter how many elemnts";
    cin>>s1.n;
    cout<<"enter elements";
    for (int i=0;i<s1.n;i++)
    {
        cin>>s1.arr[i];
    }
    s1.disp_arr(s1.n);
    s1.selection_sort(s1.arr,s1.n);
    cout<<"\nselection sort";
    s1.disp_arr(s1.n);
    s1.bubble_sort(s1.arr,s1.n);
    cout<<"\nbubble sort";
    s1.disp_arr(s1.n);
    s1.insertion_sort(s1.n,s1.arr);
    cout<<"\ninsertion sort";
    s1.disp_arr(s1.n);
    cout<<"\nenter no to search\n";
    cin>>s1.no;
    s1.l_search(s1.arr,s1.n,s1.no);
    s1.disp_arr(s1.n);

    

}