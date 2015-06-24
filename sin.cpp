#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int numln, lncnt;
	double initfreq, freq, sinrng, result, width;
	const double sample_size = 0.05;

	cout << "Enter a line count: ";
	cin >> numln;
	cout << "\n";
	cout << "Enter a width: ";
	cin >> width;
	cout << "\n";
	cout << "Enter a frequency (enter something below 30 for best results): ";
	cin >> initfreq;
	cout << "\n";
	freq = initfreq * M_PI / 180;
	for (lncnt = 0; lncnt < numln; lncnt++)
	{
		result = width*sin(freq);
		for (sinrng = -1; sinrng <= 1; sinrng += sample_size)
		{
			if (result >= sinrng && result < (sinrng + sample_size)){
				cout << "*\n";
				break;
			}else{
				cout << " ";
			}
		}
		freq += initfreq * M_PI / 180;
	}
	return 0;
}
