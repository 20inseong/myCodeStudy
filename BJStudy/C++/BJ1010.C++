#include<iostream>
using namespace std;
int main(){
    int Case, N, M;
    cin >> Case;
    for (int i = 0; i < Case; i++){
        cin >> N >> M;
        long long result=1;
        int L=1;
        for (int j = M; j > M-N; j--)
        {
            result = result*j;
            result = result/L;
            L++;
        }
    cout << result << endl;
    }
}