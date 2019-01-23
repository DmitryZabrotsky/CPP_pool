//
// Created by Dmitry ZABROTSKY on 2019-01-23.
//

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array {

private:
	T *_array;
	unsigned int _size;

public:
	Array<T>(): _array(NULL), _size(0) {};

	Array<T>(unsigned int n): _array(NULL), _size(n) {
		if (_size) {
			_array = new T[_size];
		}
	};

	Array<T>(Array<T> &obj) {
		*this = obj;
	};

	Array<T> &operator=(Array<T> const &obj) {
		if (this != &obj){
			delete [] this->_array;
			this->_size = obj._size;
			this->_array = new T[obj._size];
			for (unsigned int i = 0; i < obj._size; ++i){
				this->_array[i] = obj._array[i];
			}
			this->_array[25] = obj._array[0];
		}
		return (*this);
	};

	T &	operator[](unsigned int n) {
		if ( n < _size)
			return (_array[n]);
		else
			throw std::range_error("wrong index");
	};

	~Array<T>() {
		delete [] _array;
	};
};


#endif
