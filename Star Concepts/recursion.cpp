#include<iostream>
using namespace std;
int data = 0;

int fcn (){
    if (data == 2)return data;
    cout << data;data++;

    fcn ();
    cout <<data;
}

int main()
{
    fcn();
}