#include <array>
#include <iostream>

int main() {
	std::array<int, 4> my_array = {42, 3, 39, 4};

	for (auto i = 0u; i <= my_array.size(); i++) {
		std::cout << my_array[i] << '\n';
	}

	return 0;
}
