#include <cstddef>
#include <stdio.h>
#include <iomanip>
#include <iostream>
using namespace std;

struct node
{
    int data;
    node*next;
};

class CSLL
{
    private:
    node*first;

    public:
    CSLL(void)
    {
        first=NULL;
    }
    void create_list(void);
    void disp_list(void);


};
void CSLL::disp_list(void)
{
    node*temp;
    temp=first;
    cout<<"your list is\n";
    do
    {

    
    cout<<temp->data<<setw(5);
    temp=temp->next;
    }while(temp!=first);
};

void CSLL::create_list(void)
{
    int n;
    node*newnp;
    node*last;
    cout<<"enter how many numbers: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter elements: ";
        newnp=new node;
        cin>>newnp->data;
        if(i==0)
        {
            first=newnp;
            last=newnp;
            last->next=first;

        }
        else
        {
            last->next=newnp;
            last=newnp;
            last->next=first;

        }
    }

};

int main(void)
{
    CSLL a;
    a.create_list();
    a.disp_list();
}
