#include<iostream>
using namespace std;

class SelectionSort
{
    public: 
    int arr[12] = {1,3,6,22,8,9,25,12,15,16,20,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min_index,temp;
    void selection()
    {
        for(int i = 0 ;i<size-1;i++)
        {
            min_index = i;

            for(int j= i+1;j<size;j++)
            {
                if(arr[j]<arr[min_index])
                {
                    min_index = j;
                }
            }
            temp = arr[min_index];
            arr[min_index]= arr[i];
            arr[i]= temp;
        }
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";    
        }
        
    }

};
int main()
{
    SelectionSort ss;
    ss.selection();
    ss.display();
    return 0;
}