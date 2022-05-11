#include <iostream>
using namespace std;
int main() {

    //Insertion Sort Algorithm

     int A[] = {2 ,4 ,3 , 1,5};

   int n = 5 ;

for (int i =1;i<n ;i++){  //in every phase , place the element from an unsorted array to the sorted array in its correct position
    if(A[i-1]>A[i]){
               for(int j = i ; j>0 ;j--){  //placing the lement to its correct position
                      if(A[j-1]>A[j]){
                            swap(A[j] , A[j-1] );
                         }
              }
    }
}

   for (int i = 0 ; i<n ;i++){
    cout<<A[i]<<" " ;
}


return 0;
}
