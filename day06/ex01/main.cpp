#include <iostream>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

std::string randomstr(void) {
	std::string str = std::string(8, '\0');

	for(int i = 0; i < 8; i++) {
		while (!isalnum(str[i])) {
			str[i] = rand() % 126;
		}
	}
	return (str);
}

void *serialize(void) {
	Data * data = new Data;

	data->s1 = randomstr();
	std::cout << "str for serialize: "<< data->s1 << std::endl;
	data->n = rand() % 10;
	std::cout << "int for serialize: "<< data->n << std::endl;
	data->s2 = randomstr();
	std::cout << "str for serialize: "<< data->s2 << std::endl;
	return reinterpret_cast<void *>(data);
}

Data *deserialize(void *raw) {
	return (reinterpret_cast<Data *>(raw));
}

int main() {
	srand(time(0));
	void *serialized_data = serialize();
	Data *data = deserialize(serialized_data);
	std::cout << "\n";
	std::cout << "deserialized str: "<< data->s1 << std::endl;
	std::cout << "deserialized int: "<< data->n << std::endl;
	std::cout << "deserialized str: "<< data->s2 << std::endl;
}