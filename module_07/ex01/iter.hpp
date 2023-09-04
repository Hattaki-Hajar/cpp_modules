#pragma once

#include <iostream>

template <typename T>
void	substract(T	&e)
{
	e -= 32;
}

template <typename T, typename F>
void	iter(T *arr, size_t size, F func)
{
	size_t i = 0;
	while (i < size)
		func(arr[i++]);
}