#include <bits/stdc++.h>
using namespace std;
bool if_biggest(int number, int start_index, int end_index, vector<int> arr){
    for(int i =start_index; i< end_index; i++){
         if(number <= arr[i]) return false;
    }
    return true;
   
}
int NumberOfRecordBreakingDays(int numberOfDays, vector<int> visitors) {
   int number = 0;
   int max = 0;
  for(int i =0; i< visitors.size(); i++){
     if((i == 0 || visitors[i] > max) &&  (i == visitors.size()-1 || visitors[i] >visitors[i+1] ))
            number++;
     if(visitors[i] > max) max = visitors[i];

  }

  return number;
}

int main() {
  int T;
  cin >> T;
  for (int tc = 1; tc <= T; ++tc) {
    int N;
    cin >> N;
    vector<int> V(N);
    for (int i = 0; i < N; ++i) {
      cin >> V[i];
    }
    cout << "Case #" << tc << ": " << NumberOfRecordBreakingDays(N, V) << endl;
  }
  return 0;
}
