#include <iomanip>
#include <iostream>
#define SIZE 40
using namespace std;

class Queue
{
    private:int que[SIZE];
            int f,r;
    public :
    Queue() //constructor(default)
    {
        f=r=0;
    }
    void insert_Q(void);
    int Q_full(void);
    int Q_empty(void);
    void disp_Q(void);
    void delete_Q(void);
    
};
void Queue::insert_Q(void)
{
    int item;
    cout<<"enter element to insert";
    cin>>item;
    r=(r+1)%SIZE;
    que[r]=item;
}
int Queue:: Q_full(void)
{
    if((r+1)%SIZE==f)
    {
        cout<<"queue is full";
        return 1;
    }
}
int Queue::Q_empty(void)
{
    if (f==r)
    {
        cout<<"Queue is empty";
        return 1;
    }
}
void Queue::disp_Q(void)
{
    int i=(f+1)%SIZE;
    while(i!=(r+1)%SIZE)
    {
        cout<<que[i];
        i=(i+1)%SIZE;
    }
}
int Queue::delete_Q(void)
{
    f=(f+1)%SIZE;
    return (que[f]);
}
int main(void)
{
    Queue s;
    s.Q_empty();
    cout<<"\nyour new Queue is\n";
    s.insert_Q();
    s.disp_Q();
    s.Q_full();
    s.Q_empty();
    
    s.insert_Q();
    cout<<"\nyour new Queue is\n";
    s.disp_Q();
    
    s.insert_Q();
    cout<<"\nyour new Queue is\n";
    s.disp_Q();
    s.delete_Q();

    
    
    
}
