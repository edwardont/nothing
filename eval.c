// A C++ utility to do nothing - use eval()


/*  comment  */


#include<iostream>
#include<string>
#include<standard>
using namespace std;



int main(int argc, char *argv[]){
  
  int count;

  count = 0;
  
  cout << "start" << endl ;
  
  if(argc>1){
    while(count<argc){
      cout << count << " : " << argv[count] << endl ;
      count++;
    }

    cout << eval(argv[1]) ;
    
  }
  
      if(argc==1){
      cout << "No arguments" << endl ;
    }
 
 
 cout << "end" << endl ;
  return(0);
}




