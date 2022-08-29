#include <iostream>
#include <vector> 
#include <utility>
#include <algorithm>
using namespace std;
int check_city(int number, vector<pair<int, int>> arr){
    sort(arr.begin(), arr.end(), [](auto &left, auto &right) {
    return left.first < right.first;
});
int num = 0;
for(int i =0; i< arr.size(); i++){
    if(arr[i].first <= number && arr[i].second >=number) num++;
     else if(arr[i].first > number) return num;
}

return num;

}
void print_vector(vector<int> arr){
    for(int i : arr) cout << i << " ";
}
int main(){
int T;
cin >> T;
  for (int testCase = 1; testCase <= T; testCase++) {
    int N;
    cin >> N;
    vector<pair<int, int>> arr(N);
    for(auto& x : arr) cin >> x.first >> x.second;
    int P;
    cin >> P; 
    vector<int> city(P);
    for(auto& x : city ) cin >> x;
    vector<int> result;
    for(int i : city ){
    result.push_back(check_city(i, arr));
    }
      cout << "Case #" << testCase << ": ";
  print_vector(result);
  cout << "\n";
    
  }

}
