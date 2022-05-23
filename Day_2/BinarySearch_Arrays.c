#include <iostream>
using namespace std;
int main() {

   // binary search

   //the given array should be sorted

   int A[] = {1 , 2 , 3 , 4 , 5} ;
   int t = 2;
   int n = 5;

   int s =0;
   int e = n-1 ;
   int flag = 0 ;
   while(s<=e){
       int m = (s+e)/2 ;
       if(m>t){
           e = m-1;
       }
       else if(m<t){
           s = m+1;
       }
       else{
           flag = 1 ;
           break;
       }
   }

   flag ? cout<<"target found" :
          cout<<"target not found" ;
return 0;
}
z
