/*
 문제 : You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.
 해결방법 : 1) 배열 선언 후 0으로 초기화 및 n번째 인덱스에 -1 저장. 입력된 값에 해당되는 배열 인덱스 요소 값 1로 변경. 0인 요소의 인덱스 출력. -> 100이상 값에서 런타임에러 발생. 다른 방법 고안하다 결국 검색.
        2) 1부터 n까지의 합 구해서 입력된 값들의 합 빼면 Missing Number 구할 수 있음.
*/
#include <iostream>
 
using namespace std;
 
int main(){
    int n,tmp;
    long long total,sum=0;
    
    cin>>n;
    total=n*(n+1)/2;
    
    for(int i=0;i<n-1;i++){
        cin>>tmp;
        sum+=tmp;
    }
    long long res=total-sum;
    while(res<0){
        res+=(long long)2147483648;
        //오버플로우 해결 위해 int 사이즈 2147483647+1 만큼 더해줌
        //양수값 제대로 나오면 출력
    }
        
    cout<<res<<"\n";
    
    return 0;
}
 
