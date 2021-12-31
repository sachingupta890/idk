#include<iostream>
using namespace std;

//bad practicr 
int& fuc(int a){
    int num = a;
    int& ans = num;
    return ans;
}
int* fun(int n ){
    int* ptr = &n;
    return ptr;
}

void update2(int &n){
    n++;
}

void update1(int n){
    n++;
    cout<<"value of n in function is "<<n<<endl;
}
int main(){
/*
    
    int i = 5;
    //create a ref variable

    int &j = i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<j<<endl;
    cout<<j<<endl;

    */

   int n = 5;
   cout<<"before value is "<<n<<endl;
   //update1(n);
   update2(n);
   cout<<"after value "<<n<<endl;
   fun(n);





    return 0;
}