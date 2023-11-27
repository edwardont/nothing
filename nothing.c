// A C++ utility to do nothing


/*  comment  */


#include<iostream>
#include<string>
using namespace std;


// usage: nothing arg1 arg2 arg3



int alan(int john){
//  cout << john << endl;

  john++;
  return(john);
}



int main(int argc, char *argv[]){
  
  int count;

  count = 0;
  
  cout << "start" << endl ;
  
  if(argc>1){
    while(count<argc){
      cout << count << " : " << argv[count] << endl ;
      count++;
    }

    
  }
  
      if(argc==1){
      cout << "No arguments" << endl ;
    }
 
 
 cout << "end" << endl ;
  return(0);
}




