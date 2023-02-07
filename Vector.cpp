#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> myVector={1,2,3,4};

     myVector.pop_back();   
    for(int i=0; i< myVector.size(); i++){
    	cout<< myVector[i]<<" ";	
    }
    cout<<endl;
    // if(myVector.empty())cout<<"Empty";
    // else cout<<"Not Empty";
   // cout<<myVector.size()<<endl;
   // cout<<myVector.back()<<endl;
    return 0;
}
