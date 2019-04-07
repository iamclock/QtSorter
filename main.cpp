#include "Array2311.h"
#include "Array.cpp"
#include "Sorter.h"
#include "Sorter.cpp"




int main(){
	Sorter<int>::SortType type;
	char temp[6], doit;
	int count=5;
	/*
	std::cout <<"Enter count of elements: ";
	std::cin >>count;
	*/
	std::cout <<"If you want to enter array's elements yourself type \"y\", else \"n\": ";
	std::cin >>doit;
	std::cin.clear();
	Array<int> array(count, Array<int>::random);
	Array<int> brray(count);
	Array<int> crray(count, Array<int>::zero);
	std::cout <<"What type of sorting do you prefer?\n";
	std::cout <<"Choose from shell, quick, bubble, selection, insertion and piramidal: ";
	for(int i=0; i<6; i++) std::cin >>temp[i];
	std::cin.clear();
	if(temp[0]=='s'){
		if(temp[1]=='h') type=Sorter<int>::shell;
		else type=Sorter<int>::selec;
	}
	if(temp[0]=='q') type=Sorter<int>::quick;
	if(temp[0]=='b') type=Sorter<int>::bubbl;
	if(temp[0]=='i') type=Sorter<int>::inser;
	if(temp[0]=='p') type=Sorter<int>	::piram;
	Sorter<int> sort(type);	
	if(doit=='y'){
		Array<int> drray(count, Array<int>::self);
		sort.sort(drray);
		for(int i=0; i<count; i++) std::cout <<drray[i] <<" ";
		std::cout <<'\n';
	}
	for(int i=0; i<count; i++) std::cout <<(char)array[i] <<" ";
	std::cout <<'\n';
	for(int i=0; i<count; i++) std::cout <<array[i] <<" ";
	std::cout <<'\n';
	for(int i=0; i<count; i++) std::cout <<brray[i] <<" ";
	std::cout <<'\n';
	for(int i=0; i<count; i++) std::cout <<crray[i] <<" ";
	std::cout <<"\n";
	return 0;
}
