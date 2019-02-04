#include <iostream>
#include <cstdint>
#include <limits>

bool ShowBit(const std::uint16_t& N) {

	for (std::size_t i = 0; i <= std::numeric_limits<std::uint8_t>::digits; i++) {
		std::cout << (N&(1 << (std::numeric_limits<std::uint8_t>::digits - i))) ? '1' : '0';
	}
	return true;
}

int main() {
	/**/
	
	for (std::int16_t i = 0x20; i <= 0x7f; i++) {
		if (i % 16) {
			std::cout <<'['<< static_cast<char>(i)<<' '<<static_cast<int>(i)<<']'<<'[';
			ShowBit(i);
			std::cout << ']' << std::endl;
		}
		else {
			std::cout << "\n";
			//i--;
		}
	}
	/**/
	
	std::cout <<static_cast<char>( 0b110001 ) <<' '<<0b110001<< std::endl;	
	
	return 0;
}