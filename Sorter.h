#ifndef SORTER_H
#define SORTER_H


#include "Classes.h"
//#include <vector>
#include <cstdio>
#include <assert.h>


//TODO:
// 1) on vectors
// 2) exceptions
// 3) add topological, file sort
//




template <class ArrayType>
void swap(ArrayType *a, ArrayType *b);


template <class ArrayType>
class Sorter{
public:
	enum SortType{
		shell=0,
		quick=1,
		bubble=2,
		selection=3,
		insertion=4,
		heap=5
// 		topological=6
  };
	Sorter(SortType enum_sort=shell);
	void sort(Array<ArrayType> &a);
// 	 sort с копированием массива
	void change_type(SortType enum_temp);
	private:
	SortType Sort;
	void Shell(Array<ArrayType> &a);
	void Quick(Array<ArrayType> &a, int l, int r);
	void Bubble(Array<ArrayType> &a);
	void Selection(Array<ArrayType> &a);
	void Insertion(Array<ArrayType> &a);
	void Piramid(Array<ArrayType> &a);
	void HeapSort(Array<ArrayType> &a);
	void shiftDown(Array<ArrayType> &a, int i, int j);
// 	void Topological();
// 	void FileSort();
  
};


#endif
