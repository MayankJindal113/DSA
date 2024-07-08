// Read full File

#include<iostream>
using namespace std;
int fun(int a)
{
    return a;
}

void print (int &a)
{
    cout << a;
}

int main()
{
    int a =0;
    cout<<fun(a++);  // a= 0 is passed and then the value is incremented
    //  a++ is post increment i.e it increments the value after copying the variable to the function
    cout <<endl;
    cout<<fun(++a);  // a= 2 is passed
    //  ++a is pre increment i.e it increments the value after copying the variable to the function
    int b= a++;
    cout <<endl<<b;
    b= ++a;
    cout <<endl<<b<<endl;
    b= b++; // Value fo b was 4 and still remains 4
    // Special Case for Post-increment operator: If we assign the post-incremented value 
    // to the same variable then the value of that variable will not get incremented i.e. it will remain the same like it was before.

    cout <<b;

    // This works fine :
    b=++b;
    cout << b;

    // See also pre post decrement :
    cout << a--;
    cout << --a;
    int i =0;
    cout<<endl <<i<< " By reference :";
    print (i++);
}