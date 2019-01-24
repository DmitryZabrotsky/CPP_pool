//
// Created by Dmitry ZABROTSKY on 2019-01-24.
//

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span {

private:
	unsigned int _n;
	std::vector<int> _storage;

public:
	Span();
	Span(unsigned int n);
	Span(Span const &obj);
	~Span();

	Span &operator=(Span const &obj);

	void addNumber(int val);
	int shortestSpan();
	int longestSpan();

	class NoPlaceException : public std::exception
	{
	public:
		NoPlaceException();
		NoPlaceException(NoPlaceException const &src);
		NoPlaceException &operator=(NoPlaceException const & src);
		virtual ~NoPlaceException() throw();
		virtual const char *what() const throw();
	};
};


#endif
