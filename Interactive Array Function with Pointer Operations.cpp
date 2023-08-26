#include<iostream>
using namespace std;


int func (int* arr , int size){

   

    //sort array in ascending order


    for (int i =0 ; i <size ; i++){

        int temp =0;

        for (int j =0 ; j<size-i-1 ; j++){

                if(* (arr+i)>*(arr+j)){
                    temp = *(arr+i);
                    *(arr+i) = *(arr+j);
                    *(arr+j) = temp;
                }
        }


    }

    //print array in reverse order
    for (int i =size-1; i<0 ; i--){
        cout<< *(arr+i)<<" ";
    }
    cout<<endl;

    //print adress for array
    cout<<"Adress for array : ";
     for (int i =size-1; i<0 ; i--){
        cout<< (arr+i)<<" ";
    }
    cout<<endl;

    //calculate the sum of even indices of array

    int sum =0;
    for (int i =0 ; i<size ; i++){
        if (i%2==0){
            sum+= *(arr+i);
        }
    }

    return sum;


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
    
   

    cout<<"Sum of even indices of array : "<<func(arr,size)<<endl;

    delete arr;
    arr = NULL;


 return 0;
}