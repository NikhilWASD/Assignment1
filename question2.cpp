#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{  
	 char v1,v2,v3,n;
	 
/*	 string  data;
ofstream demo;

	demo.open("abc.txt");
	
	cout<<"writing to a file  ";
	getline(cin,data);
	
	demo<<data<<endl;
	
	//demo.close();
*/	
	fstream second;
	second.open("infile.txt",ios::in);
	
	cout<<"read  ";
	
	ofstream x,y;
	x.open("result.txt");
	y.open("cleaned.txt");
	cout<<"\n\t Which lines you want in other txt files (f,m,r,s)::";
	cin>>n;
	
	
	if(n=='f')
	{
	   while(second)
	   { 
		   second.get(v1);
		   if(v1=='"')
		   {
			  second.get(v2);
		      if(v2=='f')
		      {
		         second.get(v3);
		         if(v3=='"')
		         {
		           // cout<<"yes"<<endl;
			       x<<v1;  
			       x<<v2;
			       x<<v3;
			          second.get(v1);
                      x<<v1; 
                      second.get(v1);
                      x<<v1; 
			         for( ; ; )
			        {
                      second.get(v1);
                      x<<v1;   
                      if(v1==',')
                      {
						 x<<endl;
						 y<<endl;
						  break;
					  }	
					  y<<v1;		   
			        }
			       cout<<endl;
			     }
	           }
	        }
		}
     }else if(n=='m')
       {
	  while(second)
	   { 
		   second.get(v1);
		   if(v1=='"')
		   {
			  second.get(v2);
		      if(v2=='m')
		      {
		         second.get(v3);
		         if(v3=='"')
		         {
		           // cout<<"yes"<<endl;
			       x<<v1;  
			       x<<v2;
			       x<<v3;
			          second.get(v1);
                      x<<v1; 
                      second.get(v1);
                      x<<v1; 
			         for( ; ; )
			        {
                      second.get(v1);
                      x<<v1;   
                      if(v1==',')
                      {
						 x<<endl;
						 y<<endl;
						  break;
					  }		
					     y<<v1;	   
			        }
			     }
	           }
	        }
		}
     }else if(n=='r')
        {
	   while(second)
	   { 
		   second.get(v1);
		   if(v1=='"')
		   {
			  second.get(v2);
		      if(v2=='r')
		      {
		         second.get(v3);
		         if(v3=='"')
		         {
		           // cout<<"yes"<<endl;
			       x<<v1;  
			       x<<v2;
			       x<<v3;
			          second.get(v1);
                      x<<v1; 
                      second.get(v1);
                      x<<v1; 
			         for( ; ; )
			        {
                      second.get(v1);
                      x<<v1;   
                      if(v1==',')
                      {
						 x<<endl;
						 y<<endl;
						  break;
					  }			 
					  y<<v1;  
			        }
			      
			     }
	           }
	        }
		}
     }else if(n=='s')
        {
	   while(second)
	   { 
		   second.get(v1);
		   if(v1=='"')
		   {
			  second.get(v2);
		      if(v2=='s')
		      {
		         second.get(v3);
		         if(v3=='"')
		         {
		           // cout<<"yes"<<endl;
			       x<<v1;  
			       x<<v2;
			       x<<v3;
			       second.get(v1);
			       x<<v1;
			       second.get(v1);
			       x<<v1;
			       second.get(v1);
			       x<<v1;  y<<v1;
			         for( ; ; )
			        {
                      second.get(v1);
                      x<<v1;  y<<v1;   
                      if(v1=='"')
                      {
						 x<<endl;
						 y<<endl;
						  break;
					  }	
					     	   
			        }
			       
			     }
	           }
	        }
		}
     }
    y.close();
    fstream k;
	k.open("cleaned.txt",ios::in|ios::out);
    k.clear();
   k.seekg(0, ios::beg);
   string abc,efg;
   cout<<"\n\t Enter the language u want:-";
   cin>>abc;
   
   ofstream z;
	z.open("final.bat");
     
   
     while(getline(k,efg))
     {
		  z<<abc;
		  z<<efg<<endl;
		  
	 }	   
    
    
    
    // y.close();
     z.close();
     

     
	x.close();
	second.close();
 return 0;
 }
