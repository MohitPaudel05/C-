#include <iostream>
using namespace std;
//first element is  sorted we have to comapre ani greater xa vani right ma shift gardai jani less xa vani left
void insertionSort( int arr[],int n){

    for(int i =1; i<n; i++){
           //nextelemet to be inserted 
        int nextElement = arr[i]; 
          //comparing with the previous element 
        int j = i-1;
                      //  4  >  3
        while (j>=0 && arr[j]>nextElement){
            arr[j+1] = arr[j];
            j--;
            
        }
        arr[j+1] = nextElement;

    }
}




int main(){

    int arr[] = {4,3,5,2,1,-7};
            //   0 1 2 3 4 5 
    int size = sizeof(arr) / sizeof (arr[0]);

    insertionSort(arr,size);

    cout<<" Insertion Sort array ......"<<endl;

    for (int i =0;i<size ;i ++){
        cout <<arr[i]<< " ";
    }
    cout <<endl;
    return 0;
}