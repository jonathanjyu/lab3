#include<iostream>
#include<cstdlib>
#include<fstream>
#include<vector>
#include <algorithm>
using namespace std;

class a
{
public:
	int weight;
	
	int sum;
	a()
	{
		fstream data;
	    data.open("file.in", ios::in);
	    if(!data){
	        cout<<"Fail to open file: "<<endl;
	    }
	    
	    data>>weight;

	    vector<int> cow;
	    for(int i=0;i<weight;i++){
	    	int num;
			data>>num;
			cow.push_back(num);
		}
		sort(cow.begin(),cow.end());
		reverse(cow.begin(),cow.end());
		sum=0;
		for(int i=0;i<5;i++){
			
			sum = sum + cow[i];
		}
		cout<<sum;
	}
	

};

int main(){
    a b;		
} 
