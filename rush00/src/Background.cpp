//
// Created by Dmitry ZABROTSKY on 2019-01-19.
//

#include "Background.hpp"

Background::Background() {

}

Background::Background(Background const &obj) {

}

Background::~Background() {

}

Background &Background::operator=(Background const &obj) {
	return *this;
}

void Background::mapping(Map &map) {
	for (int i = 0; i < 200; i++) {
		Map *img = stars[i].getImj();
		int x =  stars[i].getX();
		int y = stars[i].getY();
		map.add(img, x, y);
	}

}

void Background::play(Map const &map) {
    for (int i = 0; i < 200; i++)
        stars[i].play(map);
}

int Background::getScore() {
	return 0;
}

bool Background::isOver() {
	return false;
}
