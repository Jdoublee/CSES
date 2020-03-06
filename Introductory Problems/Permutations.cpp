/*
 문제 : A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.
 
 Given n, construct a beautiful permutation if such a permutation exists.
 해결방법 : n=2,3인 경우만 NO SOLUTION이고 나머지 경우는 n보다 작은 짝수 먼저 오름차순으로 전부 출력 후 홀수 오름차순으로 출력
*/
#include <iostream>
using namespace std;

int main(){
    int n,cnt=0,i=2;
    cin>>n;
    
    while(true){
        if(n==1){
            cout<<n;
            cnt++;
            break;
        }
        if(n==2||n==3){
            cout<<"NO SOLUTION";
            break;
        }
        if(i<=n){
            cout<<i<<" ";
            cnt++;
            i+=2;
            continue;
        }
        for(int i=1;cnt<n;i+=2){
            cout<<i<<" ";
            cnt++;
        }
        break;
    }
    cout<<"\n";
    
    
    return 0;
}
