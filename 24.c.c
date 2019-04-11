#include<stdio.h>
#include<conio.h>
int main()
{
	int np,at,bt,l,j,w,t,i;
	int At[10],Bt[10],P[10],Pr[10],com[10];
	int ATmax=0,comp;
	int m=1;
		int h=0;
	int e=0;
	printf("Enter the no. of processes");
	scanf("%d",&np);
	for(i=0;i<np;i++)
	{
		P[i]=i+1;
		printf("enter the burst time of process %d ",i+1);
		scanf("%d",&Bt[i]);
		printf("enter the Arrival time of process %d ",i+1);
		scanf("%d",&At[i]);
		printf("enter the priority of process %d ",i+1);
		scanf("%d",&Pr[i]);
	}
	for(i=0;i<np-1;i++)
	{
		for(j=0;j<np-1-i;j++)
		{
			if(At[j]>At[j+1])
			{
				int z= At[j];//sort process according to arrival time
				At[j]=At[j+1];
				At[j+1]=z;
				//	printf("arrival time is %d ,%d\n",At[i],At[i+1]);
				
				int k= Bt[j];
			    Bt[j]=Bt[j+1];
			    Bt[j+1]=z;
			    
			    int r= P[j];
			    P[j]=P[j+1];
			    P[j+1]=z;
			    
			    int s=Pr[j];
			    Pr[j]=Pr[j+1];
			    Pr[j+1]=z;
			//	printf("aaaaaaaaaaaaa%d",Pr[j]);
			//	printf("aaaaaaaaaaaaaaaaa%d",Pr[j+1]);
				}
			}
		}
		for(i=0;i<np;i++)
		{
				ATmax=ATmax+At[i];
		}
		int flag= P[e];
		comp=At[e]+Bt[e];
		printf("sssssssssssssssssssssssss%d\n",comp);
		printf("%d\n",At[m]);
		
		 if(At[m]>=comp)
	    {
		for(i=1,m=1,e=0;i<15;i++)
		{
	    printf("%d\n",i);
	   
	    	printf("yes\n");
	    if((i==comp)&&(flag=P[e]))
	    {
	    	printf("process %d Done\n",P[e]);
	    	
	    	Pr[e]=0;
	    	e=P[m]-1;
	    	m=m+1;
	    		comp=i+Bt[e];
		flag=P[e];
	    		
		}
		for( l=0;l<h;l++)
		{
			if((i==com[l])&&(P[np+l+1]!=P[np+l]))
			{
			//	printf("%d %d\n",com[l],P[np+l]);
			//	printf("%d",P[np+l+1]);
				printf("Process %d done \n",P[np+l]);
				e=P[m]-1;
				m=m+1;
			}
		}
		if((i==At[m])&&(Pr[m]<Pr[e]))
		{
			//printf("%d,%d",Pr[m+1],Pr[e]);
			if(comp-i==0)
			{
			e=P[m]-1;
		m=m+1;
		comp=i+Bt[e];
		flag=P[e];	
		
			}
			else
			{
		printf("Burst time left for process %d is %d: \n",P[e],comp-i);	
		//e=e+1;
		e=P[m]-1;
		printf("%d\n",e);
		m=m+1;
			printf("%d\n",m
			);
		comp=i+Bt[e];
		flag=P[e];
	}
	
	    }
	   // printf("%d,%d\n",Pr[m+1],Pr[e]);
	    if((i==At[m])&&(Pr[m]>Pr[e])&&(Pr[e]!=0))
	    {
	   // printf("%d,%d",Pr[m+1],Pr[e]);
	   
	    	At[np+h]=comp;
	    	Bt[np+h]=Bt[m];
	    	Pr[np+h]=Pr[m];
	    	P[np+h]=P[m];
	    	//w=Pr[np+h];
	    	com[h]=At[np+h]+Bt[np+h];
	    		printf("done %d,%d,%d,%d\n",com[h],P[np+h],i,At[np+h]);
	    	//	printf("%d\n",h);
	    //	m=m+1;
	    	h=h+1;
	    
		}
	}
}
	
	else
	{
		for(i=1,m=1,e=0;i<15;i++)
		{
	    printf("%d\n",i);
		if((i==comp)&&(flag=P[e]))
	    {
	    	printf("process %d Done\n",P[e]);
	    	Pr[e]=0;
	    		
		}
		for( l=0;l<h;l++)
		{
			if((i==com[l])&&(P[np+l+1]!=P[np+l]))
			{
			//	printf("%d %d\n",com[l],P[np+l]);
			//	printf("%d",P[np+l+1]);
				printf("Process %d done \n",P[np+l]);
				e=P[m]-1;
				m=m+1;
			}
		}
		if((i==At[m])&&(Pr[m]<Pr[e]))
		{
			//printf("%d,%d",Pr[m+1],Pr[e]);
		printf("Burst time left for process %d is %d: \n",P[e],comp-i);	
		//e=e+1;
		printf("qqqq%d\n",m);
		e=P[m]-1;
	//	Printf("%d\n",P[m]);
		m=m+1;
		comp=i+Bt[e];
		flag=P[e];
		printf("%d\n",e);
		printf("%d\n",m);
	    }
	   // printf("%d,%d\n",Pr[m+1],Pr[e]);
	    if((i==At[m])&&(Pr[m]>Pr[e])&&(Pr[e]!=0))
	    {
	   // printf("%d,%d",Pr[m+1],Pr[e]);
	   
	    	At[np+h]=comp;
	    	Bt[np+h]=Bt[m];
	    	Pr[np+h]=Pr[m];
	    	P[np+h]=P[m];
	    	//w=Pr[np+h];
	    	com[h]=At[np+h]+Bt[np+h];
	    		printf("done %d,%d,%d,%d\n",com[h],P[np+h],i,At[np+h]);
	    	//	printf("%d\n",h);
	    	m=m+1;
	    	h=h+1;
	    
		}
	}
	}
		//else printf("a");
		
/*	for(i=0;i<np;i++)
	{
		printf("process is %d \n",P[i]);
		printf("arrival time is %d \n",At[i]);
		printf("burst time is %d \n",Bt[i]);
		printf(" priority is %d \n",Pr[i]);
		printf("%d\n",BTmax);
	}*/
	return 0;
}

