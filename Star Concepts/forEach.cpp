// https://www.w3schools.com/cpp/cpp_for_loop_foreach.asp

#include<iostream>
using namespace std;

int main()
{
    int a []{3,6,5,7,9,4};
    // char string arr[] = {""};
    for (int i : a){
        cout << i <<endl;
    }
}