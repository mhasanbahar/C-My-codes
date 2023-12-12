#include<stdio.h>

int arrMin(int[]);

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

int main(){
	int notes[5] = {20, 40, 90, 70, 80};
	int min = arrMin(notes);
	printf("%d", min);
	return 0;
}
