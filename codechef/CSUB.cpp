#include <bits/stdc++.h>

int main() {
	long long t;
	std::cin>>t;
	while(t--)
	{
	    long long n,i,count=0;
	    std::cin>>n;
	    char x;
	    for(i=0;i<n;i++)
	    {
	        std::cin>>x;
	        if(x=='1')
	        count++;
	    }
	    std::cout<<count*(count+1)/2<<std::endl;
	}
	return 0;
}
