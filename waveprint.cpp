#include<iostream>
using namespace std;

int main()
{

   
   int arr[3][3]={ {1,2,3},
                    {3,4,5},
					{6,7,8}
				};
   
   int r=3,c=3;

   
   for(int i=0;i<c;i++)
   {
   	  if(i%2==0)
   	  {
   	  	for(int j=0;j<r;j++)
   	  	{
   	  	   cout<<arr[j][i]<<" ";	
	    }
	    
   	  	
	  }
	  else
	  {
	  	for(int j=r-1;j>=0;j--)
	  	{
	  		cout<<arr[j][i]<<" ";
	  		
		}
		
	  }
   	   
   }
  	
}




//
//int i=0, j=0;
//    
//    while(j<c){
//        if(i==(r-1)){
//           while(i>0){
//               cout<<arr[i][j]<<" ";
//               i--;
//           }
//        }
//        else if(i==0){
//            while(i<r){
//                cout<<arr[i][j]<<" ";
//                i++;
//            }
//            i-=1;
//        }
//        j++;
//    }

