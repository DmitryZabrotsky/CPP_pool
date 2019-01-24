//
// Created by Dmitry ZABROTSKY on 2019-01-24.
//

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
int easyfind(T cont, int n) {
	typename T::iterator it;
	for(it = cont.begin(); it != cont.end(); ++it) {
		if (*it == n)
			return 1;
	}
	return 0;
}

#endif
