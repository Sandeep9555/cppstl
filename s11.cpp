#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<utility>
using namespace std ;

 void print(map<int,string> &m)
    {
        cout <<m.size()<<endl;
        for(auto &pr :m){

         cout<<pr.first <<" "<< pr.second <<endl;
    }

 }
int main(){
    map<int,string> m;
    m[1]="sbc";
    m[5]="abc";
    m[3]="acd";
    m.insert({4,"sfg"});
    print(m);  

}