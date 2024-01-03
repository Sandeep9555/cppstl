#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={2,3,4,5,6};
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    vector<int>:: iterator it;
     for(it=v.begin();it!=v.end();++it){
        cout<<(*it)<<" ";
     }
    cout<<endl;
    vector<pair<int,int>>v_p={{1,2},{2,3},{3,4}};
    for(auto  &value:v_p){
        cout<<value.first<<" "<<value.second;
    }
    auto a=1.0;
    cout<<a<<endl;
     


}