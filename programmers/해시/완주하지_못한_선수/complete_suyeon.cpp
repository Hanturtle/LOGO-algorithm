#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    int flag = 0;
    
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    for(int i = 0; i < participant.size(); i++) {
        if(participant[i] != completion[i]) {
            answer = participant[i];
            break;
        }
    }
    
    return answer;
}
