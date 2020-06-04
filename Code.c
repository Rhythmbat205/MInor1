#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{   char buffer[1024] ;
    char *record,*line;
    int i=0,j=0;
    int k=0,l=0;
    int mat[100][100];
    char *a[100][100];

    
    FILE *fstream = fopen("newdata1.csv","r");
    if(fstream == NULL)   {
       printf("\n file opening failed ");
       return -1 ;
    }
	int m=0,n=0;
	double avg[40][110];
	int daycount[7];
    while((line=fgets(buffer,sizeof(buffer),fstream))!=NULL)
    {
        record = strtok(line,",");
        while(record != NULL)
        {
             printf("%s",record) ;
             a[i][j++]=record;
             mat[i][j] = atoi(record) ;
		printf("%d ",mat[i][j]);
             record = strtok(NULL,";");
		++n;
		
        }
	if(i>=3) {
	char *rno = a[i][0];
	char *rec = a[i][1];
	for(i=0;i<7;++i) daycount[i]=0;
	printf("%s\n",rno);
	for(j=1;j<100;j++){
		//printf("j%d\n",j);

		if((j-1)%19==0){
			printf("Monday %d ",daycount[0]);
			int k=0;
			for(k=1;k<=5;++k) {
				avg[i][daycount[0]]+=((rec[2*(k+j-1)]-49)+1);
				//printf("%f ",avg[i][daycount[0]]);
			}
			avg[i][daycount[0]]/=5;
			printf("avg %f ",avg[i][daycount[0]]);
			daycount[0]++;
printf("\n");
		}
else if((j-2)%19==0){
			printf("Tuesday %d ",daycount[1]);
			int k=0;
			for(k=1;k<=3;++k) {
				avg[i][daycount[1]]+=((rec[2*(k+j-1)]-49)+1);
				//printf("%f ",avg[i][daycount[0]]);
			}
			avg[i][daycount[1]]/=3;
			printf("avg %f ",avg[i][daycount[1]]);
			daycount[1]++;
printf("\n");
		}else if((j-3)%19==0){
			printf("Wednesday %d ",daycount[2]);
			int k=0;
			for(k=1;k<=4;++k) {
				avg[i][daycount[2]]+=((rec[2*(k+j-1)]-49)+1);
				//printf("%f ",avg[i][daycount[0]]);
			}
			avg[i][daycount[2]]/=5;
			printf("avg %f ",avg[i][daycount[2]]);
			daycount[2]++;
printf("\n");
		}else if((j-3)%19==0){
			printf("Thursday %d ",daycount[3]);
			int k=0;
			for(k=1;k<=4;++k) {
				avg[i][daycount[3]]+=((rec[2*(k+j-1)]-49)+1);
				//printf("%f ",avg[i][daycount[0]]);
			}
			avg[i][daycount[3]]/=5;
			printf("avg %f ",avg[i][daycount[1]]);
			daycount[1]++;
}else if((j-3)%19==0){
			printf("Wednesday %d ",daycount[2]);
			int k=0;
			for(k=1;k<=4;++k) {
				avg[i][daycount[2]]+=((rec[2*(k+j-1)]-49)+1);
				//printf("%f ",avg[i][daycount[0]]);
			}
			avg[i][daycount[2]]/=5;
			printf("avg %f ",avg[i][daycount[2]]);
			daycount[2]++;
}
else if((j-4)%19==0){
			printf("Thursday %d ",daycount[3]);
			int k=0;
			for(k=1;k<=2;++k) {
				avg[i][daycount[3]]+=((rec[2*(k+j-1)]-49)+1);
				//printf("%f ",avg[i][daycount[0]]);
			}
			avg[i][daycount[3]]/=2;
			printf("avg %f ",avg[i][daycount[3]]);
			daycount[3]++;
printf("\n");}
else if((j-5)%19==0){
			printf("Friday %d ",daycount[4]);
			int k=0;
			for(k=1;k<=4;++k) {
				avg[i][daycount[4]]+=((rec[2*(k+j-1)]-49)+1);
				//printf("%f ",avg[i][daycount[0]]);
			}
			avg[i][daycount[4]]/=4;
			printf("avg %f ",avg[i][daycount[4]]);
			daycount[4]++;
printf("\n");
}
}
	printf("\n");
	}
	//printf("%s\n",a[i][0]);
        //printf("i is %d \n",i);
        ++i ;
        j=0;
	++m;
	//printf("record %d\n",i-1);
  }
printf("Begining Computation\n");
return 0 ;
}
