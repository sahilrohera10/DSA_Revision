#include <iostream>
using namespace std;
int main() {

   //Selection Sort Algorithm

    int A[] = {2 ,4 ,3 , 1,5};

   int n = 5 ;

   for (int i = 0; i< n-1 ;i++){  //number of phases will be n-1
       int min = i ;                //let 1st idx has the min value
       for(int j = i+1 ;j < n; j++){  // finding min value elment in each phase
             if(A[j]<A[min]){
                 min = j;
             }
       }

    // cout<<"min =>" <<A[min] <<endl;
       swap( A[i] , A[min]);  // positioning the smallest values to its correct positions
   }


   for (int i = 0 ; i<n ;i++){
    cout<<A[i]<<" " ;
}

return 0 ;
}
