#include <iostream>
using namespace std;
int main() {

   //Bubble Sort Algorithm
   int A[] = {2 ,4 ,3 , 1,5};

   int n = 5 ;
   for (int i = 0; i< n ; i++){     // for each phases
       for (int j =0 ; j<n-i;j++){  // comparing nums inside each phase
           if(A[j]>A[j+1]){
               swap(A[j] , A[j+1]);
           }
       }
   }


for (int i = 0 ; i<n ;i++){
    cout<<A[i]<<" " ;
}


return 0;
}
