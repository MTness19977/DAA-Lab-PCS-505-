#include<iostream>
using namespace std;

int main()
    {
        int n, i, a, flag=0, com=0, pos;

        cout<<"Enter the size of array: "; cin>>n;
        int A[n];

        cout<<"Enter the array elements: ";
        for( i=0 ; i<n ; i++ )
                cin>>A[i];

        cout<<"Enter the element you want to search: "; cin>>a;

        for( i=0 ; i<n ; i++ )
            {   
                com++;
                if( a == A[i] )
                    {
                        flag=1;
                        break;
                    }
            }
        
        if(flag==1)
                cout<<"\nElement found at index = "<<i;
            
        else
                cout<<"\nElement doesn't exist in array";
        
        cout<<"\nThe total number of comparisons are = "<<com;

        return 0;
    }