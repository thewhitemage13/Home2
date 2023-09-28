#include <iostream>
using namespace std;

void Show(double a[],int dlina)
{
    double min = a[0];
    double max = a[0];
    int minid = 0;
    int maxid = 0;

    for (int i = 1; i < dlina; ++i) {
        if (a[i] < min) {
            min = a[i];
            minid = i;
        }

        if (a[i] > max) {
            max = a[i];
            maxid= i;
        }
    }
    cout << "Min:" << min << " Min ID: " << minid+1 << "\n";
    cout << "Max:" << max << " Max ID: " << maxid+1 << "\n";
}

int main()
{
	double a[] = { -10.5, -11.2, 5.8, 23.4, 0.5 };
	int dlina = 5;
    Show(a, dlina);
}
