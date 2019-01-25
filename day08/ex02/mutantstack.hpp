//
// Created by Dmitry ZABROTSKY on 2019-01-25.
//

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
public:
	MutantStack() {}
	MutantStack(MutantStack<T> const &obj): std::stack<T>(obj) {}
	~MutantStack() {}
	typedef typename std::stack<T>::container_type::iterator iterator;
	using std::stack<T>::operator=;

	iterator	begin() {
		return std::stack<T>::c.begin();
	}
	iterator	end() {
		return std::stack<T>::c.end();
	}
};

#endif
