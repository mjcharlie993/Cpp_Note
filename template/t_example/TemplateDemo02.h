#ifndef TEMPLATEDEMO02_H
#define TEMPLATEDEMO02_H

template<typename T> class CompareDemo {
public:
	int compare(const T&, const T&);
};
template<typename T>
int CompareDemo<T>::compare(const T& a, const T& b) {
	if (a - b > 0)
		return 1;
	else if (a - b < 0)
		return -1;
	else
		return 0;
}

#endif