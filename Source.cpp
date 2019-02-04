#include <iostream>
#include <cstdint>
#include <limits>

bool ShowBit(const std::uint8_t& N) {

	for (std::size_t i = 0; i <= std::numeric_limits<std::uint8_t>::digits; i++) {
		std::cout << (N&(1 << (std::numeric_limits<std::uint8_t>::digits - i))) ? '1' : '0';
	}
	return true;
}

int main() {
	/**/
	for (std::int8_t i = 0x20; i <= 0x7e; i++) {
		if (i % 16) {
			std::cout <<'['<< i<<' '<<static_cast<int>(i)<<']'<<'[';
			ShowBit(i);
			std::cout << ']' << std::endl;
		}
		else {
			std::cout << "\n";
			//i--;
		}
	}
	/**/
	
	return 0;
}