/*
 문제 : You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.
 
 On each turn, you may increase the value of any element by one. What is the minimum number of turns required?
 해결방법 : vector 배열 선언 후 입력값 저장. 이전 인덱스 값과 현재 인덱스 값 비교 후 작으면 둘의 차이만큼 더해줌. 요소와 turn 둘 다.
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    long long turn=0;
    int tmp;
    vector<int> arr;
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>tmp;
        arr.push_back(tmp);
    }
    
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            tmp=arr[i-1]-arr[i];
            turn+=tmp;
            arr[i]=arr[i-1];
        }
        //cout<<arr[i]<<" ";
    }
    cout<<turn<<"\n";

    return 0;
}
