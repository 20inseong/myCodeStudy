#include<iostream>
using namespace std;
int main(){
    int N, M, Arr[15000]={0, }, cnt=0;
    cin >> N >> M;
    for(int i=0;i<N;i++){
        cin >> Arr[i];
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(Arr[i]+Arr[j] == M){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}

// 내가 잘한 점
// 1. 문제 접근 방식이 맞았다.
// 2. 틀린 이후에는 사용한 재료를 제외하는 등 현실적인 생각을 해봤다.
// 내가 잘못한 점
// 1. 모든 경우의 수를 생각해보지 못했다. 그래서 자기 자신을 더했을 때 값이 맞으면 정답이라는 기괴한 답을 내놓는 코드를 작성하게 되었다.