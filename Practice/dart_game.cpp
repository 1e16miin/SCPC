//
// Created by 1e16miin on 2021-06-24.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int answer;
int A, B, C, D, E, N, score;
double dist, theta, x, y;

int range(double phi){
    if (phi < 9 or phi >= 351) {
        return 6;
    } else if (9 <= phi and phi < 27) {
        return 13;
    } else if (27 <= phi and phi < 45) {
        return 4;
    } else if (45 <= phi and phi < 63) {
        return 18;
    } else if (63 <= phi and phi < 81) {
        return 1;
    } else if (81 <= phi and phi < 99) {
        return 20;
    } else if (99 <= phi and phi < 117) {
        return 5;
    } else if (107 <= phi and phi < 135) {
        return 12;
    } else if (135 <= phi and phi < 153) {
        return 9;
    } else if (153 <= phi and phi < 171) {
        return 14;
    } else if (171 <= phi and phi < 189) {
        return 11;
    } else if (189 <= phi and phi < 207) {
        return 8;
    } else if (207 <= phi and phi < 225) {
        return 16;
    } else if (225 <= phi and phi < 243) {
        return 7;
    } else if (243 <= phi and phi < 261) {
        return 19;
    } else if (261 <= phi and phi < 279) {
        return 3;
    } else if (279 <= phi and phi < 297) {
        return 17;
    } else if (297 <= phi and phi < 315) {
        return 2;
    } else if (315 <= phi and phi < 333) {
        return 15;
    }
    return 10;
}

int main(int argc, char** argv)
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int T, test_case;

    cin >> T;
    for(test_case = 0; test_case  < T; test_case++){
        answer = 0;
        cout << "Case #" << test_case+1 << endl;
        cin >> A >> B >> C >> D >> E;
        cin >> N;

        for (int i = 0; i < N; ++i){
            cin >> x >> y;
            dist = sqrt(x*x + y*y);
            theta = 0;
            theta = atan2(y, x) * 180/M_PI;
            if (theta < 0){
                theta += 360;
            }

            score = range(theta);
            if (dist <= A){
                answer += 50;
            }
            else if (dist >= B && dist <= C){
                answer += score * 3;
            }
            else if (dist >= D && dist <= E){
                answer += score * 2;
            }
            else if (dist > E){
                answer += 0;
            }
            else{
                answer += score;
            }
        }

        cout << answer << endl;
    }

    return 0;
}