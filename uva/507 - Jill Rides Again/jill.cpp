#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int b, s, in, identifier = 0;
  vector <int> path;

  cin >> b;

  while(b--){
    path.clear();
    cin >> s;
    s--;
    
    for(int i = 0; i < s; ++i){
      cin >> in;
      path.push_back(in);
    }

    int sum = 0; int ans = 0;
    
    for(int j = 0; j < path.size(); ++j){
      sum += path[j];
      ans = max(ans,sum);
      if(sum < 0) sum = 0;
      else{
	// como saco el indice???
      }
    }

    if(sum == 0) cout << "Route" << ++identifier << endl;
    else cout << ++identifier << " " <<  sum << endl;
    
  }
  
  return 0;
}
