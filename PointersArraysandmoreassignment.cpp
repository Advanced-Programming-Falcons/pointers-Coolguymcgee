#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int num;
    cout<<"Give me a number!";
    cin>>num;
    int* array = new int[num];
    
    cout<<array<<endl;

    for (int i=0;i<num;i++){
        array[i]=i*2;  
    }
    int* temp_array = array;
    int* temp_array2 = array;
    for (int i=0;i<num;i++){
        cout<<"memory address : "<< temp_array << endl;
        cout << "value: " << *temp_array << endl;
        temp_array++;
    }
    for (int i=0;i<num;i++){
        *temp_array2=*temp_array2+5;
        cout<<*temp_array2<<endl;
        *temp_array2++;
        }
    int* temp_array3=array;
    for (int i=1;i<num;i++){
        *temp_array3++;
        *temp_array3=*temp_array3;
    }
      for (int i=0;i<num;i++){
        *temp_array3--;
    }
    *temp_array3=5;
    *temp_array3++;
    *temp_array3++;
    for (int i=1;i<num;i++){
        cout<<*temp_array3<<endl;
        *temp_array3++;
 }
 for (int i=0;i<num;i++){
        *temp_array3--;
 }
 cout<<*temp_array3<<endl;
    cout<<array<<endl;



    delete[] array;
    return 0;
}