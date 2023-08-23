// Guilherme A. Pinto, OBI-2017, bits, DP O(NK)

#include <iostream>

#define MAX 1001
#define MOD 1000000007

using namespace std;

int dp[MAX];
int pot2[MAX];

int main(){
  int N,K;
  
  cin >> N >> K;

  pot2[0] = 1;
  for ( int i = 1; i <= N; i++ )
    pot2[i] = (pot2[i-1]*2)%MOD;
  
  for ( int i = 1; i <= N; i++ ){
    if ( i < K ) dp[i] = pot2[i];
    else if ( i == K ) dp[i] = pot2[i]-1;
    else {
      dp[i] = 0;
      for ( int k = 1; k <= K; k++ )
	dp[i] = (dp[i]+dp[i-k])%MOD;
    }
  }
  
  cout << dp[N] << endl;
  
  return 0;
}
