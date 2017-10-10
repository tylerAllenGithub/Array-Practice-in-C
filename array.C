/*Tyler Allen
CS111
3-24-15
Lab 10-1
This program will create and call various methods of an array.*/

#include <iostream>
#include <iomanip>
using namespace std;

void fillArray(int ar[], int s);
double findAvg(const int ar[], int s);
int findHighest(const int ar[], int s);
bool findKey(const int ar[],int s, int key);
void doubleArray(int ar[], int s);
void printArray(const int ar[], int s);

int main(){
  const int SIZE = 5;
  int array[SIZE];
  double avg;
  int highest;
  int key;
  bool keyFound;
  fillArray(array, SIZE);
  avg=findAvg(array, SIZE);
  cout<<endl<<endl<<"The average number is "<<avg<<endl<<endl;

  highest=findHighest(array, SIZE);
  cout<<"The highest number is "<<highest<<endl<<endl;

 cout<<"Enter a key: ";
 cin>>key;
 keyFound=findKey(array, SIZE, key);
 cout<<key<<" was ";
 if(!keyFound)
   cout<<"not ";
 cout<<"found in the array"<<endl<<endl;

doubleArray(array, SIZE);
 printArray(array, SIZE);
 return 0;
}

void fillArray(int ar[], int s)
{
  for(int i=0; i<s; i++)
    {
      cout<<"Enter a number: ";
      cin>>ar[i];
    }
}

double findAvg(const int ar[], int s)
{
  int total=0;
  double avg;

  for(int i=0;i<s; i++)
    {
      total+=ar[i];
    }
  avg=(double)total/s;
  return avg;
}

int findHighest(const int ar[], int s)
{
  int highest=ar[0];
  for(int i=1; i<s; i++)
    {
      if(ar[i]>highest)
	highest= ar[i];
    }
  return highest;
}

bool findKey(const int ar[], int s,  int key)
{
  for(int i=0; i<s; i++)
    {
      if(ar[i]==key)
	return true;
    }
  return false;
}

void doubleArray(int ar[], int s)
{
  for(int i=0; i<s; i++)
    {
      ar[i]*=2;
    }
}

void printArray(const int ar[], int s)
{
  cout<<"The new numbers in the array are ";
  for(int i=0; i<s; i++)
    {
      cout<<ar[i]<<" ";
    }
}

