#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){

  string strl;
  cout<<"ВВедите Строку: ";
  getline(cin,strl);
  vector<int> arr;
  arr.push_back(0);
  for(int i=1;i<strl.length();i++){
    if(strl[i]==' ' && strl[i+1]!=' '){
      arr.push_back(i+1);
    }
  }
  int k;
  cout<<"введите k: ";
  cin>>k;
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  for(int i=0;i<arr.size();i++){
    if(arr[i]>=k){
      cout<<"порядковый номер слова: "<<arr[i]<<endl;
      break;
       
    }
  }
}