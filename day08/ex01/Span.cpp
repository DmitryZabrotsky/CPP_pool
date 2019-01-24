//
// Created by Dmitry ZABROTSKY on 2019-01-24.
//

#include <numeric>
#include <iostream>
#include "Span.hpp"

Span::Span() {
	this->_n = 0;
	_storage.reserve(_n);
}

Span::Span(unsigned int n) {
	this->_n = n;
	_storage.reserve(_n);
}

Span::Span(Span const &obj) {
	*this = obj;
}

Span::~Span() {

}

Span &Span::operator=(Span const &obj) {
	this->_n = obj._n;
	this->_storage = obj._storage;
	return *this;
}

void Span::addNumber(int val) {
	if (this->_storage.size() < this->_n) {
		this->_storage.push_back(val);
	}
	else {
		throw NoPlaceException();
	}
}

int Span::shortestSpan() {
	std::vector<int> tmp = _storage;
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator it;
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin() - 1);
	tmp.pop_back();
	return (tmp[std::distance(tmp.begin(), std::min_element(tmp.begin(), tmp.end()))]);
}

int Span::longestSpan() {
	std::vector<int>::iterator min = std::min_element(_storage.begin(), _storage.end());
	std::vector<int>::iterator max = std::max_element(_storage.begin(), _storage.end());
	return (_storage[std::distance(_storage.begin(), max)] - _storage[std::distance(_storage.begin(), min)]);
}

Span::NoPlaceException::NoPlaceException() {

}

Span::NoPlaceException::NoPlaceException(const Span::NoPlaceException &obj) {
	*this = obj;
}

Span::NoPlaceException &Span::NoPlaceException::operator=(const Span::NoPlaceException &obj) {
	(void)obj;
	return *this;
}

Span::NoPlaceException::~NoPlaceException() throw() {

}

const char *Span::NoPlaceException::what() const throw() {
	return "No more place in Span for this opperation!";
}
