#include <iostream>
#include <vector>
using namespace std;

int main(){
    int count,max = 0;
    cin>>count;
    
    vector<int> scan(count);
    for (int i = 0;i<count;i++){
        cin>>scan[i];
        if(scan[i] > max){
            max = scan[i];
        }
    }

    vector<bool>found(max+1,false);
    for(int i = 0;i<count;i++){
        found[scan[i]] = true;
    }
    
    vector<int>odd, even;
    for(int i = 1;i<=max;i++){
        if(!found[i]){
            if(i%2 == 1){
                odd.push_back(i);
            }else
                even.push_back(i);
        }
    }
    
    for(int i = 0;i<odd.size();i++){
        if(i > 0){
            cout<<" ";
        }
        cout<<odd[i];
    }
    cout<<endl;
    
    for(int i = 0;i<even.size();i++){
        if(i>0){
             cout<< " ";
        }
        cout<<even[i];
    }
    cout<<endl;
    
    return 0;
}


