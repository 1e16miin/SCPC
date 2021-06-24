//
// Created by 1e16miin on 2021-06-24.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int answer;
int N, K, sum;

int main(int argc, char** argv)
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int T, test_case;

    cin >> T;
    for(test_case = 0; test_case  < T; test_case++){
        answer = 0;
        cout << "Case #" << test_case+1 << endl;
        cin >> N >> K;
        vector<int> numbers(N, 0);

        for (int i = 0; i < N; ++i){
            cin >> numbers[i];
        }
        sort(numbers.begin(), numbers.end());
        reverse(numbers.begin(), numbers.end());
        for (int i = 0; i < K; ++i){
            answer += numbers[i];
        }

        cout << answer << endl;
    }

    return 0;
}