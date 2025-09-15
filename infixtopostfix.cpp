#include<iomanip>
#include<iostream>
#include<cstring>
#include <cctype>

using namespace std;
# define size 50
template <class T>
class stack
{
    T stk[size];
    int top;

    public:
    stack()
    {
        top=-1;
    }
    void push(T c);
    T pop(void);
    int stack_empty(void);
    int stack_full(void);
    T top_ele(void);
};
class Expression
{
    private:
    char Exp[30];
    int len;

    public:
      Expression()
      {
        len=0;
      }
    void accpet_exp(void);
    void disp_exp(void);
    void infix_exp(Expression &inPostfix);
    int isp(char token);
    int icp(char token);
};
void Expression::accpet_exp(void)
{
    cout<<"enter expression";
    cin.getline(Exp, 30);
    len= strlen(Exp);
}
void Expression::disp_exp(void)
{
  
  cout<<Exp<<endl;
}
void Expression::infix_exp(Expression &inPostfix)
{
  stack<char>s;  //creating object of stack of cahr type
  int j=0;       //for length
  char top_elem;
  s.push('#');
  for(int i=0;i<len;i++)
  {
    if (Exp[i]==')')
    {
      while((top_elem=s.pop())!='(')
      {
        inPostfix.Exp[j++]=top_elem;//if the token is)pop unpto(
      }
    }
    else if(isalpha(Exp[i]))
    {
      inPostfix.Exp[j++]=Exp[i];      //if the tocken is alphabet store it
    }
    else 
    {
      top_elem=s.top_ele();   //if stack priority is more then pop and store
      while(isp(top_elem)>=icp(Exp[i]))
      {
        inPostfix.Exp[j++]=top_elem;
        top_elem=s.top_ele();
      }
      s.push(Exp[i]);
    }
  }
  while((top_elem=s.pop())!='#')
  {
    inPostfix.Exp[j++]=top_elem;
  }
  inPostfix.Exp[j]='\0';
  inPostfix.len=j;
}
int Expression::icp(char tocken)
{
  if(tocken=='+' || tocken=='-')
  {
    return(1);
  }
  if(tocken== '*' || tocken=='/')
  {
    return(2);
  }
  if(tocken=='^')
  {
    return(4);

  }
  if(tocken=='(')
  {
    return(6);
  }
  if(tocken=='$')
  {
    return(5);
  }
  return(0);
}
  int Expression ::isp(char tocken)
{
    if(tocken=='+' || tocken=='-')
  {
    return(1);
  }
  if(tocken== '*' || tocken=='/')
  {
    return(2);
  }
  if(tocken=='^')
  {
    return(3);

  }
  if(tocken=='(')
  {
    return(0);
  }
  if(tocken=='$')
  {
    return(5);
  }
  if(tocken=='#')
  {
    return(-1);
  }
  return(0);
}
template <class T>

int stack<T>::stack_empty(void)
{
  if(top==-1)
  {
    cout<<"stack is empty";
    return(1);
  }
  return (0);
}
template <class T>
int stack<T>::stack_full(void)
{
  if(top==size-1)
  {
    cout<<"stack is full";
    return(1);
  }
  return(0);
}
template <class T>
void stack<T>::push(T c)
{
  top=top+1;
  stk[top]=c;
}
template <class T>
T stack<T>::pop(void)
{
  T val;
  val=stk[top];
  top=top-1;
  return(val);
}
template <class T>
T stack<T>::top_ele(void)
{
  return(stk[top]);
}

int main ()
{
  Expression o;
  Expression inPostfix;

  o.accpet_exp();
  cout<<"your expression is\n";
  o.disp_exp();
  

  o.infix_exp(inPostfix);
  cout<<"your post fix expression is\n";
  inPostfix.disp_exp();


}