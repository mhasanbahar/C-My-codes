#include <stdio.h>

int arrMin(int[]);
int arrMax(int[]);
double arrAvg(int, int[]);

double arrAvg(int dimension, int ArrSy[]){
    int i, total = 0;
    double average = 0;
    for(i = 0; i < dimension; i++){
        total = total + ArrSy[i];
    }
    average = total/dimension;
    return average;
}

int arrMin(int ArrSy[]){
	int min = ArrSy[0];
	int i;
	for(i = 0; i < sizeof(ArrSy); i++){
		if(min > ArrSy[i]){
			min > ArrSy[i];
		}
	}
	return min;
}

int arrMax(int ArrSy[]){
    int max = ArrSy[0];
    int i;
	for(i=0; i < sizeof(ArrSy) ; i++){
		if(max < ArrSy[i]){
			max = ArrSy[i];
		}
	}
	return max;
}

int main(){
    int notes[10] = {8, 6, 7, 12, 4, 78, 89, 56, 45, 13};
    int min = arrMin(notes);
    int max = arrMax(notes);
    double g_average = arrAvg(5, notes);
    printf("%d\n", min);
	printf("%d\n", max);
	printf("%.2f\n", g_average);
    return 0;
}