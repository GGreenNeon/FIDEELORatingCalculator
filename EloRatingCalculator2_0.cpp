#include <iostream>

using namespace std;

int main() {

float table[51][4] =   {{0,3,0.50,0.50},
                        {4,10,0.51,0.49},
                        {11,17,0.52,0.48},
                        {18,25,0.53,0.47},
                        {26,32,0.54,0.46},
                        {33,39,0.55,0.45},
                        {40,46,0.56,0.44},
                        {47,53,0.57,0.43},
                        {54,61,0.58,0.42},
                        {62,68,0.59,0.41},
                        {69,76,0.60,0.40},
                        {77,83,0.61,0.39},
                        {84,91,0.62,0.38},
                        {92,98,0.63,0.37},
                        {99,106,0.64,0.36},
                        {107,113,0.65,0.35},
                        {114,121,0.66,0.34},
                        {122,129,0.67,0.33},
                        {130,137,0.68,0.32},
                        {138,145,0.69,0.31},
                        {146,153,0.70,0.30},
                        {154,162,0.71,0.29},
                        {163,170,0.72,0.28},
                        {171,179,0.73,0.27},
                        {180,188,0.74,0.26},
                        {189,197,0.75,0.25},
                        {198,206,0.76,0.24},
                        {207,215,0.77,0.23},
                        {216,225,0.78,0.22},
                        {226,235,0.79,0.21},
                        {236,245,0.80,0.20},
                        {246,256,0.81,0.19},
                        {257,267,0.82,0.18},
                        {268,278,0.83,0.17},
                        {279,290,0.84,0.16},
                        {291,302,0.85,0.15},
                        {303,315,0.86,0.14},
                        {316,328,0.87,0.13},
                        {329,344,0.88,0.12},
                        {345,357,0.89,0.11},
                        {358,374,0.90,0.10},
                        {375,391,0.91,0.09},
                        {392,411,0.92,0.08},
                        {412,432,0.93,0.07},
                        {433,456,0.94,0.06},
                        {457,484,0.95,0.05},
                        {485,517,0.96,0.04},
                        {518,559,0.97,0.03},
                        {560,619,0.98,0.02},
                        {620,735,0.99,0.01},
                        {736,800,1.00,0.00}};
    int myElo, OppoElo, k;
	float w;
	cout << "Your Rating: "; cin >> myElo;
	cout << "Opponent Rating: "; cin >> OppoElo;
	cout << "Score (1 for win, 0.5 for draw, 0 for lose): "; cin >> w;
	cout << "K factor: "; cin >> k;

	int dR = abs (OppoElo - myElo); //
	if (dR > 400) {
		dR = 400;
	}
	float Ea;
	for (int i = 0; i < 51; i++) {
		if (table[i][0] <= dR && dR <= table[i][1]) {
			if (myElo > OppoElo) {
                Ea = table[i][2];
            }
            else {
                Ea = table[i][3];
            }
            break;
		}
	}
	
	//cout << Ea << endl;
	cout << "Rating Change is: ";
    if (w - Ea > 0) {
        cout << "+" << k * (w - Ea);
    }
    else {
        cout << k * (w - Ea);
    }

    return 0;
}
