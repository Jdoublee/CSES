/*
 문제 : Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one.
 해결방법 : 문제에 주어진대로 홀짝 경우 나누어 작성. 
*/
#include <iostream>
using namespace std;
int main() {
    long long n;
    cin>>n;
    
    while(true){
        cout<<n<<" ";
        if(n==1)
            break;
        if(n%2==0)
            n/=2;
        else
            n=n*3+1;
    }
    cout<<"\n";
    
    
    return 0;
}
