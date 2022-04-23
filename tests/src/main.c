#include "libft.h"
#include <criterion/criterion.h>

Test(is_alpha, basic) {
	cr_expect(ft_isalpha('A') == 1, "Expected 'A' to be alpha");
	cr_expect(ft_isalpha('Z') == 1, "Expected 'Z' to be alpha");
	cr_expect(ft_isalpha('9') == 0, "Expected '9' to be alpha");
	cr_expect(ft_isalpha(':') == 0, "Expected ':' to be alpha");
}

Test(is_print, basic) {
	cr_expect(ft_isprint('A') == 1, "Expected 'A' to be alpha");
	cr_expect(ft_isprint('Z') == 1, "Expected 'Z' to be alpha");
	cr_expect(ft_isprint('9') == 1, "Expected '9' to be alpha");
	cr_expect(ft_isprint(':') == 1, "Expected ':' to be alpha");

	// These should fail
	cr_expect(ft_isprint(0) == 0, "Expected 'null' to not be printable");
	cr_expect(ft_isprint(127) == 0, "Expected 'del' to not be printable");
	cr_expect(ft_isprint(12) == 0, "Expected 'np' to not be printable");
	cr_expect(ft_isprint(8) == 0, "Expected 'bs' to not be printable");
}

Test(is_alnum, basic) {
	cr_expect(ft_isalnum('b') == 1, "Expected 'A' to be alphanumeric");
	cr_expect(ft_isalnum('X') == 1, "Expected 'Z' to be alphanumeric");
	cr_expect(ft_isalnum('2') == 1, "Expected '9' to be alphanumeric");
	cr_expect(ft_isalnum('O') == 1, "Expected ':' to be alphanumeric");

	// These should fail
	cr_expect(ft_isalnum('"') == 0, "Expected 'null' to not be alphanumeric");
	cr_expect(ft_isalnum('+') == 0, "Expected 'del' to not be alphanumeric");
	cr_expect(ft_isalnum('`') == 0, "Expected 'np' to not be alphanumeric");
	cr_expect(ft_isalnum('~') == 0, "Expected 'bs' to not be alphanumeric");
}

Test(is_isascii, basic) {
	cr_expect(ft_isascii(0) == 1, "Expected '0' to be acii");
	cr_expect(ft_isascii(10) == 1, "Expected '10' to be acii");
	cr_expect(ft_isascii(43) == 1, "Expected '43' to be acii");
	cr_expect(ft_isascii(126) == 1, "Expected '126' to be acii");

	// These should fail
	cr_expect(ft_isascii(200) == 0, "Expected '200' to not be ascii");
	cr_expect(ft_isascii(-200) == 0, "Expected '-200' to not be ascii");
	cr_expect(ft_isascii(128) == 0, "Expected '128' to not be ascii");
	cr_expect(ft_isascii(-1) == 0, "Expected '-1' to not be ascii");
}

Test(is_isdigit, basic) {
	cr_expect(ft_isdigit('2') == 1, "Expected '2' to be a digit");
	cr_expect(ft_isdigit('8') == 1, "Expected '8' to be a digit");
	cr_expect(ft_isdigit('0') == 1, "Expected '0' to be a digit");
	cr_expect(ft_isdigit('9') == 1, "Expected '9' to be a digit");

	// These should fail
	cr_expect(ft_isdigit('a') == 0, "Expected '10' to not be a digit");
	cr_expect(ft_isdigit(']') == 0, "Expected ']' to not be a digit");
	cr_expect(ft_isdigit('=') == 0, "Expected '200' to not be a digit");
	cr_expect(ft_isdigit('\\') == 0, "Expected 'a' to not be a digit");
}

Test(to_lower, basic) {
	cr_expect(ft_tolower('A') == 'a', "Expected 'A' to be 'a'");
	cr_expect(ft_tolower('Z') == 'z', "Expected 'Z' to be 'z'");
	cr_expect(ft_tolower('G') == 'g', "Expected 'G' to be 'g'");
	cr_expect(ft_tolower('L') == 'l', "Expected 'L' to be 'l'");

	// These should fail
	cr_expect(ft_tolower('b') == 'b', "Expected 'b' to still be 'b' (98)");
	cr_expect(ft_tolower(']') == ']', "Expected ']' to still be ']' (93)");
	cr_expect(ft_tolower('=') == '=', "Expected '=' to still be '=' (61)");
	cr_expect(ft_tolower('0') == '0', "Expected '0' to still be '0' (48)");
}

Test(to_upper, basic) {
	cr_expect(ft_toupper('a') == 'A', "Expected 'a' to be 'A'");
	cr_expect(ft_toupper('b') == 'B', "Expected 'b' to be 'B'");
	cr_expect(ft_toupper('p') == 'P', "Expected 'p' to be 'P'");
	cr_expect(ft_toupper('z') == 'Z', "Expected 'z' to be 'Z'");

	// These should fail
	cr_expect(ft_toupper('0') == '0', "Expected 'b' to still be '0' (48)");
	cr_expect(ft_toupper('"') == '"', "Expected ']' to still be '\"' (34)");
	cr_expect(ft_toupper('1') == '1', "Expected '=' to still be '1' (49)");
	cr_expect(ft_toupper('&') == '&', "Expected '0' to still be '&' (38)");
}

Test(number_length, basic) {
	cr_expect(ft_nbrlen(1) == 1, "Expected '1' to be a length of '1'");
	cr_expect(ft_nbrlen(1234567) == 7, "Expected '1234567' to be a length of '7'");
	cr_expect(ft_nbrlen(-101) == 3, "Expected '-101' to be a length of '3'");
	cr_expect(ft_nbrlen(24839) == 5, "Expected '24839' to be a length of '5'");
}

Test(ft_atoi, basic) {
	cr_expect(ft_atoi("100") == 100, "Expected '100' to be 100");
	cr_expect(ft_atoi("381932") == 381932, "Expected '381932' to be '381932'");
	cr_expect(ft_atoi("-100023") == -100023, "Expected '-100023' to be '-100023'");
	cr_expect(ft_atoi("-69696969") == -69696969, "Expected '-69696969' to be '-69696969'");
}
