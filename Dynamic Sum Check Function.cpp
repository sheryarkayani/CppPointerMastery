
#include <iostream>
using namespace std;

bool func (int* arr , int size , int num){

   

    //calculate the sum of even indices of array
    bool result = false;
    for (int i =0 ; i<size ; i++){
        for (int j=0 ; j<size -1; j++){

            if (*(arr+i)+*(arr+j) ==num){
                result = true;
                break;
            }     
    }
    }

    return result;

}
int main()
{
    int size=0;
    cout<<"enter size of array"<<endl;
    cin>>size;

    int* arr;
    arr = new int[size];
     cout<<"Give values to the array"<<endl;

     for (int i =0 ; i<size ; i++){
        cin>> *(arr+i);
    }
    cout<<endl;
    
    cout<<"Enter number to compare"<<endl;
    int num;
    cin>>num;

   bool result;
    result =func(arr,size, num);

    if (result == true){
        cout<<"Sum of indices of array  is equal to number"<<endl;
    }
    else {
            cout<<"Sum of indices of array is not equal to number"<<endl;
        }


    delete arr;
    arr = NULL;


 return 0;
}