#include<stdio.h>
#include<conio.h>
int main()
{
	int np,l,j,w,t,i,g;
	int At[10],Bt[10],P[10],Pr[10],com[10],Pos[10],at[10],bt[10],p[i];
	int rP[10],rAt[10],rBt[10];
	int fP[10],wait[10],tat[10],finish[10];
	int ATmax=0,comp,rcomp;
	int m=1;
	int avtat=0.0;
	int avwait=0.0;
		int h=0;
		int d=0;
		int n=0;
	int e=0;
	int c=0;
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
		for(i=0;i<np;i++)//for matching in final step
		{
		p[i]=P[i];
				bt[i]=Bt[i];
				at[i]=At[i];
		}
	for(i=0;i<np;i++)
	{
		Pos[i]=i+1;
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
				int k= Bt[j];
			    Bt[j]=Bt[j+1];
			    Bt[j+1]=k;
			    
			    int r= P[j];
			    P[j]=P[j+1];
			    P[j+1]=r;
			    
			    int s=Pr[j];
			    Pr[j]=Pr[j+1];
			    Pr[j+1]=s;
				}
			}
		}
		int flag= P[e];
		comp=At[e]+Bt[e];
		printf("%d\n",At[m]);
		
		 if(At[m]>=comp)
	    {
		for(i=1,m=1,e=0;i<15;i++)
		{
	    printf("%d\n",i);
	    if((i==comp)&&(flag=P[e]))
	    {
	    	printf("process %d Done\n",P[e]);
	    	fP[c]=P[e];
	    	finish[c]=i;
	    	tat[c]=i-at[P[e]-1];
	    	wait[c]=tat[c]-bt[P[e]-1];
	    	c=c+1;
	    	n=n+1;
	    	if(n==np)
	    	{
	    		g=i;
	    		goto round;
			}
	    	Pr[e]=0;
	    	e=Pos[m]-1;
	    		comp=At[m]+Bt[e];
	    		printf("%d\n",comp);
	    			m=m+1;
		flag=P[e]; 		
		}
		for( l=0;l<h;l++)
		{
			if((i==com[l])&&(P[np+l+1]!=P[np+l]))
			{
				printf("Process %d done \n",P[np+l]);
					fP[c]=P[np+l];
	    	finish[c]=i;
	    	tat[c]=i-at[P[np+l]-1];
	    	wait[c]=tat[c]-bt[P[np+l]-1];
	    	c=c+1;
					n=n+1;
	    	if(n==np)
	    	{
	    		g=i;
	    		goto round;
			}
				e=Pos[m]-1;
				m=m+1;
			}
		}
		if((i==At[m])&&(Pr[m]<Pr[e]))
		{
			if((comp-i==0)||(comp-i==Bt[e]))//just arrived or just finished
			{
				if(comp-i==Bt[e])
				{
						At[np+h]=At[m]+Bt[P[m]-1];
	    	Bt[np+h]=Bt[e];
	    	Pr[np+h]=Pr[e];
	    	P[np+h]=P[e];
	    	com[h]=At[np+h]+Bt[np+h];
	    		e=Pos[m]-1;
		comp=At[m]+Bt[e];
	    	m=m+1;
	    	h=h+1;
				}
				else
				{
			e=Pos[m]-1;
		comp=At[m]+Bt[e];
			m=m+1;
		flag=P[e];
	}
			}
			else
			{
		printf("Burst time left for process %d is %d: \n",P[e],comp-i);	
			n=n+1;
	    	if(n==np)
	    	{
	    		g=i;
	    		goto round;
			}
		rP[d]=P[e];
		rAt[d]=i;
		rBt[d]=comp-i;
		d=d+1;
		e=Pos[m]-1;
		comp=i+Bt[e];
			m=m+1;
		flag=P[e];
	}
	    }
	    if((i==At[m])&&(Pr[m]>Pr[e])&&(Pr[e]!=0))
	    {
	    	At[np+h]=comp;
	    	Bt[np+h]=Bt[m];
	    	Pr[np+h]=Pr[m];
	    	P[np+h]=P[m];
	    	P[np+h+1]=20;
	    	com[h]=At[np+h]+Bt[np+h];
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
	    		fP[c]=P[e];
	    	finish[c]=i;
	    	tat[c]=i-at[P[e]-1];
	    	wait[c]=tat[c]-bt[P[e]-1];
	    	c=c+1;
	    		n=n+1;
	    	if(n==np)
	    	{
	    		g=i;
	    		goto round;
			}
	    	Pr[e]=0;
	    		
		}
		for( l=0;l<h;l++)
		{                
			if((i==com[l])&&(P[np+l+1]!=P[np+l]))
			{
				printf("Process %d done \n",P[np+l]);
						fP[c]=P[np+l];
	    	finish[c]=i;
	    	tat[c]=i-at[P[np+l]-1];
	    	wait[c]=tat[c]-bt[P[np+l]-1];
	    	c=c+1;
					n=n+1;
	    	if(n==np)
	    	{
	    		g=i;
	    		goto round;
			}
				e=Pos[m]-1;
				m=m+1;
			}
		}
		if((i==At[m])&&(Pr[m]<Pr[e]))
		{
				if((comp-i==0)||(comp-i==Bt[e]))
			{
						if(comp-i==Bt[e])
				{
						At[np+h]=At[m]+Bt[P[m]-1];
	    	Bt[np+h]=Bt[e];
	    	Pr[np+h]=Pr[e];
	    	P[np+h]=P[e];
	    	com[h]=At[np+h]+Bt[np+h];
	    		e=Pos[m]-1;
		comp=At[m]+Bt[e];
	    	m=m+1;
	    	h=h+1;
				}
				else
				{
			e=Pos[m]-1;
		comp=At[m]+Bt[e];
			m=m+1;
		flag=P[e];	
	} 
			}
			else
			{
		printf("Burst time left for process %d is %d: \n",P[e],comp-i);	
			n=n+1;
	    	if(n==np)
	    	{
	    		g=i;
	    		goto round;
			}
			rP[d]=P[e];
		rAt[d]=i;
		rBt[d]=comp-i;
		d=d+1;
		e=Pos[m]-1;
		comp=At[m]+Bt[e];
			m=m+1;
		flag=P[e];
	}
	    }
	    if((i==At[m])&&(Pr[m]>Pr[e])&&(Pr[e]!=0))
	    {
	    	At[np+h]=comp;
	    	Bt[np+h]=Bt[m];
	    	Pr[np+h]=Pr[m];
	    	P[np+h]=P[m];
	    	P[np+h+1]=20;
	    	com[h]=At[np+h]+Bt[np+h];
	    	m=m+1;
	    	h=h+1;
	    
		}
	}
	}
	 round:
		for(i=0;i<d-1;i++)
	{
		for(j=0;j<d-1-i;j++)
		{
			if(rAt[j]>rAt[j+1])
			{
				int z= rAt[j];//sort process according to arrival time
				rAt[j]=rAt[j+1];
				rAt[j+1]=z;	
				int k= rBt[j];
			    rBt[j]=rBt[j+1];
			    rBt[j+1]=k;
			    
			    int r= rP[j];
			    rP[j]=rP[j+1];
			    rP[j+1]=r;
				}
			}
		}
		int y=0;
		int x=0;
		int evod;
		int max=g+1;
		int quanta;
		rcomp=g+1+rBt[y];
		for(i=0;i<d;i++)
		{
			max=max+rBt[i];
		}
		printf("%dcomp\n",rcomp);
		for(i=g+1,quanta=1,y=0;i<=max;i++)
		{
			printf("%d\n",i);
				if((i!=rcomp)&&(quanta==1)&&(i!=g+1))
			{
				rP[d+x]=rP[y];
			    rBt[d+x]=rcomp-i;
			    x=x+1;
			    y=y+1;
			    rcomp=i+rBt[y];
			}
			if(i==rcomp)
			{
				printf("process %d done\n",rP[y]);
						fP[c]=rP[y];
	    	finish[c]=i;
	    	tat[c]=i-at[rP[y]-1];
	    	wait[c]=tat[c]-bt[rP[y]-1];
	    	c=c+1;
				y=y+1;
				rcomp=i+rBt[y];
			}
			quanta=quanta+1;
			if(quanta==3)
			{
				quanta=1;
			}
		}
		
	for(i=0,c=0;i<np;i++)
	{
		printf("Process						TAT						WAITING TIME\n");
		printf("%d							 %d								%d\n",fP[c],tat[c],wait[c]);
		avtat= avtat+tat[c]/3;
		avwait=avwait+wait[c]/3;
		c=c+1;
	}
	printf("Average waiting time is %d\n",avwait);
		printf("Average turn around time is %d\n",avtat);
	return 0;
}

