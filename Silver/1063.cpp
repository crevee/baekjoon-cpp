//BaekJoon_1063
//킹


/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 40.410%
*/

#include <iostream>
#include <string>

using namespace std;

string s[8]{"R", "L", "B", "T", "RT", "LT", "RB", "LB"};

int dx[8]{1, -1, 0, 0, 1, 0-1, 1, -1};
int dy[8]{0, 0, -1, 1, 1, 1, -1, -1};

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string king, dol, tmp;
    int king_x, king_y, dol_x, dol_y, n;
    
    cin >> king >> dol >> n;
    
    king_x = king[0] - 'A' + 1;
    king_y = king[1] - '0';
    
    dol_x = dol[0] - 'A' + 1;
    dol_y = dol[1] - '0';
    
    for(int i = 0 ; i < n; i++){
        cin >> tmp;
        
        for(int j = 0; j < 8; j++){
            if(tmp == s[j]){
                int nx = king_x + dx[j];
                int ny = king_y + dy[j];
                
                if(nx <= 0 || ny <= 0 || nx >= 9 || ny >= 9){
                    break;
                }
                if(nx == dol_x && ny == dol_y){
                    int nnx = dol_x + dx[j];
                    int nny = dol_y + dy[j];
                    
                    if(nnx <= 0 || nny <= 0 || nnx >= 9 || nny >= 9){
                        break;
                    }
                    dol_x += dx[j];
                    dol_y += dy[j];
                }
                king_x += dx[j];
                king_y += dy[j];
            }
        }
    }
    cout << char(king_x + 'A' - 1) << king_y << '\n';
    cout << char(dol_x + 'A' - 1) << dol_y;
    
    return 0;
}
