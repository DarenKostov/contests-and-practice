#include "iostream"



using namespace std;

int main(){

  char input[100];

  cin >> input;

  int longest=0;

  int current=0;

  for(int i=0; i<100; i++){
    if(input[i]=='\0'){
      break;
    }

    if(input[i]=='('){
      if(input[i+1]==')'){
        current+=2;
        i++;
      }else{  
        if(longest<current){
          longest=current;
        }
      current=0;
      
      }
    }
    if(input[i]=='\0'){
      break;
    }
  }

  if(longest<current){
    longest=current;
  }

  cout << longest << '\n';
  


}
