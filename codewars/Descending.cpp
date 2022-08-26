#include<iostream>
#include <cinttypes>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

uint64_t descendingOrder(uint64_t a)
{
  // storing each digit in an array
  uint64_t num, ans;
  uint64_t dummy = a;
  int count = 0;
  
  // finds number of digits
  while (dummy > 0){
    dummy = dummy / 10;
    count += 1;
  }
  cout<<"number digits count:"<<count<<endl;
  
  uint64_t arr[count];
  num  = a;
  for (int i = 0; i < count; i++){
    arr[i] = num %  10;
    num= num / 10;
    cout<<arr[i]<<endl;
  }
  cout<<"descending starts"<<endl;
  for (int i = 0; i < count; i++){
    for (int j = 0; j < count; j++){
      if(i != j){
        if (arr[i] > arr[j]){
          dummy = arr[j];
          arr[j] = arr[i];
          arr[i] = dummy;
        }
      }
      
    }
    cout<<arr[i]<<endl;
  }
    ans = 0;
    cout<<"Print the answer"<<endl;
    for(int i = 0; i < count; i++){
      ans = ans + arr[i] * pow(10, count - i - 1);
      cout<<arr[i] * pow(10, count - i - 1)<<endl;
      cout<<ans<<endl;
    }
    
  
  return ans;
}

int main(){
    uint64_t n, ans;
    n = 998876655543322110;
    //cout<<"Enter a number"<<endl;
    //cin>>n;

    ans = descendingOrder(n);
    cout<<"ans:"<<ans<<endl;
    

}