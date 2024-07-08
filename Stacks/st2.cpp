// Make two stacks using one array
#include<iostream>
using namespace std;
class stacks
{
    private: 
    // Make these data members as private so that user cant access these
    int size;
    int *arr;
    int top1;
    int top2;

    public:

    stacks(int s)
    {
        this->size=s;
        top1=-1;
        top2=size;
        arr = new int[size];

        for(int i=0;i<size;i++)
        {
            arr[i]=0;
        }
    }

    void push1(int data)
    {
        if(top2-top1>1)
        {
            top1++;
            arr[top1]=data;
        }
        else
        {
            cout<<"Overflow";
        }
    }
    int pop1()
    {
        if(top1==-1)
        {
            cout<<"Underflow";
        }
        else
        {
            int flag=arr[top1];
            arr[top1]=0;
            top1--;
            return flag;
        }
    }
    void push2(int data)
    {
        if(top2-top1>1)
        {
            top2--;
            arr[top2]=data;
        }
        else
        {
            cout<<"Overflow";
        }
    }
    int pop2()
    {
        if(top1==size)
        {
            cout<<"Underflow";
        }
        else
        {
            int flag=arr[top2];
            arr[top2]=0;
            top2++;
            return flag;
        }
    }
    void print()
    {

        for(int i=0;i<size;i++)
        {cout<<i+1<<" "<<arr[i]<<endl;}
    }
    

};

int main()
{
    stacks s(10);

    s.push2(9);

    s.push1(17);

    s.print();

    s.push2(34);

    s.push1(22);

    s.pop2();

    s.print();
}