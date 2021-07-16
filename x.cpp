#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , c = 1;         // 'n' is length of string.
    cin >> n;
    string s;
    cin >> s;                // taking input of binary string.
    for(int i=0 ; i < s.size() ; i++){
          if(abs(s[i+1]-s[i])==1){
              c++;
          }
    }
    cout << (c/2) +1 ;
}