#include<stdio.h>
struct CAR
{
	int car_num[5];
	int Miles_Driven[5];
	int Gallons_Used[5];
};
void main() {
	struct CAR car;
	for (int i = 0; i < 5; i++) {
		car.car_num[i] = 25;
		car.Miles_Driven[i] = 
	}
	int car_num[5] = { 25,36,44,52,68 };
	int Miles_Driven[5] = { 1450,3240,1792,2360,2114 };
	int Gallons_Used[5] = { 62, 136, 76, 105, 67 };
	int miles_sub=0;
	int gallon_sub = 0;
	for (int i = 0; i < 5; i++) {
		printf_s("Type the %d-th Car information (ID, Miles,Gallon): %d %d %d ave = %.2f\n", i,car_num[i], Miles_Driven[i], Gallons_Used[i], (float)Miles_Driven[i] / Gallons_Used[i]);
		miles_sub += Miles_Driven[i];
		gallon_sub += Gallons_Used[i];
	}

	printf_s("%.2f", (float)miles_sub / gallon_sub);
}