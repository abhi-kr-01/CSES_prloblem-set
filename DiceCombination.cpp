#include<iostream>
#include<vector>
using namespace std;

int MOD = 1e9+7;

//iterative dp
void solve1(){
    int n;
    cout << "Enter the number:" ;
    cin >> n;
    vector<int> dp(n+1);

    // state 
    // dp[i] = number ways to make a sum of i

    dp[0] = 1;
    for(int i = 1; i<=n;i++){
        for(int j = 1;j<=6;j++){
            if(j <= i){
                dp[i] = (dp[i] + dp[i-j]) % MOD;
            }
        }
    } 
    // final subscri[tion
    cout << dp[n] << endl;
}

void solve2(){
    int n;
    cout << "Enter the number:" ;
    cin >> n;
    vector<int> dp(n+1);

    // state 
    // dp[i] = number ways to make a sum of n;
    //such that the current sum is i;

    dp[n] = 1;
    for(int i = n-1; i >= 0;i--){
        for(int j = 1;j<=6;j++){
            if(j <= n-i){
                dp[i] = (dp[i] + dp[i+j]) % MOD;
            }
        }
    } 
    // final subscri[tion
    cout << dp[0] << endl;
}

int main(){
    solve2();
}