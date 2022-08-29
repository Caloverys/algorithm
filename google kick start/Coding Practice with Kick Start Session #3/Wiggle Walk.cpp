#include <iostream>
#include <vector> 
using namespace std;
void move(char str, int& current_r, int& current_c, vector<vector<int>>& arr ){
          if( str == 'N') current_r--;
          else if (str == 'S') current_r++;
         else if (str == 'W') current_c--;
          else if(str == 'E') current_c++;
           
     if(arr[current_r][current_c] == 1)
      move(str,  current_r, current_c, arr);
      else arr[current_r][current_c] = 1;
      
}
int find(char cha, string str){
    int sum =0; 
    for(char i : str){
        if(cha == i) sum++;
    }
    if(sum == 0) return 1;
    return sum;
}
int main(){
int T;
cin >> T;
  for (int i=1; i<= T;i++){
   int N, R, C, Sr, Sc;
      string str;

  cin >> N >> R >> C >> Sr >> Sc;
  cin >> str;
  Sr -= 1;
  Sc-=1;

  bool happen;
  int r, c;

  int max_r = find('S', str) + find('N',str);
    int max_c = find('W', str) + find('E',str);
   int current_r, current_c;

    r = 2 * (max_r);
    c = 2 * (max_c);
    if( r > R ){
        r = R;
    } 
    if( c > C) c = C;
   current_r = (r == R ? Sr : r/2);
  current_c =  (r == R ? Sc : c/2);

    vector<vector<int>> arr(r, vector<int>(c));

  arr[current_r][ current_c] = 1;
  int orgin_r =current_r;
  int orgin_c = current_c;


  for(int i =0; i< str.length(); i++){
     move(str[i], current_r, current_c, arr);
  }
  cout << "Case #" << i << ": " << (r == R ?  current_r + 1 :  Sr + 1 - (orgin_r-current_r)  ) << " " <<(c == C  ?  current_c + 1 :   Sc+ 1 - (orgin_c - current_c) ) << "\n";
  }
}
