#include "iostream"
#include "string"
#include "sstream"
#include "vector"


using namespace std;

struct pancakePart{
  int start;
  int end;
  int size;
  
  pancakePart(int Start, int End){
    start=Start;
    end=End;
    size=end-start+1;
  }
};


int main(){

  vector<int> ratings;

  
  vector<pancakePart> likedSequenses;


  
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

    int previousSum=ratings[i];
    int length=1;

    int j=i+1;
    for(; j<ratings.size(); j++){
      
      length++;
      int currentSum=previousSum+ratings[j];

      //expanding decreases the value? stop expanding
      if(currentSum<previousSum){
        break;
      }

  
      previousSum=currentSum;
  
      }
    
    if(previousSum>largestSum){
      largestSum=previousSum;
      likedSequenses.clear();
      largestlength=0;
    }

    
    if(previousSum==largestSum){

      if(largestlength==0 || length>largestlength){
        largestlength=length;
        likedSequenses.clear();
      }

      if(length==largestlength)
        likedSequenses.push_back(pancakePart(i, j-1));
    
    }
  
  }


    
    




  //find the largest length
  int largestlengthIndex=0;
  for(int i=0; i<likedSequenses.size(); i++){
    if(likedSequenses[i].size>largestlength){
      // largestlength=likedSequenses[i].size;
      largestlengthIndex=i;
    }
  }

  //print the first largest sequence
  pancakePart toPrint=likedSequenses[largestlengthIndex];
  cout << largestSum << " ";
  cout << toPrint.start << " ";
  cout << toPrint.end << "\n";
  return 0;





}