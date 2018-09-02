#include <iostream>

using namespace std;

int main()
{  
    int n;
    cin>>n;
    if((n%2)!=0)
    {   
        n=(n/2)+1;
        int p=1,q=1,r=0;
        if((n==1)||(n==2))
        {cout<<p;}
        
        else
        {
             for(int i=3;i<=n;i++)
            {
            
            
                r=p+q;
                p=q;
                q=r;
        
            }
    
         cout<<r;
        }
    }    
        else if((n%2)==0)
        {
           
             n=n/2;
              int p=1,count=0;
             if(n==1)
             cout<<n+1;
             
           
            else
            {   
               int y =n*4;
               
               for(int i=3;i<y;i++)
                {count=0;
                    for(int j=2;j<(i/2)+1;j++)
                      {
                          if(i%j==0)
                           ++count;
                    
                       }
                    if(count==0)
                    {
                    p++;
                    
                   
                    if(p==(n))
                    cout<<i;}
                    
                }
            }
        }
        
    
   
   
   return 0;
}
