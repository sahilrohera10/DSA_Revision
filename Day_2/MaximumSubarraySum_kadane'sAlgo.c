#include <iostream>
#include <climits>
using namespace std;
int main() {

  //Maximum subarray sum

  //Kadane's Algorithm

  int A[] = {-4,1,3,-2,6,-1,4,-7};
  int n = 8;

  int sum = 0 ;
  int Max = INT_MIN ;

  for(int i =0 ; i<n ;i++){
    sum += A[i];
    Max = max(sum, Max);

    if(sum<0){
        sum = 0;
    }
  }


cout<< "the maximum subarray sum is = " << Max<<endl;

return 0;
}
