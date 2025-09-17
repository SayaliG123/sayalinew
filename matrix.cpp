#include <iomanip>
#include <iostream>
#define SIZE 40
using namespace std;
class matrix
{
    private:
    
    int  A[2][3];
    int B[3][2];

    int C[2][2];

    public:
    
    void accept_arr(int A[2][3],int B[3][2]);
    void disp_array(int A[2][3],int B[3][2]);
    void multi(int A[][3],int B[][2],int C[][2]);

};