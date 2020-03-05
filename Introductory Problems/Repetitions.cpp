/*
 문제 : You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
 해결방법 : 이전인덱스값 저장해놓고 현재인덱스값과 비교 후 같으면 len++해주고 max와 비교
 더 짧게 -> string 사용
 for(i=0;i<str.size();i++){
    if(str[i]==str[i+1])
        len++;
    else{
        max_len=max(max_len,len);
        len=0;
    }
 }
 */

#include <iostream>
using namespace std;

int main(){
    int i=0,len=0,max=0;
    char str[1000000];
    
    cin>>str;
    char tmp=str[0];
    while(str[i]!='\0'){
        if(tmp==str[i]){
            len++;
            tmp=str[i++];
            if(max<len)
                max=len;
            continue;
        }
        tmp=str[i++];
        len=1;
        if(max<len)
            max=len;
    }
    cout<<max<<"\n";
    
    return 0;
}
