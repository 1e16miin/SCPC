#include <iostream>

using namespace std;

int Answer;
int N;

int main(int argc, char** argv)
{
    int T, test_case;

    cin >> T;
    for(test_case = 0; test_case  < T; test_case++){
        Answer = 0;
        cout << "Case #" << test_case+1 << endl;
        cin >> N;
        for (int i = 0; i < N; ++i){
            int number = 0;
            cin >> number;
            Answer = Answer ^ number;
        }


        cout << Answer << endl;
    }

    return 0;
}