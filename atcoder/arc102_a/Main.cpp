// https://atcoder.jp/contests/abc108/tasks/arc102_a
#include <iostream>
using namespace std;
main(){long long N,K,a,b,cnt;cin>>N>>K;a=N/K;b=K%2?0:(N+K/2)/K;cout<<a*a*a+b*b*b;}
