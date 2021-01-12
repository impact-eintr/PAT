#include<cstdio>
int main(){
	double a[1010]={0};
	int count=0;
	int t=2;
	while(t--){
		int m;
		int e;
		double k;//指数，系数 
		scanf("%d",&m);
		for(int i=0;i<m;i++){
			scanf("%d%lf",&e,&k);//double的输入必须为   %lf  不然会出错丫 
			a[e]+=k;
		}
	}
	for(int i=0;i<=1000;i++){
		if(a[i]!=0)
		  count++;
	}
	printf("%d",count);//count有可能为0，这种情况后面不能有空格 
	for(int i=1000;i>=0;i--){
		if(a[i]!=0){
			printf(" %d %.1f",i,a[i]);
		}
	}
	return 0;
}

