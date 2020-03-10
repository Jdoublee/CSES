/*
 문제 : Your task is to divide the numbers 1,2,…,n into two sets of equal sum.
 해결 방법 : sum 이 홀수인 경우는 NO, 짝수인 경우는 YES. 이때, n이 홀수인 경우 짝수인 경우 나누어 짬.
 n이 짝수일 때, 맨앞과 맨뒤에서 숫자 하나씩 뽑아 한 쌍을 배열 a,b에 번갈아가며 넣어줌.
 n이 홀수일 때, 3일때를 제외하고는 배열 a에 맨 앞, 가운데, 맨 뒤 숫자 넣어줌. 이후 sum-tot<1+n 만족할 때까지 한 쌍씩 a에 넣어줌.
            조건 만족하면 나머지 숫자 배열 b에 넣어줌.
 코드 너무 지저분...
 int -> long long 으로 type 바꾸니 잘 작동.
 
 */

#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    vector<int> a(n,0),b(n,0);
    int acnt=0,bcnt=0;
    
    ll sum=(ll)n*(n+1)/2;
    
    if(sum%2!=0){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
    
    if(n%2==0){
        for(int i=0;i<n/2;i++){
            if(i%2==0){
                a[i]=a[n-1-i]=1;
                acnt+=2;
            }else{
                b[i]=b[n-1-i]=1;
                bcnt+=2;
            }
        }
        cout<<acnt<<endl;
        for(int i=0;i<n;i++)
            if(a[i]==1)
                cout<<i+1<<" ";
        cout<<endl;
        cout<<bcnt<<endl;
        for(int i=0;i<n;i++)
            if(b[i]==1)
                cout<<i+1<<" ";
    }else{
        if(n==3){
            a[0]=a[1]=1;
            acnt+=2;
            b[2]=1;
            bcnt++;
        }else{
            ll tot=0;
            int j;
            sum/=2;
            
            a[0]=1;
            a[n/2]=1;
            a[n-1]=1;
            acnt+=3;
            tot+=1+ n/2+1 + n;
            
            for(j=1;j<n-1;j++){
                if(sum-tot<1+n){
                    a[j]=1;
                    acnt++;
                    break;
                }
                a[j]=a[n-1-j]=1;
                acnt+=2;
                tot+=j+n-1-j+2;
            }
            for(int l=0;l<n;l++){
                if(a[l]==0){
                    b[l]=1;
                    bcnt++;
                }
            }
        }
        
        cout<<acnt<<endl;
        for(int i=0;i<n;i++)
            if(a[i]==1)
                cout<<i+1<<" ";
        cout<<endl;
        cout<<bcnt<<endl;
        for(int i=0;i<n;i++)
            if(b[i]==1)
                cout<<i+1<<" ";
    }
    
    cout<<endl;
    return 0;
}
