#include <boost/date_time/gregorian/gregorian.hpp>
#include <iostream>

using namespace boost;

int main() {
	gregorian::date d{2022, 12, 24};
	d.day_of_week();
	std::cout << d.day_of_week() << '\n';
}
