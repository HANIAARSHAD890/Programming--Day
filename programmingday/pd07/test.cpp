#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
	void gotoxy(int x, int y);
	void printEnemy();
	void eraseEnemy();
	void moveEnemy(string direction);
	string changeDirection(string direction);
	void printscoreboard ( );
	void scoreboard();
	void printMaze();
    void moveplayer();
    void eraseplayer();
    void movePlayerLeft();
    void movePlayerRight();
    void printPlayer();
    void erasePlayer();
	void movePlayerUp();
	void movePlayerDown();
	char getCharAtxy(short int x,short int y);
	int eX = 5, eY = 5;
    int pX = 12,pY = 12;
	int score=0;
	main()
{
	system("cls");
	printscoreboard ();
	scoreboard();
	printMaze();
	printEnemy();
    printPlayer();
	string enemyDirection="right";
	cout<<score;
	while(true)

{


    if (GetAsyncKeyState(VK_LEFT))
{
    movePlayerLeft();
	printscoreboard();

}
if (GetAsyncKeyState(VK_RIGHT))
{
    movePlayerRight();
}

    if (GetAsyncKeyState(VK_UP))
{
    movePlayerUp();
}
if (GetAsyncKeyState(VK_DOWN))
{
    movePlayerDown();
}
	moveEnemy(enemyDirection);
enemyDirection=changeDirection(enemyDirection);
Sleep (200);
}

}


void gotoxy(int x,int y)

{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
	

}

	void printEnemy  ()
{
	gotoxy(eX,eY);
	cout<<"  /\\          "<<endl;
	gotoxy(eX,eY+1);
	cout<<"  /\\          "<<endl;
	gotoxy(eX,eY+2);
	cout<<" /  \\         "<<endl;
	gotoxy(eX,eY+3);
	cout<<"( 00 )         "<<endl;
	gotoxy(eX,eY+4);
	cout<<"|____|         "<<endl;
	gotoxy(eX,eY+5);
	cout<<"  ||           "<<endl;

}

	void eraseEnemy()
{
	gotoxy(eX,eY);
	cout << "               ";
	gotoxy(eX,eY+1);
	cout << "               ";
	gotoxy(eX,eY+2);
	cout << "               ";
	gotoxy(eX,eY+3);
	cout << "               ";
    gotoxy(eX,eY+4);
	cout << "               ";
    gotoxy(eX,eY+5);
	cout << "               ";
}
    void printMaze()
{                                                             
	system("color 01");
        cout << "############################################################################################################ "<<endl;
        cout << "#.                                                                                                         # "<<endl;
        cout << "#.                                                                                                         #"<<endl;
        cout << "#                                                                                                          #"<<endl;
        cout << "#                                                                                                          #"<<endl;
        cout << "#                                                                                                          #"<<endl;
        cout << "#                                                                                                          # "<<endl;
        cout << "#                                                                                                          #"<<endl;
        cout << "#                                                                                                          # "<<endl;
        cout << "#     .                                                                                                    #"<<endl;
        cout << "#     .                                                                                                    # "<<endl;
        cout << "#     .                                                                                                    #"<<endl;
        cout << "#     .                                                                                                    #"<<endl;
        cout << "#     .                                                                                                    #  "<<endl;
        cout << "#     .                                                                                                    #"<<endl;
        cout << "#     .                                                                                                    #"<<endl;
        cout << "#     .                                                                                                    #"<<endl;
        cout << "#     .                                                                                                    #"<<endl;
        cout << "#     .                                                                                                    # "<<endl;
        cout << "#     .                                                                                                    #"<<endl;
        cout << "#     .                                                                                                    # "<<endl;
        cout << "#     .                                                                                                    # "<<endl;     
	    cout << "#                                                                                                          # "<<endl;
	    cout << "#                                                                                                          #"<< endl;
        cout << "############################################################################################################ "<<endl;
} 


void printPlayer()
{
	gotoxy(pX,pY);
	cout<<" _____ "<<endl;
	gotoxy(pX,pY+1);
	cout<<"(     )"<<endl;
	gotoxy(pX,pY+2);
	cout<<"| ^ ^ |"<<endl;
	gotoxy(pX,pY+3);
	cout<<"|  u  |"<<endl;
	gotoxy(pX,pY+4);
	cout<<"|_____|"<<endl;
	gotoxy(pX,pY+5);
	cout<<"  | |  "<<endl;
    gotoxy(pX,pY+6);
    cout<<"  |_|  "<<endl;
}
void erasePlayer()
{
	gotoxy(pX,pY);
	cout << "       ";
	gotoxy(pX,pY+1);
	cout << "       ";
	gotoxy(pX,pY+2);
	cout << "       ";
	gotoxy(pX,pY+3);
	cout << "       ";
	gotoxy(pX,pY+4);
	cout << "       ";
    gotoxy(pX,pY+5);
	cout << "       ";
	gotoxy(pX,pY+6);            
	cout << "       ";
}

 
char getCharAtxy(short int x, short int y)
{
	CHAR_INFO ci;
	COORD xy = {0, 0};
	SMALL_RECT rect = {x, y, x, y};
	COORD coordBufSize;
	coordBufSize.X = 1;
	coordBufSize.Y = 1;
	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}

void movePlayerRight()
{
	if (getCharAtxy(pX + 7, pY) == ' ')
{
	erasePlayer();
	pX = pX + 1;
	printPlayer();
}
else if (getCharAtxy(pX + 7, pY) == '.')
{
	erasePlayer();
	
}
}
	void movePlayerLeft()
{
	if (getCharAtxy(pX - 1, pY) == ' ')
{
	erasePlayer();
	pX = pX - 1;
	printPlayer();
}

}
void printscoreboard ()
{
	int score=0;
	if (getCharAtxy(pX - 1, pY) == '.')
{
		
	scoreboard();
		  
	

}


}
void scoreboard()
{
	
	system("cls");
	printMaze();

    score=score+1;
	

 		  cout <<"##################################### "<<endl;
          cout << "#SCORE";
		  cout<<score<<endl;
          cout << "#.                                  #"<<endl;
          cout << "#####################################"<<endl;
}	


void movePlayerUp()
{
	if (getCharAtxy(pX+7, pY-1) == ' ')
{
    erasePlayer();
    pY = pY -1;
    printPlayer(); 
}
else if (getCharAtxy(pX+7, pY-1) =='.')
{
    erasePlayer();
}
}
    void movePlayerDown() 
{
	if (getCharAtxy(pX+7, pY+7) == ' ')
{
    erasePlayer();
    pY = pY +1;
    printPlayer();
}

else if (getCharAtxy(pX+7, pY+7) == '.')
{
    erasePlayer();
}

}
	string changeDirection(string direction)
	{

    if (direction == "right" && eX >= 30)
    {
        direction = "left";
    }
    if (direction == "left" && eX <= 2)
    {
        direction = "right";
    }
    return direction;
}
void moveEnemy(string direction)
{

    eraseEnemy();
    if (direction == "right")
    {
        eX = eX + 1;
    }
    if (direction == "left")
    {
        eX = eX - 1;
    }
    printEnemy();
}