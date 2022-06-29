#include <boost/date_time/gregorian/gregorian.hpp>
#include <iostream>

using namespace boost;

int main() {
	int publicHolidaysToCount = 2;
	gregorian::date d{2022, 12, 24};
	std::cout << d.day_of_week() << '\n';

	gregorian::day_iterator it{d};
	for (int i = 0; i < publicHolidaysToCount; ++i) {
		*++it;
		if (it->day() == 25 || it->day() == 26) {
			std::cout << it->day_of_week() << '\n';
		}
	}
}
