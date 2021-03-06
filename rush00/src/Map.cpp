//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Map.hpp"


Map::Map(int x, int y) : _x(x), _y(y) {
	_map = new Entry*[y];
	for (int i = 0; i < y; i++)
		_map[i] = new Entry[x];
}

Map::Map(Map const &obj) {
	*this = obj;
}

Map &Map::operator=(Map const &obj) {
	this->_x = obj._x;
	this->_y = obj._y;
	return (*this);
}

Map::Map() {}

Map::~Map() {
//	for (int i = 0; i < _y - 1; i++)
//		delete [] _map[i];
	delete [] _map;
}

void Map::add(Map const *imj, int x, int y) {
	if (x < 0 || y < 0)
		return;
	for (int i = 0; i < _y + y && i < imj->getY(); i++)
	{
		for (int j = 0; j < _x + x && j < imj->getX(); j++) {
			// std::cout << j << " " << x  << " " << std::endl;
			setColor(j + x, i + y, imj->getColor(j, i));
			setSymbol(j + x, i + y, imj->getSymbol(j, i));
			setOwner(j + x, i + y, imj->getOwner(j, i));
		}
	}
}

int Map::getX() const {
	return _x;
}

int Map::getY() const{
	return _y;
}

void Map::setSymbol(int x, int y, char symbol) {
	if (x >= 0 && x < _x && y >= 0 && y < _y)
		_map[y][x].set_symbol(symbol);
}

void Map::setColor(int x, int y, int color) {
	if (x >= 0 && x < _x && y >= 0 && y < _y)
		_map[y][x].set_color(color);
}

void Map::setOwner(int x, int y, AUnit *owner) {
	if (x >= 0 && x < _x && y >= 0 && y < _y)
		_map[y][x].set_owner(owner);
}

char Map::getSymbol(int x, int y) const {
	if (x >= 0 && x < _x && y >= 0 && y < _y)
		return _map[y][x].get_symbol();
	else
		return ' ';
}

int Map::getColor(int x, int y) const {
	if (x >= 0 && x < _x && y >= 0 && y < _y)
		return _map[y][x].get_color();
	else
		return 0;
}

AUnit *Map::getOwner(int x, int y) const {
	if (x >= 0 && x < _x && y >= 0 && y < _y)
		return _map[y][x].get_owner();
	else
		return nullptr;
}

void Map::clear() {
    for (int i = 0; i < _y; i++)
    {
        for (int j = 0; j < _x; j++)
        {
            setColor(j, i, 1);
            setSymbol(j, i, ' ');
            setOwner(j, i, nullptr);
        }
    }
}

