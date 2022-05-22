#include <iostream>
#include <windows.h>
#include <ctime>
#include <conio.h>
char nplansza[10][10];
unsigned char znak;
unsigned int xludzik;
unsigned int yludzik;
unsigned int xskarb;
unsigned int yskarb;
int xkoryt;
int ykoryt;
int przyszedlz = 0;
int wynik;
bool zebrany;
int wygrana =10;
int ilosckolcow=0;
int wygenerowanych=1;
int procentpustego;
bool invert=false;
int wypelnij(int los)
{
     srand ((int) time(NULL));
  
do
         {
     
 for(int i = 0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
        nplansza[i][j]=static_cast<char>(219);

        }
    }
    /*    if((xludzik!=i)&&(yludzik!=j)&&(xskarb!=i)&&(xskarb!=j))
         {
             if((rand()%2+1)==1) 
             { */
             switch(los)
             {
         case 0: 
               xkoryt=rand() % 9;
                  ykoryt=rand() % 9;
                  break;
         case 1:
               xkoryt=9;
               ykoryt=yludzik;
              break;
         case 2:
               xkoryt=0;
               ykoryt=yludzik;
              break;
         case 3:
               xkoryt=xludzik;
               ykoryt=9;
              break;
         case 4:
               xkoryt=xludzik;
               ykoryt=0;
              break;
         }
         int ile = ((rand()%5+1)*10+(rand()%10));
         
             
         for(int l=0;l<ile;l++)
         {
                 int dlug=rand()%5+2;
                 int kier=(rand()%4+1);
                 int kierpoprzedni=kier;
                 while(kierpoprzedni==kier)
                 {
                 kier=(rand()%4+1);
                 }
                 switch((rand()%4+1))//(rand()%4+1)
                 {
                 case 1:
                      for(int k=0;;k++)
                      {
                              if((k==dlug)||(xkoryt-1<0)){ break; }
                              nplansza[xkoryt-1][ykoryt]=32;
                              xkoryt--;
                              
                      }
                      break;
                 case 2:
                      for(int k=0;;k++)
                      {
                              if((k==dlug)||(xkoryt+1>9)){ break; }
                              nplansza[xkoryt+1][ykoryt]=32;
                              xkoryt++;
                              
                      }
                      break;
                 case 3:
                      for(int k=0;;k++)
                      {
                              if((k==dlug)||(ykoryt-1<0)){ break; }
                              nplansza[xkoryt][ykoryt-1]=32;
                              ykoryt--;
                              
                      }
                      break;
                 case 4:                      
                      for(int k=0;;k++)
                      {
                              if((k==dlug)||(ykoryt+1>9)){ break; }
                              nplansza[xkoryt][ykoryt+1]=32;
                              ykoryt++;
                              
                      }
                      break;
              }
         }//std::cout<<"lol2";
         procentpustego=0;
         for(int f=0;f<10;f++)
         {
                 for(int t=0;t<10;t++)
                 {
                         if(nplansza[f][t]==static_cast<char>(32)){ procentpustego++; }
                 }
         }
         }while(!((procentpustego>40)&&(procentpustego<60)));
              do
              {
               xskarb = rand() % 9; 
               yskarb = rand() % 9; 
               }while(nplansza[xskarb][yskarb]!=static_cast<char>(32));
               nplansza[xskarb][yskarb]=254;
               
               
               for(int y=0;y<ilosckolcow;y++)
               {
              int xkolec;
              int ykolec;   
              do
              {
               xkolec = rand() % 9; 
               ykolec = rand() % 9; 
               }while((xkolec==xludzik&&ykolec==yludzik)||nplansza[xkolec][ykolec]!=static_cast<char>(32));
               nplansza[xkolec][ykolec]=193;
               }
               if(wynik==3)
               {
               int odwrot[2];
              do
              {
               odwrot[0] = rand() % 9; 
               odwrot[1] = rand() % 9; 
               }while(nplansza[odwrot[0]][odwrot[1]]!=static_cast<char>(32));
               nplansza[odwrot[0]][odwrot[1]]=static_cast<char>(29);
               }
    if(los==0)
    {
               do{
                 xludzik = rand() % 9;
                 yludzik = rand() % 9;
                 }while(nplansza[xludzik][yludzik]!=static_cast<char>(32));//&&(xludzik==xskarb)&&(yludzik==yskarb));
     }
     
    if(ilosckolcow>(wygrana-3))
    {
            int ulatwienie[2];
               do{
                 ulatwienie[0] = rand() % 9;
                 ulatwienie[1] = rand() % 9;
                 }while(nplansza[ulatwienie[0]][ulatwienie[1]]!=static_cast<char>(32));
                 nplansza[ulatwienie[0]][ulatwienie[1]]=static_cast<char>(2);
     }
            
   /* 
   do
    {

}while((xludzik==xskarb)&&(yludzik==yskarb)&&(nplansza[xskarb][yskarb]==static_cast<char>(219))&&(nplansza[xludzik][yludzik]==static_cast<char>(219)));
   */ return true;
}

int ramka(int g, int dlugosc)
{
switch(g)
     {
     case 0:    
                      std::cout << static_cast<char>(201);
         for(int j = 0; j <dlugosc ;j++)
            {
            std::cout << static_cast<char>(205);
            }
            std::cout << static_cast<char>(187) << std::endl;
            break;
      case 1:            
    
                        std::cout << static_cast<char>(200);
            for(int k =0; k <dlugosc;k++)
            {
            std::cout << static_cast<char>(205);
            }
            std::cout << static_cast<char>(188) << std::endl; break;
           
    }
}
void rysuj()
{

nplansza[xludzik][yludzik]=173;
system("cls");
        std::cout <<"                                  ";
         ramka(0,10);
     for(int i = 0;i<10;i++)
{
     std::cout <<"                                  " << static_cast<char>(186);
             for(int j=0;j<10;j++)
                {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 136);
                     if(((i==xludzik-1)&&(j==yludzik))||((i==xludzik+1)&&(j==yludzik))||((i==xludzik)&&(j==yludzik+1))||((i==xludzik)&&(j==yludzik-1))||((i==xludzik+1)&&(j==yludzik-1))||((i==xludzik+1)&&(j==yludzik+1))||((i==xludzik-1)&&(j==yludzik-1))||((i==xludzik-1)&&(j==yludzik+1))||((i==xludzik)&&(j==yludzik))) { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); }
                     
                     std::cout << nplansza[i][j];
                     
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);

                }
                
                std::cout << static_cast<char>(186);
                    switch(i)
                     {
                      case 4: std::cout<<"    WYNIK: "<<wynik;
                           break;
                      case 5: if(zebrany==true){std::cout<<"    COLLECTED";}
                           break;
                     }
        std::cout<<std::endl;
        }
        std::cout <<"                                  ";
        
        ramka(1,10);
        
        

         nplansza[xludzik][yludzik] = static_cast<char>(32); 
}
int nowa(int kier)
{
    if(zebrany==true){wynik++; ilosckolcow++; }else{wynik--;}
    zebrany=false;
    wygenerowanych++;
    switch(kier)
    {
       case 1:
            przyszedlz=1;
            xludzik=9;
            wypelnij(1);
            break;
       case 2:
            przyszedlz=2;
            xludzik=0;
            wypelnij(2);
            break;
       case 3:
            przyszedlz=3;
            yludzik=9;
            wypelnij(3);
            break;
       case 4:
            przyszedlz=4;
            yludzik=0;
            wypelnij(4);
            break;
    }
    
}
void gra()
{
     wypelnij(0);
for(;;)
    {
    rysuj();

znak=getch();
if(znak==13){ wypelnij(0); wygenerowanych++; }
if(znak==0){ znak=getch(); if(znak==59){
             //KONSLOA
        if(invert==false){std::cout<<"nie invert"<<std::endl;}
        std::cout<<"xl "<<xludzik<<" yl "<<yludzik<<" xs"<<xskarb<<" ys"<<yskarb<<" wyg-"<<wygenerowanych<<std::endl;
        std::cout <<"% pustego: "<< procentpustego << "%"<<std::endl;
    if(nplansza[xludzik-1][yludzik]!=static_cast<char>(219)) {std::cout<<"^ ";}
    if(nplansza[xludzik+1][yludzik]!=static_cast<char>(219)) {std::cout<<"v ";}
    if(nplansza[xludzik][yludzik-1]!=static_cast<char>(219)) {std::cout<<"< ";}
    if(nplansza[xludzik][yludzik+1]!=static_cast<char>(219)) {std::cout<<"> ";}
        znak=getch();
             } }
if(znak==224)
{
            znak=getch();   
            if(invert==false)
            {    
    if(znak==72&&(nplansza[xludzik-1][yludzik]!=static_cast<char>(219))&&(xludzik != 0)) {xludzik--;} else {if((znak==72) &&(xludzik == 0)&&(przyszedlz!=2)) {nowa(1);}}
    if(znak==80&&(nplansza[xludzik+1][yludzik]!=static_cast<char>(219))&&(xludzik != 9)) {xludzik++;} else {if((znak==80) &&(xludzik == 9)&&(przyszedlz!=1)) {nowa(2);}}
    if(znak==75&&(nplansza[xludzik][yludzik-1]!=static_cast<char>(219))&&(yludzik != 0)) {yludzik--;} else {if((znak==75) &&(yludzik == 0)&&(przyszedlz!=4)) {nowa(3);}}
    if(znak==77&&(nplansza[xludzik][yludzik+1]!=static_cast<char>(219))&&(yludzik != 9)) {yludzik++;} else {if((znak==77) &&(yludzik == 9)&&(przyszedlz!=3)) {nowa(4);}}   
           } else
           {
    if(znak==80&&(nplansza[xludzik-1][yludzik]!=static_cast<char>(219))&&(xludzik != 0)) {xludzik--;} else {if((znak==80) &&(xludzik == 0)&&(przyszedlz!=2)) {nowa(1);}}
    if(znak==72&&(nplansza[xludzik+1][yludzik]!=static_cast<char>(219))&&(xludzik != 9)) {xludzik++;} else {if((znak==72) &&(xludzik == 9)&&(przyszedlz!=1)) {nowa(2);}}
    if(znak==77&&(nplansza[xludzik][yludzik-1]!=static_cast<char>(219))&&(yludzik != 0)) {yludzik--;} else {if((znak==77) &&(yludzik == 0)&&(przyszedlz!=4)) {nowa(3);}}
    if(znak==75&&(nplansza[xludzik][yludzik+1]!=static_cast<char>(219))&&(yludzik != 9)) {yludzik++;} else {if((znak==75) &&(yludzik == 9)&&(przyszedlz!=3)) {nowa(4);}} 
             }

}
znak=static_cast<char>(0);
if(nplansza[xludzik][yludzik]==static_cast<char>(193)){ wynik-=5;} 
if(nplansza[xludzik][yludzik]==static_cast<char>(29)){ wynik++; invert=true;}
if(nplansza[xludzik][yludzik]==static_cast<char>(2)){ wynik-=2; ilosckolcow-=5;}
if(wynik<0){ wynik=0; std::cout<<"Masz mniej punktow niz 0 - koniec tej farsy. Twoj wynik to "<<wynik; invert=false; ilosckolcow=0; przyszedlz=0; break;} 
if(wynik==wygrana){system("cls"); std::cout<< "Brawo zdobyles duzo puktow"<<std::endl; return; }
if((xludzik==xskarb)&&(yludzik==yskarb)){ zebrany=true; }//break;}
   }
//std::cout << "Brawo! Znalazles skarb na polu " << xskarb+1 << ", " << yskarb+1; 
}


int main()
{
    
char czy;

             for(;;)
             {
                    
       gra();
       if(wynik==wygrana){break;}
       std::cout << ". Jeszcze raz?? (t/n)";
       
       czy = getch();
       if(czy==110){break;}
       system("cls");
           }    

system("pause");
}
