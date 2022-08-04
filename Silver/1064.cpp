//BaekJoon_1064.cpp
//평생사변형

/*
* 제한 시간 : 0ms / 2s
* 메모리 제한 : 2020KB / 128MB
* 정답 비율 : 31.594%
*/

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct Vertex {double x, y;};
Vertex a, b, c;

double abLength, acLength, bcLength, Length_1, Length_2, Length_3;


double getLength(Vertex a, Vertex b)
{
    double x = a.x - b.x;
    double y = a.y - b.y;
    
    return sqrt(x * x + y * y);
}


double getSlope(Vertex a, Vertex b)
{
    return abs(a.y - b.y) / abs(a.x - b.x);
}


int main() {

    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    
    if(getSlope(a, b) == getSlope(b, c))
    {
        cout << -1;
        
        return 0;
    }
    
    abLength = getLength(a, b);
    bcLength = getLength(b, c);
    acLength = getLength(a, c);
    
    Length_1 = (abLength + bcLength) * 2;
    Length_2 = (acLength + bcLength) * 2;
    Length_3 = (abLength + acLength) * 2;
    
    printf("%.16f", std::max({Length_1, Length_2, Length_3})
                  - std::min({Length_1, Length_2, Length_3}));
    
}
