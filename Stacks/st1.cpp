#include<iostream>
using namespace std;

class stack
{   
    public: 

    int size;
    int *arr;
    int top;

    stack(int size)
    {
        this -> size= size;
        arr= new int[size];
        top=-1;
    }

    int getTop()
    {   
        if(top==-1)
        {
            cout<<"Empty Stack";
        }
        else
        {
            return arr[top];
        }
    }
    void push(int data)
    {
        if(size-top  > 1)
        {
            top++;
            arr[top]=data;
        }
        else
        {
            cout<<"Stack Overflow";
        }
    }

    void pop()
    {
        if(!isEmpty())
        {
            top--;   
        }
        else
        {
            cout<<"Stack Underflow";
        }
    }

    int isEmpty()
    {
        if(top==-1)
        {
            return 1;
        }
        else{return 0;}

    }
    int isFull()
    {
        if(size-top>1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    stack s(5);
    
    s.push(5);
    while(!s.isEmpty())
    {
        cout<<s.getTop()<<endl;
        s.pop();
    }
}