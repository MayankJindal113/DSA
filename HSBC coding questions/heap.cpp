// insert() delete() heapify() buildHeap()
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class heap
{   
    public:
    int size, arr[100];
    heap()
    {
        size=0;
        arr[0]=-1;
    }

    void insert_to_heap(int val)
    {
        size ++;
        int index= size;
        arr[size]= val;

        while (index>1)
        {
        int parent = index/2;

        if (arr[parent] < arr[index])
        {   
            swap(arr[parent], arr[index]);
            index = parent;
        }
        else{return ;}
        }   
    }

    void delete_heap()  // The root is deleted always
    {
        if (size==0)
        {cout<< "Nothing to delete ";return;}

        arr[1]=arr[size];
        size--;
        // heapify the remaning heap
        int index= 1;
        int left_child = index*2;
        int right_child = index*2+1;
        while (index < size)
        {
        if ( left_child<size && arr[left_child]> arr[index]){
            swap(arr[left_child], arr[index]);
            index = left_child;
        } if ( right_child<size && arr[right_child]> arr[index]){
            swap(arr[right_child], arr[index]);
            index = right_child;
        } else{return;}
        }
        
    }

    void print_heap(int t)
    {   
        this->size = t;
        for (int i =1;i<=size; i++)
        {
            cout << arr[i]<<endl;
        }
    }

    void min_heapify (int in)
    {
        // for the given index, heapify it i.e make sure that it is the max (in case of max-heap) from its childs;
        // implementing heapify for min-heap:
        // all child > parent

        int smallest = in;
        int l_chld= in*2;
        int r_chld= in*2+1;
        
        if ( l_chld<=size && arr[l_chld]< arr[smallest]){
            smallest = l_chld;
        } 
        if ( r_chld<=size && arr[r_chld]< arr[smallest]){
            smallest = r_chld;
        } 
        if(smallest != in)
        {
            swap(arr[smallest], arr[in]);
            min_heapify(smallest);
            
        }
    }
    
    void max_heapify (int in)
    {
        int largest = in;
        int l_chld= in*2;
        int r_chld= in*2+1;
        
        if ( l_chld<=size && arr[l_chld]> arr[largest]){
            largest = l_chld;
        } 
        if ( r_chld<=size && arr[r_chld]> arr[largest]){
            largest = r_chld;
        } 
        if(largest != in)
        {
            swap(arr[largest], arr[in]);
            max_heapify(largest);
        }
    }

    void sort_heap()
    {
        // Build Heap : ( Creation of the heap from the given input array)
        for (int i = size/2; i>0; i --)
        {
            min_heapify(i);
        }

        int t=size;
        while (size >1)
        {
            swap(arr[size], arr[1]);
            size--;
            min_heapify(1);
        }
        print_heap(t);
    }
};

int main()
{   

    heap *abc = new heap();
    abc->arr[0]=-1;
    abc->arr[1]= 5;
    abc->arr[2]= 2;
    abc->arr[3]= 3;
    abc->arr[4]= 9;
    abc->arr[5]= 4;
    abc->size= 5;
    
    // abc->sort_heap();
    priority_queue<int> pq;  // This is max-heap
    pq.push(21);
    pq.push(27);
    pq.push(30);
    pq.push(10);

    // cout << pq.top();

    priority_queue<int, vector<int> , greater<int> > pqr;  // This is min-heap
    pqr.push(21);
    pqr.push(27);
    pqr.push(30);
    pqr.push(10);
    pqr.pop();
    cout << pqr.size();
    cout << pqr.top();

    // cout << abc->arr[3];
    // cout << abc->arr[3];
    // for (int i  = abc->size/2; i>0; i--)
    // {
    // abc->heapify(i);
    // }
    // abc->print_heap();
    // int b[10] = {-1, 5, 2, 3, 9 , 4};
    // int i = 1;
    // abc->heapify(b, i);
    // heap *h= new heap();
    // h->insert_to_heap(11);
    // h->insert_to_heap(7);
    // h->insert_to_heap(45);
    // h->insert_to_heap(30);
    // h->print_heap();
    // h->delete_heap();
    // h->insert_to_heap(80);
    // h->insert_to_heap(75);
    // h->delete_heap();
    // cout << "after deletion" <<endl;
    // h->print_heap();
    // heap h;  
    // h.insert_to_heap(7);
    // h.insert_to_heap(45);
    // h.insert_to_heap(30);
    // h.print_heap();

}