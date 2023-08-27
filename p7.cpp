#include<iostream>
#include <cstring>
using namespace std;

bool func (const char* c1 , const char*c2){

int sizec1 = strlen(c1);

int sizec2 = strlen(c2);

bool found = false;

bool checked [sizec2]= {false};

for(int i=0;i<sizec1;i++){
    for(int j=0;j<sizec2;j++){
        if(*(c1+i)== *(c2+j) &&!checked[j]){
            found = true;
            checked[j] = true;
            break;
        }
    }

}

if (found ) return true;

else {
return false;
}


}


int main()

{
 
 bool result  = false;

 const char* c1 = "a gentleman";
 const char* c2 = "elegant man";

 result = func (c1 ,c2);

 cout<<"the result is "<<result<<endl;
 
 
 return 0;
}