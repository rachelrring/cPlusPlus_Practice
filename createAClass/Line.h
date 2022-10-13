#pragma once
#ifndef LINE_H
#define LINE_H

class Line {
public:
	Line();
	~Line();
	void setLength(int);
	void incrementByOne();
	void displayLine();
private:
	int length;
};


#endif // !LINE_H