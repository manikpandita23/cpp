#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int sortArr(vector<int>&arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
int main(){
    vector<int>arr1 = {2,5,1,3,0};
    vector<int>arr2 = {8,10,5,7,9};
    cout<<"Largest element:"<<sortArr(arr1)<<endl;
    cout<<"Larges element: "<<sortArr(arr2);
}
