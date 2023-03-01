#include <iostream>
#include <string>

using namespace std;

int main(){
  
  int n;
  cin >> n;


  for(int i=0; i<n; i++){
    
      int subN;
      cin >> subN;
    string highestStudentName;
    int highestStudentScore=0;

    
    for(int j=0; j<subN; j++){

      string thisStudentName;
      int thisStudentScore;
      
      cin >> thisStudentName >> thisStudentScore;
      
      if(highestStudentScore<thisStudentScore){
        highestStudentName=thisStudentName;
        highestStudentScore=thisStudentScore;
      }

    }
      cout << highestStudentName << '\n';
  }
}
