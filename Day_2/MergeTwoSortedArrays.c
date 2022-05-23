#include <iostream>
using namespace std;
int main() {

//Merge two sorted arrays

int A[] = {1 , 3 ,5 ,7};
int B[] = {2 , 4 , 6  , 10};
int m = 4 ;
int n =4 ;

int C[m+n];


int  i =0 ;
int j =0;
int k =0 ;

while(i!=m && j != n){
    if(A[i]<B[j]){
        C[k] = A[i];
        k++;
        i++;
    }

    else if (A[i]>B[j]){
        C[k] = B[j];
        k++;
        j++;
    }
}

if(i!=m){
    while(i!=m){
        C[k] = A[i];
        k++;
        i++;
    }
}
else{
    while(j!=n){
        C[k] = A[i];
        k++;
        j++;
    }
}


for(int i =0 ; i < m ; i++){
    cout<<A[i] <<" " ;
}
cout<<endl;

for(int j =0 ; j <n ; j++){
    cout<<B[j] <<" " ;
}
cout<<endl;


for(int k =0 ; k < m+n ; k++){
    cout<<C[k] <<" " ;
}
cout<<endl;

return 0 ;
}
