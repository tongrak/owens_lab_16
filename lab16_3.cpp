#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(unsigned int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

vector<int> randomVector(unsigned int N){	
    vector<int> v;
    for(unsigned int i = 0; i < N; i++) v.push_back(rand()%10);
    return v;
}

void showVector(vector<int> In){
	cout << "[";
	for(unsigned int i = 0; i<In.size(); i++){
		cout << In[i];
		if((unsigned int)i==(In.size()-1)) cout << "]";
		else cout << " ";
	}
}

int dotProduct(vector<int> In1, vector<int> In2){
	int sum = 0;
	for(unsigned int i = 0; i<In1.size(); i++) sum += In1[i]*In2[i];	
	return sum;
}
//Write Definition of randomVector() showVector() and dotProduct() here, thank
