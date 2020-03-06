/*
 문제 : A number spiral is an infinite grid whose upper-left square has number 1. Your task is to find out the number in row y and column x.
 해결방법 : 너무 화난다 휴
        (1,1), (2,2), (3,3) ... 에 해당되는 값의 규칙 먼저 찾고, 짝수 행(열)인지 홀수 행(열)인지에 따라 입력 값의 차이를 더해줄지 빼줄지 바뀜.
        for 문 안에서 for 문 한 번 더 써주니 복잡도가 커져서 TLE 떠서 등차수열 합 공식 이용.
        진짜 너무 화 난 문제. 다 써놓고 휴.
 */


#include <iostream>
#include <cstdlib>
using namespace std;
typedef long long ll;

int main(){
    int t;
    int x,y;
    cin>>t;
    
    for(int i=0;i<t;i++){
        cin>>y>>x;
        ll res=0;
        ll gap=abs(y-x);

        ll m=max(x,y);
        res=m*m-(m-1);
        /*for(int j=0;j<m;j++){
            res+=d;
            d=2*(j+1);
        }*/
        
        if(x<y){
            res=(y%2==0) ? res+gap : res-gap;
        }else if(x>y){
            res=(x%2==0) ? res-gap : res+gap;
        }
        
        cout<<res<<"\n";
        
    }
    
    
    return 0;
}
