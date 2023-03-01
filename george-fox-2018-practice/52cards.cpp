#include <iostream>
#include <string>


int main(){

  int n;
  std::cin >>n;


  for(int i=0; i<n; i++){

    std::string s;
    std::cin >> s;

    int cards=0;
    for(int j=0; j<s.size(); j++){
      if(!((int)s[j]>=48 && (int)s[j]<=57)){
        cards++;
      }
    }

    std::cout << 52-cards << '\n';
      
  }



}

