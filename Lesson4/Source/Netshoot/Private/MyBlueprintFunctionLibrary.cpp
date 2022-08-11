// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

bool UMyBlueprintFunctionLibrary::Sort(UPARAM(ref) TArray<int>& array_to_sort, TArray<int>& array_to_sort_ref)
{
	array_to_sort.Sort([](const int& A, const int& B) {return A < B; });
	array_to_sort_ref = array_to_sort;
	return true;
}