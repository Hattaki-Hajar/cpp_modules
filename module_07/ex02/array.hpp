#pragma once

#include <iostream>

template <typename T>
class Array
{
	unsigned int Size;
	T *arr;

public:
	/*  Canonical form  */
	Array()
	{
		arr = 0;
		Size = 0;
	};
	Array(unsigned int n)
	{
		arr = new T[n];
		Size = n;
	};

	template <typename F>
	Array(Array<F> const &copy)
	{
		unsigned int i = 0, s = copy.size();
		arr = new T[s];
		while (i < s)
		{
			arr[i] = copy[i];
			i++;
		}
		Size = s;
	}
	Array(Array &copy)
	{
		unsigned int i = 0, s = copy.size();
		arr = new T[s];
		while (i < s)
		{
			arr[i] = copy[i];
			i++;
		}
		Size = s;
	}
	template <typename F>
	Array &operator=(Array<F> const &other)
	{
		unsigned int i = 0, s = other.size();
		if (arr)
			delete[] arr;
		arr = new T[s];
		while (i < s)
		{
			arr[i] = other[i];
			i++;
		}
		Size = s;
		return (*this);
	}
	Array &operator=(Array &other)
	{
		unsigned int i = 0, s = other.size();
		if (arr)
			delete[] arr;
		arr = new T[s];
		while (i < s)
		{
			arr[i] = other[i];
			i++;
		}
		Size = s;
		return (*this);
	}
	~Array()
	{
		if (arr && Size)
			delete[] arr;
	}
	/*  Exception  */
	class bad_index : public std::exception
	{
		virtual const char *what() const throw() { return "Index out of range!"; }
	};
	/* Additional func  */
	unsigned int size() const
	{
		return (this->Size);
	}
	T &operator[](unsigned int i)
	{
		if (i >= this->Size)
			throw Array::bad_index();
		else
			return arr[i];
	}
	const T &operator[](unsigned int i) const
	{
		if (i >= this->Size)
			throw Array::bad_index();
		else
			return arr[i];
	}
};
