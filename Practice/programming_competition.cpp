//
// Created by 1e16miin on 2021-06-24.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Answer;
int N;

int main(int argc, char** argv)
{
    int T, test_case;

    cin >> T;
    for(test_case = 0; test_case  < T; test_case++){
        Answer = 0;
        int max_score = 0;
        cout << "Case #" << test_case+1 << endl;
        cin >> N;
        vector<int> scores(N, N);

        for (int i = 0; i < N; ++i){
            cin >> scores[i];
        }

        sort(scores.begin(), scores.end());

        for (int i = 0; i < N; ++i){
            int score = scores[i] - i;
            if (score > max_score){
                max_score = score;
            }
        }

        for (int i = 0; i < N; ++i){
            if (scores[i] >= max_score){
                ++Answer;
            }
        }

        cout << Answer << endl;
    }

    return 0;
}