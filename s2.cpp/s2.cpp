#include<iostream>
#include <vector>

using namespace std;
void printVec(vector<int> v){
    cout<<v.size();
    for (int i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<"";

    }
    cout<<endl;
}

int main(){
    vector<int> v;
    cout<<"enter the number";
    int n;
    cin>> n;
    for(int i=0;i<n;i++){
        cout<<"enter the number";
        int x;
        cin>> x;
        printVec(v);
        v.push_back(x);//o1



    }

}