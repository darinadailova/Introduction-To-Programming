#pragma once

class Timestamp {
	int m_hours;
	int m_minutes;
	int m_seconds;
	const int SECONDS_IN_HOUR = 3600;
	const int SECONDS_IN_MINUTE = 60;
public:
	void createTimestamp(int seconds);
	void print() const;
	void addAnotherBrand(Timestamp brand2);
	int convertToSeconds() const;
};