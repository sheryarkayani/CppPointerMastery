#include<iostream>
using namespace std;


int* func (int * arr, int size, int num1, int num2){

//sort array in ascending order

 for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - i - 1; j++) {
        if (*(arr + j) > *(arr + j + 1)) {
            int temp = *(arr + j);
            *(arr + j) = *(arr + j + 1);
            *(arr + j + 1) = temp;
        }
    }
}


    //finding place of num2 in array
    int location =0;
    for (int i =0 ; i <size ; i++){
        if(*(arr+i)==num2){
           location= i; 
        }
    }

    //inserting num1 at location
    *(arr+location) = num1;
    //sort array again
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

    return arr;

}
int main()
{

    int* arr = new int[5];
    for (int i =0 ; i <5 ; i++){
        arr[i] = rand()%6;
    }

   int*arr2 =new int [5];
   
   arr2=  func (arr, 5, 3, 2);

   //display value of arr
   for (int i =0 ; i<5 ; i++)
{
    cout<<*(arr+i)<<" ";
}

   //display value of arr2
   for (int i =0 ; i<5 ; i++)
   {
       cout<<*(arr2+i)<<" ";
   }

 return 0;
}