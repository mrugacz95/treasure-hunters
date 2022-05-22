#include <iostream>
#include <windows.h>
#include <ctime>
#include <conio.h>
char nplansza[10][10];
unsigned char znak;
int xludzik;
int yludzik;
int xskarb;
int yskarb;
int xkoryt;
int ykoryt;

bool wypelnij()
{
     srand ((int) time(NULL));
  

     
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
         xkoryt=rand() % 9;
         ykoryt=rand() % 9;
         int ile = ((rand()%5+1)*10+(rand()%10));
         
         for(int l=0;l<ile;l++)
         {
                 int dlug=rand()%5+1;
                 int kier=(rand()%4+1);
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
                 default: break;
              }
         }//std::cout<<"lol2";
              
              do
              {
               xskarb = rand() % 9; 
               yskarb = rand() % 9; 
               }while(nplansza[xskarb][yskarb]==static_cast<char>(219));
               nplansza[xskarb][yskarb]=254;
               do{
                 xludzik = rand() % 9;
                 yludzik = rand() % 9;
                 }while(nplansza[xludzik][yludzik]==static_cast<char>(219));//&&(xludzik==xskarb)&&(yludzik==yskarb));
             std::cout<<"xl"<<xludzik<<" yl"<<yludzik<<" xs"<<xskarb<<" ys"<<yskarb<<std::endl;
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
         ramka(0,10);
     for(int i = 0;i<10;i++)
{
     std::cout << static_cast<char>(186);
             for(int j=0;j<10;j++)
        {
                std::cout << nplansza[i][j];
                }
                std::cout << static_cast<char>(186);
        std::cout<<std::endl;
        }
        
        ramka(1,10);
       std::cout<<(rand()%4+1);
         nplansza[xludzik][yludzik] = static_cast<char>(32); 
}
void gra()
{
     wypelnij();
for(;;)
    {
    rysuj();
    if(nplansza[xludzik-1][yludzik]!=static_cast<char>(219)) {std::cout<<"^ ";}
    if(nplansza[xludzik+1][yludzik]!=static_cast<char>(219)) {std::cout<<"v ";}
    if(nplansza[xludzik][yludzik-1]!=static_cast<char>(219)) {std::cout<<"< ";}
    if(nplansza[xludzik][yludzik+1]!=static_cast<char>(219)) {std::cout<<"> ";}
znak=getch();
if(znak==13){wypelnij();}
if(znak==224)
{
            znak=getch();
    if(znak==72 &&(xludzik != 0)&&(nplansza[xludzik-1][yludzik]!=static_cast<char>(219))) {xludzik--;}
    if(znak==80 &&(xludzik != 9)&&(nplansza[xludzik+1][yludzik]!=static_cast<char>(219))) {xludzik++;}
    if(znak==75 &&(yludzik != 0)&&(nplansza[xludzik][yludzik-1]!=static_cast<char>(219))) {yludzik--;}
    if(znak==77 &&(yludzik != 9)&&(nplansza[xludzik][yludzik+1]!=static_cast<char>(219))) {yludzik++;}
    
}

if((xludzik==xskarb)&&(yludzik==yskarb)){ znak=NULL; break;}
   }
std::cout << "Brawo! Znalazles skarb na polu " << xskarb+1 << ", " << yskarb+1; 
}


int main()
{
    
char czy;

             for(;;)
             {
                    
       gra();
       std::cout << ". Jeszcze raz na wyzszym poziomie?? (t/n)";
       
       czy = getch();
       if(czy==110){break;}
       system("cls");
           }    


}
