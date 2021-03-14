#include "Timestamp.hpp"
#include <iostream>

void Timestamp::createTimestamp(int seconds) {
	m_hours = seconds / SECONDS_IN_HOUR;
	m_minutes = (seconds % SECONDS_IN_HOUR) / SECONDS_IN_MINUTE;
	m_seconds = (seconds % SECONDS_IN_HOUR) % SECONDS_IN_MINUTE;
}

void Timestamp::print() const {
	if (m_hours < 10) {
		std::cout << '0' << m_hours << ':';
	}
	else {
		std::cout << m_hours << ':';
	}

	if (m_minutes < 10) {
		std::cout << '0' << m_minutes << ':';
	}
	else {
		std::cout << m_minutes << ':';
	}

	if (m_seconds < 10) {
		std::cout << '0' << m_seconds;
	}
	else {
		std::cout << m_seconds;
	}
	std::cout << '\n';
}

void Timestamp::addAnotherBrand(Timestamp brand2) {
	int secondsBrand2 = brand2.convertToSeconds();
	secondsBrand2 += convertToSeconds();
	createTimestamp(secondsBrand2);
}

int Timestamp::convertToSeconds() const {
	int seconds = 0;
	seconds += m_hours * SECONDS_IN_HOUR;
	seconds += m_minutes * SECONDS_IN_MINUTE;
	seconds += m_seconds;
	
	return seconds;
}
