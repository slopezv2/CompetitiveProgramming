#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes herec
	int casos;
	cin>>casos;
	vector<int> calculado;
	calculado.push_back(1);
	calculado.push_back(2);
	calculado.push_back(4);
	int actual;
	while(casos--){
        cin>>actual;
        if(actual>calculado.size()){
            for(int i = calculado.size(); i<actual;++i){
                calculado.push_back(calculado[i-1]+3);
            }
        }
        cout<<calculado[actual-1]<<endl;
	}


	return 0;
}