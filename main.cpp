#include "bits/stdc++.h"
using namespace std;

int main()
{
    // 1D ARRAY :

    int arr1[5];
    arr1[0] = 5;
    arr1[2] = 10;
    arr1[4] = arr1[0] + arr1[2];
    int arr2[5] = {1,2,3,4,5};
    int n = 10;
    int arr3[n];
    int arr4[4] = {1}; // its like {1,0,0,0}.
    // Getting inputs from a user and printing it:
 //    cin >> arr4[3];
    int arr5[6];
    for(int i=0 ; i<6 ; i++)
    {
        cout<<"Enter arr["<<i<<"] : ";
        cin>>arr5[i];
    }
    for(int i=0 ; i<6 ; i++)
    {
        cout<<"arr["<<i<<"] = "<<arr5[i]<<endl;
    }
    cout<<"-----------------------------------------------------------"<<endl;
    // Equal 2 arrays :
    const int s = 6;
    int arr6[s] = {10, 20, 31, 40, 50, 69};
    int arr7[s] ;
    for(int i = 0; i<s ; i++)
    {
        arr7[i] = arr6[i] ;
    }
    cout<<"arr7 = ";
    for(int j = 0; j<s ; j++)
    {
        cout<<arr7[j]<<" ";
//        cout<<"The "<<j<<" element in arr7 = "<<arr7[j]<<endl;
    }
    cout<<endl;
    int sum = 0;
    int evenSum = 0;
    int oddSum = 0;
    long multiplying = 1;
    int max = 0;
    int min = arr7[0];
    for(int k = 0 ; k<s ; k++)
    {
        if(arr7[k]%2==0)
            evenSum += arr7[k];
        else
            oddSum += arr7[k];
        sum += arr7[k];
        multiplying *= arr7[k];
        if(arr7[k]>max)
            max = arr7[k];
        else
            min = arr7[k];
    }
    cout<<"Sum = "<<sum<<endl;
    cout<<"Even Sum = "<<evenSum<<endl;
    cout<<"Odd Sum = "<<oddSum<<endl;
    cout<<"Multiplying = "<<multiplying<<endl;
    cout<<"Average = "<<sum/s<<endl;
    cout<<"Max Element = "<<max<<endl;
    cout<<"Min Element = "<<min<<endl;
      cout<<"-----------------------------------------------------------"<<endl;
      // Searching :
      int num;
      cout << "Enter How many elements U want in the array : ";
      cin>>num;
      int arr8[num];
      for(int i = 0 ; i<num ; i++)
      {
          cout<<"Enter arr8["<<i<<"] : ";
          cin>>arr8[i];
      }
      int element;
      cout<<"What's the element that u r looking for ? ";
      cin>>element;
      int i;
      bool found = false;
      for(i = 0; i<num; i++)
      {
          if(element==arr8[i])
          {
              found = true;
              break;
          }
      }
      cout<<endl;
      if(found)
          cout<<element<<" is in the index "<<i;
      else
          cout<<"sry, not found";
      cout<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    // Sorting Array :
    int arr9[6] = {6,4,5,3,1,2};
    cout<<"arr9 BEFORE sorting : ";
    for(int i = 0 ; i<6 ; i++)
    {
        cout<< arr9[i] << " ";
    }
    cout<<endl;
    for(int i = 0 ; i<6-1 ; i++)
    {
        for(int j = 0 ; j<6-1 ; j++)
        {
            if(arr9[j] > arr9[j+1])
                swap(arr9[j],arr9[j+1]);
        }
    }
    cout<<"arr9 AFTER sorting : ";
    for(int i = 0 ; i<6 ; i++)
    {
        cout<< arr9[i] << " ";
    }
    cout<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    // Reversing Array :
    int arr10[6] = {6,5,4,3,2,1};
    cout<<"arr10 BEFORE reversing : ";
    for(int i = 0 ; i<6 ; i++)
    {
        cout<< arr10[i] << " ";
    }
    cout<<endl;
    for(int i = 0 ; i < 6/2 ; i++)
    {
        swap(arr10[i],arr10[6-i-1]);
    }
    cout<<"arr10 AFTER reversing : ";
    for(int i = 0 ; i<6 ; i++)
    {
        cout<< arr10[i] << " ";
    }
    cout<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    // Array of Characters :
    char ch1[5] = {'a','b','c','d','e'};
    char ch2[5] = {'a','b','c','d','\0'};
    char ch3[5] = {'a','b','c','d','0'};
    char ch4[5] = {'a','b','c','d',0};
    char ch5[5] = {'a','b','c','d',NULL};
    char ch6[5] = {'a','b','c','d'};
    char ch7[10] = {'a','b','c','d','\0','e','f'};
    char ch8[50] = "elm3lm\"AhmedTarek\"";
    char ch9[50] = "elm3lma\"MennaSalem\"";
    cout<<ch1<<endl;
    cout<<ch2<<endl;
    cout<<ch3<<endl;
    cout<<ch4<<endl;
    cout<<ch5<<endl;
    cout<<ch6<<endl;
    cout<<ch7<<endl;
    cout<<ch8<<endl;
    cout<<ch9<<endl;
    char ch10[20];
    cin>>ch10;
    cout<<"ch10 : "<<ch10<<endl;
    char ch11[20];
    cin.ignore();
    cin.get(ch11,20); // Accepting spaces when user Enters
    cout<<"ch11 : "<<ch11<<endl;
    // Built in Functions :
    // strcpy ==> Copy
    char ch12[] = "AAA";
    char ch13[4];
    strcpy(ch13,ch12);
    cout<<"ch12 : "<<ch12<<endl;
    cout<<"ch13 : "<<ch13<<endl;
    // strcat ==> concat (ربط)
    char ch14[] = "AAA";
    char ch15[4] = "HH";
    strcat(ch15,ch14);
    cout<<"ch15 : "<<ch15<<endl; // HHAAA.
    // strcmp ==> compare
    // NOTE : We need ASCII HERE IF THERE ARE "AAA" , "BBB" => It WILL PRINT -1
    cout<<strcmp("AAA","AAA")<<endl; // 0
    cout<<strcmp("AAAA","AAA")<<endl; // 1
    cout<<strcmp("AAA","AAAA")<<endl; // -1
    //strlen ==> length
    char ch16[] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    cout<<strlen(ch16)<<endl;

//---------------------------------------------------------------------------------------------------------------//

     //2D ARRAY :
     int a1[2][3] ={
                    1,2,3,
                    4,5,6
                   };
     int a2[2][3]={
                 {1,2,3},
                 {4,5,6}
                  };
     int a3[3][4]; //a[rows][columns]
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<4;j++)
         {
             cin>>a3[i][j];
         }
     }
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<4;c++)
        {
            cout<<a3[r][c]<<" ";
        }
        cout<<endl;
    }
    cout<<"-----------------------------------------------------------"<<endl;
    // Sum 2D array
    int a4[2][4]={{1,1,1,1},{2,2,2,2}};
    int sum=0;
    for(int r=0;r<2;r++)
    {
        for(int c=0;c<4;c++)
        {
            sum+=a4[r][c];
        }
    }
    cout<<"sum = "<<sum<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    int mark,student;
    cout<<"Enter number of students : ";
    cin>>student;
    cout<<endl;
    cout<<"Enter number of marks : ";
    cin>>mark;
    cout<<endl;
    int marks[student][mark];
    for(int r=0;r<student;r++)
    {
        for(int c=0;c<mark;c++)
        {
            cout<<"Enter mark "<<c+1<<" for student "<<r+1<<" : ";
            cin>>marks[r][c];
        }
        cout<<endl;
    }
    double avg[student];
    for(int r=0;r<student;r++)
    {
        double sum=0;
        for(int c=0;c<mark;c++)
        {
            sum += marks[r][c];
        }
        avg[r]=sum/5;
        cout<<"-Average marks for student "<<r+1<<" : "<<avg[r]<<endl;
    }
    cout<<"-----------------------------------------------------------"<<endl;
    //Transpose Matrix:
    int matrix[3][3] = {{1,2,3},
                        {1,2,3},
                        {1,2,3}
                        };
    cout<<"Correct Matrix is : "<<endl;
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            cout<<matrix[r][c]<<" ";
        }
        cout<<endl;
    }
    cout<<"-------\n";
    cout<<"Transpose Matrix is : "<<endl;
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            cout<<matrix[c][r]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
