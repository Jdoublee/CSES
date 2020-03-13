/*
 문제 : Your task is to calculate the number of bit strings of length n.
 해결방법 : 처음엔 단순하게 pow(2,n) 사용하려했으나 n이 커지면 무한대로 출려되어버려 modulo연산의 특징 활용하여 while문 구성.
 2씩 곱해주다 10^9+7보다 커지면 modulo연산 시행후 다시 2씩 곱해줌. 반복.
 */
#include <iostream>
using namespace std;

int main() {
    int n;
    int div=1000000007;
    cin>>n;
    int sum=2;
    int i=1;
    while(i<n){
        i++;
        sum*=2;
        if(sum>div)
            sum%=div;
    }
    cout<<sum<<"\n";
    
    return 0;
}
