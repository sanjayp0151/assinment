#include <iostream>
using namespace std;

int main()
{
  int n ;
  cout<<"Enter row no = ";
  cin>>n;

  for (int i = 0; i < n; i++){
      for (int j = 0; j < i; j++)
	    cout << " ";
	    for (int j = 0; j <n - i ; j++){
        if(i%2==0){
          if(j==0 || j % 3 == 0 ){
            cout<<"& ";
          }else{
            cout<<"% ";
          }         
        }else{
          if(j%2==0){
            cout<<"* ";
          }else{
            cout<<"# ";
          }    
        }
      }
	    
	    cout << endl;
    }
return 0;
}
