#include "iostream"
#include "string"
#include "sstream"
#include "vector"


using namespace std;


int main(){

  vector<string> nums;


  string input, num;
  getline(cin, input);
  stringstream ss(input);

  while(getline(ss, num, ' ')){
    nums.push_back(num);
  }

  //itterate through all the nums
  while(nums.begin()!=nums.end()){


    auto bestNum=nums.begin();

    
    for(auto i=nums.begin()+1; i!=nums.end(); i++){

      //determine of this number is better than the bestNum
    
      //check every diget
      for(int j=0; j<3; j++){

        //wraps the index
        int bestNumIndex=j%bestNum->size();
        int currentNumIndex=j%i->size();

        if((*i)[currentNumIndex]>(*bestNum)[bestNumIndex]){
          bestNum=i;
          break;
        }else if((*i)[currentNumIndex]==(*bestNum)[bestNumIndex]){
          //continue;
        }else{
          break;
        }



      }
  
    }

    cout << *bestNum;
    nums.erase(bestNum);


  }


  cout << '\n';

}
