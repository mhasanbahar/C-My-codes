#include<stdio.h>

int arrMax(int[]);

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
    int notes[5] = {20, 40, 90, 70, 80};
	int max=arrMax(notes);
	printf("%d", max);
	return 0;
}