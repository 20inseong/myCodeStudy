#include<iostream>
using namespace std;
//if 큰 ver
int main(){
    int IH,IM,IT;
    int H, M;
    cin >> IH >> IM;
    cin >> IT;

    if(IM+IT>59){
        H = (IH+(IM+IT)/60)%24;
        M = (IM+IT)%60;
    }
    else{
        H = IH;
        M = IM+IT;
    }
    cout << H << " " << M;
    return 0;
}
// if 작은 ver
// int main(){
//     int IH,IM,IT;
//     int H, M;
//     cin >> IH >> IM;
//     cin >> IT;

//     if(IM+IT<60){
//         H = IH;
//         M = IM+IT;
//     }
//     else{
//         H = (IH+(IM+IT)/60)%24;
//         M = (IM+IT)%60;
//     }
//     cout << H << " " << M;
//     return 0;
// }



//주의해야할 점 : if문을 >(크다) 로 작성할 시 60을 쓰면 0이 60으로 나오기 때문에
//그냥 합한 이후에 다시 작성해주는 것이 편하다.
//그리고 마지막 결과를 제출할 때 형식이 같으면 그냥 마지막에 한번에 출력되게 하는 것이 사이트가 더 잘 알아먹는다.