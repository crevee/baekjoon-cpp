//BaekJoon_21608
//상어 초등학교

/*
* 제한 시간 : 4ms / 1s
* 메모리 제한 : 2156KB / 1024MB
* 정답 비율 : 40.446%
*/

#include <iostream>
#include <vector>

using namespace std;

int n;
int dir[4][2]{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

vector<vector<int>> v;

void FindSeat(int idx, vector<int> p[]){
    int near[n][n], like[n][n];
    int max = -1, m_row = 0, m_col = 0, f_cnt = 0, cnt = 0;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < n ; j++){
            if(v[i][j]){
                continue;
            }
            cnt = 0;
            f_cnt = 0;
            
            for(int k = 0; k < 4; k++){
                int nx = i + dir[k][0], ny = j + dir[k][1];
                
                if(nx < 0 || nx >= n || ny < 0 || ny >= n){
                    continue;
                }
                if(!v[nx][ny]){
                    cnt++;
                }
                for(int h = 0; h < 4; h++){
                    if(v[nx][ny] == p[idx][h]){
                        f_cnt++;
                    }
                }
            }
            
            near[i][j] = cnt;
            like[i][j] = f_cnt;
            
            if(max < f_cnt){
                max = f_cnt;
                m_row = i;
                m_col = j;
            }
            else if(max == f_cnt){
                if(near[i][j] > near[m_row][m_col]){
                    m_row = i;
                    m_col = j;
                }
                else if(near[i][j] == near[m_row][m_col]){
                    if(i < m_row){
                        m_row = i;
                        m_col = j;
                    }
                    else if(i == m_row){
                        if(j < m_col){
                            m_row = i;
                            m_col = j;
                        }
                    }
                }
            }
        }
    }
    v[m_row][m_col] = idx;
}

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int score[5]{0, 1, 10, 100, 1000};
    int idx, tmp;
    
    cin >> n;
    
    vector<int> p[n * n + 1];
    v.resize(n, vector<int>(n, 0));
    
    for(int i = 0; i < n * n; i++){
        cin >> idx;
        
        for(int j = 0; j < 4; j++){
            cin >> tmp;
            p[idx].emplace_back(tmp);
        }
        FindSeat(idx, p);
    }
    
    int result = 0, value = 0, cnt = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            value = v[i][j];
            cnt = 0;
            
            for(int k = 0; k < 4; k++){
                int nx = i + dir[k][0], ny = j + dir[k][1];
                
                if(nx < 0 || nx >= n || ny <0 || ny >= n){
                    continue;
                }
                
                for(int h = 0; h < 4; h++){
                    if(v[nx][ny] == p[value][h]){
                        cnt++;
                    }
                }
            }
            result += score[cnt];
        }
    }
    cout << result;
   
    return 0;
}
