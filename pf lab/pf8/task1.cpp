#include <iostream>
using namespace std;
bool doesBrickFit( int height,int width,int depth,int holeWidth,int holeHeight );

main()
{

  int height;
  int width;
  int depth;
  int holeWidth;
  int holeHeight;
  int result;
  cout<<"Enter height of brick: ";
  cin>>height;
  cout<<"Enter width of brick: ";
  cin>>width;
  cout<<"Enter depth of brick: ";
  cin>>depth;
  cout<<"Enter height of the hole: ";
  cin>>holeHeight;
  cout<<"Enter width of the hole: ";
  cin>>holeWidth;
  result=doesBrickFit(height, width,depth,holeWidth, holeHeight);
  cout<<result;
 
}

bool doesBrickFit( int height,int width,int depth,int holeWidth,int holeHeight )
{
    int result=0;
    int area_1ofbrick;
    int area_2ofbrick;
    int area_3ofbrick;
    area_1ofbrick=height*width;
    area_2ofbrick=depth*width;
    area_3ofbrick=depth*height;
   

if (area_1ofbrick==holeWidth*holeHeight)
{
 result=true;

}
 else if (area_2ofbrick==holeWidth*holeHeight)
{

result= true;


}
elseif (area_3ofbrick==holeWidth*holeHeight)

{
result=true;



}
else
{
    result=false;
    
}
return result;

}







 