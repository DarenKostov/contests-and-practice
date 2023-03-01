#include <iostream>
#include <vector>

using namespace std;

int main(){

  int n=0;

  cin >> n;

  //haha
  n++;

  vector<int> nums[n];


  nums[0].push_back(1);
  

  for(int i=1; i<n; i++){
    for(int j=0; j<i+1; j++){

      int sum=0;

      //add the previous right
      if(nums[i-1][j]!=0)
        sum+=nums[i-1][j];
    
      //add the previous left
      if(nums[i-1][j-1]!=0)
        sum+=nums[i-1][j-1];
    
      nums[i].push_back(sum);
    }
  }

  //print
  for(auto i=nums[n-1].begin(); i!=nums[n-1].end(); i++){
    cout << *i << " ";
  }

  cout << "\n";
  

}



