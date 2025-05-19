// This code will find a given number , Can we write that number as 2 ^ k

#include<iostream>
using namespace std ;

bool power_of_two(int n){
     return n && !(n & (n-1)) ;
}

int main(){
     int n;
     cin >> n;
     if (power_of_two(n)){
          cout << "YES\n";
     }
     else {
          cout << "NO\n";
     }
     return 0;
}