//BaekJoon_12791
//Starman

/*
* 제한 시간 : 0ms / 1s
* 메모리 제한 : 2024KB / 128MB
* 정답 비율 : 64.211%
*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int q, s, e;
    multimap<int, string>m;
    
    cin >> q;
    
    m.insert(make_pair(1967, "DavidBowie"));
    m.insert(make_pair(1969, "SpaceOddity"));
    m.insert(make_pair(1970, "TheManWhoSoldTheWorld"));
    m.insert(make_pair(1971, "HunkyDory"));
    m.insert(make_pair(1972, "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars"));
    m.insert(make_pair(1973, "AladdinSane"));
    m.insert(make_pair(1973, "PinUps"));
    m.insert(make_pair(1974, "DiamondDogs"));
    m.insert(make_pair(1975, "YoungAmericans"));
    m.insert(make_pair(1976, "StationToStation"));
    m.insert(make_pair(1977, "Low"));
    m.insert(make_pair(1977, "Heroes"));
    m.insert(make_pair(1979, "Lodger"));
    m.insert(make_pair(1980, "ScaryMonstersAndSuperCreeps"));
    m.insert(make_pair(1983, "LetsDance"));
    m.insert(make_pair(1984, "Tonight"));
    m.insert(make_pair(1987, "NeverLetMeDown"));
    m.insert(make_pair(1993, "BlackTieWhiteNoise"));
    m.insert(make_pair(1995, "1.Outside"));
    m.insert(make_pair(1997, "Earthling"));
    m.insert(make_pair(1999, "Hours"));
    m.insert(make_pair(2002, "Heathen"));
    m.insert(make_pair(2003, "Reality"));
    m.insert(make_pair(2013, "TheNextDay"));
    m.insert(make_pair(2016, "BlackStar"));
    
    for(int i = 0 ; i < q; i++){
        cin >> s >> e;
        
        int result = 0;
        
        
        for(auto&p : m){
            if(s <= p.first && e >= p.first){
                result++;
            }
        }
        cout << result << '\n';
        
        for(auto&p : m){
            if(s <= p.first && e >= p.first){
                cout << p.first << ' ' << p.second << '\n';
            }
        }
        
    }
    return 0;
}
