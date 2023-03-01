#include "iostream"
#include "string"
#include "sstream"
#include "vector"


using namespace std;

struct pancakePart{
  int start;
  int end;
  
  pancakePart(int Start, int End){
    start=Start;
    end=End;
  }
};


int main(){

  vector<int> ratings;

  

  pancakePart mostLikedSequence(1, 1);

  
  string input, num;
  
  // input="-3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 -3 2 2 -2 1 -4 0 4 -10 1 3 ";
  getline(cin, input);


  
  stringstream ss(input);

  while(getline(ss, num, ' ')){
    ratings.push_back(stoi(num));
  }


  //find the largest sum
  int largestSum=0;
  int largestlength=0;
  for(int i=0; i<ratings.size(); i++){

    
      if(ratings[i]<0)
        continue;
    
    int sum=ratings[i];

    for(int j=i+1; j<ratings.size(); j++){



      sum+=ratings[j];
      
      if(ratings[j]<-100)
        break;
      
      if(ratings[j]<0)
        continue;
      
      int length=j-i+1;

      //if we found a bigger value, restart the length
      if(sum>largestSum){
        largestSum=sum;
        largestlength=0;
      }

      //we didnt find a bigger value?
      if(sum==largestSum){


        //if the length was reseted resently or we found a longer length update the most liked sequence
        if(largestlength==0 || length>largestlength){
          largestlength=length;
          mostLikedSequence.start=i;
          mostLikedSequence.end=j;
          
        }
      }
    
    }
    
    
  }




  cout << largestSum << " ";
  cout << mostLikedSequence.start << " ";
  cout << mostLikedSequence.end << "\n";
  return 0;





}
