#include <bits/stdc++.h>
using namespace std;

int main() {
  int rows ;
  cout<<"Enter rows no = ";
  cin>>rows;
  int num = 1;
  
    
  for(int i=0; i<rows; i++) {
    if(i%2==0){
      for(int j=0; j<=i; j++) {
          cout << num << " ";
          num++;
      }
      }else{
        vector <int> a;
        for(int j=0; j<=i; j++) {
            a.push_back(num);
            num++;
        }
        for(int k =a.size()-1; k>=0; k--){
          cout<<a[k]<<" ";
        }
    }
      cout << endl;
  }
}