#include<iostream>
#include <string>
using namespace std;
int cycles(int number){
    int cycle= 1;
    while(number != 1){
        if(number%2==1) {
            number = number*3+1;
        }else{
            number /= 2;
        }
        cycle++;
    }
    return cycle;
}
int main(){
    int i,ii, j,mayor = 0;
    while(!cin.eof()){
        cin >> i >> j;
        cout << i <<" "<<j<< " ";
        if(i > j){
            int temp;
            temp = j;
            j = i;
            i = temp;
        }
        for(ii=i;ii <= j;ii++){
            int actual = cycles(ii);
            if(actual>mayor) mayor = actual;
        }
        cout <<mayor<<endl;
        mayor = 0;
    }
}