#include<iostream>
#include<cmath>
#include<ttmath/ttmath.h>

int main(int argv,char *argc[]){
	if(argv<2){
		std::cout<<argc[0]<<" Number\n";
		return 0;
	}
	ttmath::UInt<4086> iSum = 0,iFact = 1;
	int iNum = atoi(argc[1]);
	for(int i = 1;i<=iNum;i++){
		iFact*=i;
		iSum+=iFact;
	}
	std::cout<<"iSum is "<<iSum<<"\n";
	return 0;
}
