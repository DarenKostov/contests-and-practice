#include "iostream"


using namespace std;


int main(){

  int n=0;

  cin >> n;

  int width=5+n;


  int head_length=4+((n-4)/2);
  int thruster_length=n/2;


  //=print tip
  for(int i=0; i<width/2; i++)
    cout << "_";
  cout << "^";
  for(int i=0; i<width/2; i++)
    cout << "_";
  cout << '\n';

  for(int i=0; i<width/2-1; i++)
    cout << "_";
  cout << "/|\\";
  for(int i=0; i<width/2-1; i++)
    cout << "_";
  cout << '\n';



  
  //=print head
  for(int j=2; j<=head_length; j++){

    for(int i=0; i<width/2-j; i++)
      cout << "_";
    cout << "/";

    //print inside
    for(int i=0; i<j-2; i++)
      cout << ".";
    cout << "|||";
    for(int i=0; i<j-2; i++)
      cout << ".";

    
    cout << "\\";
    for(int i=0; i<width/2-j; i++)
      cout << "_";

    cout << '\n';
  }




  //=print end of head
  cout << "_/";
  for(int i=2; i<=head_length-2; i++)
    cout << ".";
  cout << "|||";
  for(int i=2; i<=head_length-2; i++)
    cout << ".";
  cout << "\\_";
    cout << '\n';


  //print body
  for(int i=0; i<n; i++){

    for(int j=0; j<width/2-1; j++)
      cout << "_";
    cout << "|||";
    for(int j=0; j<width/2-1; j++)
      cout << "_";
  
    cout << '\n';

  }


  //print starting of thruster
  for(int j=0; j<width/2-1; j++)
    cout << "_";
  cout << "~~~";
  for(int j=0; j<width/2-1; j++)
    cout << "_";
  cout << '\n';


  //print thruster
  for(int i=0; i<thruster_length; i++){

    for(int j=0; j<thruster_length-i; j++)
      cout << "_";    

    cout << "//";


    //print inside
    for(int j=0; j<i; j++)
      cout << ".";
    cout << '!';
    for(int j=0; j<i; j++)
      cout << ".";

    
    cout << "\\\\";

  
    for(int j=0; j<thruster_length-i; j++)
      cout << "_";    
  
    cout << '\n';

  }




}
