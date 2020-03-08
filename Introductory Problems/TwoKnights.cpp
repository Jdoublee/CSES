#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin>>n;
    
    for(ll i=1;i<=n;i++){
        ll all_case=i*i * (i*i-1) /2;
        //첫번째 나이트 놓을 수 있는 경우 X 두번째 나이트 놓을 수 있는 경우의 수 / 2(색 구분 안함)
        ll attack_case=4*(i-2)*(i-1);
        // 2x3 과 3x2보드의 마주보는 귀퉁이에 나이트 존재하면 서로 공격 가능.
        // 4개의 모퉁이 있으므로 4*( (n-2)*(n-1) + (n-1)*(n-2) ) / 2
        // 두 나이트의 색 구분 안 하므로 2로 나눠줌.
        cout<<all_case-attack_case<<"\n";
    }
        
    return 0;
}
