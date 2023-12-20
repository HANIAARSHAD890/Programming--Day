#include <iostream>
using namespace std;
int volumebox(int length[],int width[],int height[],int boxno);

main()
{
   int boxno;
   int result=0; 
cout<<"Enter the number of boxes: ";
cin>>boxno;
cout<<"Enter the dimensions of the boxes (length, width, height):"<<endl;
int length[boxno-1];
   int width[boxno-1];
   int height[boxno-1];
for(int i=0;i<boxno;i++)
{
   cin>>length[i];
   cin>>width[i];
   cin>> height[i];
}

cout<<"Total volume of all boxes: ";

result=volumebox(length, width,height,boxno);
cout<<result;
}
int volumebox(int length[],int width[],int height[],int boxno)
{
    int totalvolume=0;
    int volume=0;
   for(int j=0;j<boxno;j++)
{
   volume=length[j] * width[j] * height[j];
    totalvolume=totalvolume+volume;
} 
    return totalvolume;

}
   

  
      







