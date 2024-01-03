#include<iostream>
#include<vector>
#include<set>
#include<iterator>
using namespace std;
void printm( set <string> &s){
    for(string  value: s){
        cout<< value <<endl;

    }
    for(auto it =s.begin(); it!=s.end(); ++it){
        cout<<(*it)<<endl;

    }
}

int main(){
    //set declaration
    set<string> s;
    s.insert("abc");
    s.insert("zsd");
    s.insert("bcd");
    auto it=s.find("abc");
    printm(s);

}