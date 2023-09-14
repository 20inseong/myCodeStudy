#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// 주석처리 된 것들은 중간 결과물을 확인하기 위한 조치
// 앞으로 코딩하는 법
// 1. vscode안에서 짤 코드 기능,변수를 글로 작성한다.
// 2. 그걸 기반으로 코드를 짠다.
// 3. 다 짠 이후에 내가 참고 할 수 있는 코드를 옮긴다.
// https://cocoon1787.tistory.com/154를 참고하여 코드를 최적화하려 했으니 현재 실패.

int main(){
    int col, row, c, d, BWcnt=0, WBcnt=0;
    vector<vector<char>> Chase;
    vector<char> chase;
    vector<vector<int>> BW;
    vector<int> bw;
    vector<vector<int>> WB;
    vector<int> wb;
    vector<int> Bcnt;
    vector<int> Wcnt;

    cin >> col >> row;
    c=col-8;
    d=row-8;

    for(int i=0; i<col; i++){
        Chase.push_back(chase);
        for (int j=0; j<row; j++){
            char C;
            cin >> C;
            Chase[i].push_back(C);
        }
    }

    for(int i=0; i<col; i++){
        BW.push_back(bw);
        WB.push_back(wb);
        for (int j=0; j<row; j++){
            if(j%2==0&&i%2==0){
                if(Chase[i][j] == 'B'){
                    BW[i].push_back(0);
                    WB[i].push_back(1);
                }
                else{
                    BW[i].push_back(1);
                    WB[i].push_back(0);
                }
            }
            else if(j%2==1&&i%2==1){
                if (Chase[i][j] == 'B')
                {
                    BW[i].push_back(0);
                    WB[i].push_back(1);
                }
                else{
                    BW[i].push_back(1);
                    WB[i].push_back(0);
                }
            }
            else if(j%2==0&&i%2==1){
                if (Chase[i][j] == 'W')
                {
                    BW[i].push_back(0);
                    WB[i].push_back(1);
                }
                else{
                    BW[i].push_back(1);
                    WB[i].push_back(0);
                }
            }
            else if(j%2==1&&i%2==0){
                if (Chase[i][j] == 'W')
                {
                    BW[i].push_back(0);
                    WB[i].push_back(1);
                }
                else{
                    BW[i].push_back(1);
                    WB[i].push_back(0);
                }
            }
        }
    }

    if(c==0&&d==0){
        for(int i=0; i<col; i++){
            for(int j=0; j<row; j++){
                BWcnt += BW[i][j];
                WBcnt += WB[i][j];
            }
        }
        cout << BWcnt << " " << WBcnt << endl;
        int result = (BWcnt < WBcnt) ? BWcnt : WBcnt;
        cout << result;
    }
    else{
        for(int m = 0; m < c+1; m++){
            for(int n=0; n < d+1; n++){
                BWcnt=0;
                WBcnt=0;
                for(int i=m; i<m+8; i++){
                    for(int j=n; j<n+8; j++){
                        BWcnt += BW[i][j];
                        WBcnt += WB[i][j];
                    }
                }
                // cout << BWcnt << " " << WBcnt << endl;
                Bcnt.push_back(BWcnt);
                Wcnt.push_back(WBcnt);
            }
        }
    }
    sort(Bcnt.begin(), Bcnt.end());
    sort(Wcnt.begin(),Wcnt.end());
    // for(int i=0; i< (c+1)*(d+1) ; i++){
    //     cout << Bcnt[i] << " " << Wcnt[i];
    //     cout << endl;
    // }
    if(Bcnt[0]<Wcnt[0]){
        cout << Bcnt[0] << endl;
    }
    else{
        cout << Wcnt[0] << endl;
    }

    // for(int i=0; i<col; i++){
    //     cout << endl;
    //     for (int j=0; j<row; j++){
    //         cout << Chase[i][j] << " ";
    //     }
    // }

    // cout << endl;
    // cout << endl;
    // for(int i=0; i<col; i++){
    //     cout << endl;
    //     for (int j=0; j<row; j++){
    //         cout << BW[i][j] << " ";
    //     }
    // }
    
    // cout << endl;
    // cout << endl;
    // for(int i=0; i<col; i++){
    //     cout << endl;
    //     for (int j=0; j<row; j++){
    //         cout << WB[i][j] << " ";
    //     }
    // }
}