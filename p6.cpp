
#include<iostream>
using namespace std;

int* func (int * arr, int size){

    arr = new int[size];

    //assigning values to array elements

    for (int i =0 ; i<size ; i++){

        *(arr+i)= rand()%100;
    }

    cout<<"displaying value of array"<<endl;
    //displaying value of array
    for (int i =0 ; i<size ; i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;

    int smallest = 0;
    int secondSmallest =0;
    //finding the smallest and second smallest element in the array
for (int i = 0; i < size; i++) {
        if (*(arr + i) < smallest) {
            secondSmallest = smallest;
            smallest = *(arr + i);
        } else if (*(arr + i) < secondSmallest && *(arr + i) != smallest) {
            secondSmallest = *(arr + i);
        }
    }

    // Move the smallest and second smallest elements to the end
    for (int i = size - 1; i >= 0; i--) {
        if (*(arr + i) == smallest) {
            swap(arr[i], arr[size - 1]);
        } else if (*(arr + i) == secondSmallest) {
            swap(arr[i], arr[size - 2]);
        }
    }

    return arr;
}




int main()
{

    int* arr ;
    int size = 10;

    int* result = new int[size];
    
    result = func (arr, 10);

    cout<<"displaying value of  result"<<endl;
    for (int i = 0; i < size; i++){
        cout << *(result+i)  <<" "<< endl;
    }
    cout<<endl;

    delete result;
    result = NULL;
 return 0;
}