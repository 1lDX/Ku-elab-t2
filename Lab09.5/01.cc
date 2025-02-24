#include <iostream>
using namespace std;

int main() {
    int n, time = 0;
    cin>>n;
    
    while(n>0){
        if(n%2==0) {  
            n/=2;
        }else{  
            n-=1;
        }
        time++;
    }
    
    cout <<time;
    return 0;
}
