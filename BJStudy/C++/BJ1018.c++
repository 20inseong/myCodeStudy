#include<iostream>
#include<vector>
using namespace std;
//현재 미완성! 오늘 코딩은 여기까지!

int main(){
    int a, b, c, d, BWcnt=0, WBcnt=0;
    vector<vector<char>> Chase;
    vector<char> chase;
    vector<vector<int>> BW;
    vector<int> bw;
    vector<vector<int>> WB;
    vector<int> wb;

    cin >> a >> b;
    c=a-8;
    d=b-8;

    for(int i=0; i<b; i++){
        Chase.push_back(chase);
        for (int j=0; j<a; j++){
            char C;
            cin >> C;
            Chase[i].push_back(C);
        }
    }

    for(int i=0; i<b; i++){
        BW.push_back(bw);
        WB.push_back(wb);
        for (int j=0; j<a; j++){
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
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                BWcnt += BW[i][j];
                WBcnt += WB[i][j];
            }
        }
    }
    else{
        for(int m = 0; m < c+1; m++){
            for(int n=0; n < d+1; n++){
                for(int i=0; i<8; i++){
                    for(int j=0; j<8; j++){
                        BWcnt += BW[i][j];
                        WBcnt += WB[i][j];
                    }
                }

                
            }   
        }
    }  

    

    // for(int i=0; i<b; i++){
    //     cout << endl;
    //     for (int j=0; j<a; j++){
    //         cout << Chase[i][j] << " ";
    //     }
    // }

    // for(int i=0; i<b; i++){
    //     cout << endl;
    //     cout << endl;
    //     for (int j=0; j<a; j++){
    //         cout << BW[i][j] << " ";
    //     }
    // }
    
    // for(int i=0; i<b; i++){
    //     cout << endl;
    //     cout << endl;
    //     for (int j=0; j<a; j++){
    //         cout << WB[i][j] << " ";
    //     }
    // }
    // cout << BWcnt << " " <<WBcnt;
}