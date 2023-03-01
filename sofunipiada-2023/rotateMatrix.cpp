#include "iostream"
#include "string"
#include "sstream"

using namespace std;



int main(){

  int size=0;
  cin >> size;
    cin.clear();
  cin.ignore(99999,'\n');

  int matrix[size][size];
  int processing[size][size];
  int output[size][size];

  for(int i=0; i<size; i++){
    string input, num;

    getline(cin, input);
    
    stringstream ss(input);

    int counter=0;
    while(getline(ss, num, ' ')){
      matrix[i][counter]=stoi(num);
      counter++;
    }
  }



  //transpose
  for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
       processing[i][j]=matrix[j][i];
    }
  }


  //reverse
  for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
      output[i][j]=processing[i][size-j-1];
    }
  }


  
  for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
      cout << output[i][j] << " ";
    }
    cout << '\n';
  }
  


}

