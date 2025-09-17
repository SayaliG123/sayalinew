#include <iomanip>
#include <iostream>
#define SIZE 40
using namespace std;
//first create array
//in constructor rows and coloums be 0
//then write accept and display 
//then write multipy function
class matrix
{
    private:
    int r,c;
    
    int arr[20][30];
    

    public:
    matrix()
    {
        r=c=0;
        
    }
    
    void accept_arr();
    void disp_array();
    //void multi(arr &A);

};
void matrix::accept_arr()
{
    cout<<"enter rows and coloums\n";
    cin>>r>>c;
    for(int i=0;i<r;i++)
    { 
       for(int j=0;j<c;j++)
       {
        cout<<"enter elements";
        cin>>arr[i][j];
       }
    }

}
void matrix::disp_array()
{
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<setw(5);

        }
    }
}

int main()
{
    matrix A,B;
    cout<<"\nfirst matrix\n";
    A.accept_arr();
    cout<<"\nsecond matrix\n";
    B.accept_arr();
    cout<<"\nyour first matrix A is\n";
    A.disp_array();
    cout<<"\nyour second matrix B is\n";
    B.disp_array();

}
