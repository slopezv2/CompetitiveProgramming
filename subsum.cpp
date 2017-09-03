#include<sstream>
#include<iostream>
#include<string>
using namespace std;


#define D(x) cout<<#x<< " "<<x<<endl;

int main(){
	string line;
	string result ="";
	
	while(getline(cin, line)){
		stringstream ss;
		ss<< line;
		
		int size, target, i = 0;
		ss>>size>>target;
		int array [size] ;
		getline(cin, line);
		stringstream sc;
		sc << line;
		
		while(i < size){
			int value;
			sc >> value;
			array[i] = value;;
			i++;
		}
		int sum = 0,x,y;bool stop = false;
		for(int i = 0; i < size; i++){
			sum = 0;
			
			for(int j = i; j < size; j++){
				sum += array[j];
				if(sum == target){
					x = i;y = j;stop = true; break;
				}
				if(sum > target) break;
				
			}

			if(stop)break;
			}
			
		if(stop){
			result += to_string(x+1) + " " + to_string(y +1) + "\n";
		}else{
			result += "-1\n";
		}
		
	}
	
	cout<<result;
		
		
		
}
