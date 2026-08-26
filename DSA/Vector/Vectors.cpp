#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int>vec={1,2,3};//0
    // cout<<vec[0];
    vector<int>vec(3,0);
    //where 3 is size of the vector and 0 is the index value of the vector har jagah pe 0,0,0
    // cout<<vec[0]<<endl;
    // cout<<vec[1]<<endl;
    // cout<<vec[2]<<endl;
 vector<char>vix={'a','b','c','d','e'};
//for each loop
//for(iterator :vector name)
for(char val:vix){
    cout<<val<<endl;
}


    return 0;
}