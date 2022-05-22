#include <iostream>
#include <windows.h>
#include <conio.h>
#include <ctime>
char nplansza[5][5];
unsigned char znak;
int xludzik;
int yludzik;
int xskarb;
int yskarb;
int lvlgry=2;
void title()
{
    std::cout<<"|---|  |--|  |--| |---| |-||-| |-|  |-| |-||-| |-| |-|  |---|   |---||---||---|"<<std::endl;
    std::cout<<"|-||-||-||-||--|    |-| |-||-| |-| |-|  |-||-| |-| |-| |-| |-| |-|     |-||-|"<<std::endl;
    std::cout<<"|---| |-||-| |--|  |-|  |-||-| |-||-|   |-||-| |-| |-| |-| |-| |-|    |-| |---|"<<std::endl;
    std::cout<<"|--|  |-||-|  |--||-|   |-||-| |-| |-|  |-| |---|---|  |-|-|-| |-|   |-|  |-|"<<std::endl;
    std::cout<<"|--|  |-||-| |--| |-|   |-||-| |-|  |-| |-| |--| |-|   |-| |-| |-|   |-|  |-|"<<std::endl;
    std::cout<<"|--|   |--| |--|  |---|  |--|  |-|   |-||-| |-|  |-|   |-| |-|  |---||---||---|"<<std::endl;
    std::cout<<"                                          //"<<std::endl;
    
    std::cout<<" |--| |-|  |-|  |---|  |----|  |----| |-----| |-| |-| |-| "<<std::endl;
    std::cout<<"|--|  |-| |-|  |-| |-| |-| |-| |-| |-||-| |-| |-| |-| |-| "<<std::endl;
    std::cout<<" |--| |-||-|   |-| |-| |----|  |----| |-| |-| |-| |-| |-| "<<std::endl;
    std::cout<<"  |--||-| |-|  |-|-|-| |-||-|  |-| |-||-| |-|  |---|---| "<<std::endl;
    std::cout<<" |--| |-|  |-| |-| |-| |-| |-| |-| |-||-| |-|  |--| |-| "<<std::endl;
    std::cout<<"|--|  |-|   |-||-| |-| |-|  |-||----| |-----|  |-|  |-| "<<std::endl;     
}
bool wypelnij()
{
     
 for(int i = 0;i<=5;i++)
    {
        for(int j=0;j<=5;j++)
        {
                if(lvlgry<5) {nplansza[i][j]=static_cast<char>(176);} else {nplansza[i][j]=static_cast<char>(32);}

                }
        
    } 
   // nplansza[5][5]=0;
    //skarb&ludzik
    srand ((int) time(NULL));
    do
    {
    xludzik = rand() % 4; std::cout<< xludzik << " x ludz ";
    yludzik = rand() % 4; std::cout<< yludzik << " y ludz";
    
    xskarb = rand() % 4; std::cout<< xskarb << " x skarb ";
    yskarb = rand() % 4; std::cout<< yskarb << " y skarb" << std::endl;
}
while((xludzik==xskarb)&&(yludzik==yskarb));
    if(lvlgry==1) {nplansza[xskarb][yskarb] = static_cast<char>(254);}
    return true;
}
bool rysuj()
{
         if(lvlgry<4) { nplansza[xludzik][yludzik] = static_cast<char>(173); }
         if(lvlgry==4) { nplansza[xludzik][yludzik] = static_cast<char>(176); }
         if (lvlgry>=5) { nplansza[xludzik][yludzik] = static_cast<char>(32); }
     for(int i = 0;i<5;i++)
{
             for(int j=0;j<5;j++)
        {
                std::cout << nplansza[i][j] <<" ";
                }
        std::cout<< std::endl;
        std::cout<< std::endl;
        }
        if(lvlgry==4){std::cout << "jestes niewidzialny" << std::endl;}
     
        //std::cout << "pola sa niewidzailne i jest ich wiecej" << std::endl;}
       if(lvlgry == 5) {std::cout << "pol jest wiecej i sa niewidzialne" << std::endl;}
       /*if(lvlgry>5 ) 
        {    std::cout<<"myslisz ze to jest mozliwe?";
                                 char level7;
                    for(;;)
                    {
                           level7=getch();
                           if(level7==98)
                           { break; }
                           
                    }
        }*/
}
bool gra()
{
     wypelnij();
for(;;)
    {
                system("cls");
    rysuj();
//    sprawdz();
if(lvlgry<3) { nplansza[xludzik][yludzik] = static_cast<char>(178); }
if(lvlgry == 3 || lvlgry == 4){ nplansza[xludzik][yludzik] = static_cast<char>(176); }
if(lvlgry >= 5){ nplansza[xludzik][yludzik] = static_cast<char>(32); }
znak=getch();
if(znak==119 &&(xludzik != 0)) {xludzik--;}
if(znak==115 &&(xludzik != 4)) {xludzik++;}
if(znak==97 &&(yludzik != 0)) {yludzik--;}
if(znak==100 &&(yludzik != 4)) {yludzik++;}
if((xludzik==xskarb)&&(yludzik==yskarb)){break;}
system("cls");
}
std::cout << "Brawo! Znalazles skarb na polu " << xskarb+1 << ", " << yskarb+1; 
return true;    
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
            
            std::cout << static_cast<char>(186); break;
      case 1:             std::cout << static_cast<char>(186) << std::endl;       
    
                        std::cout << static_cast<char>(200);
            for(int k =0; k <dlugosc;k++)
            {
            std::cout << static_cast<char>(205);
            }
            std::cout << static_cast<char>(188) << std::endl; break;
           
              }
              return true;
}
int main()
{
title();
    
    
      clock_t endwait;
      endwait = clock () + 2 * CLOCKS_PER_SEC ;
      while (clock() < endwait) {}
    system("cls");
    int nWybor = 0;
    char znak;
    
    do
{
    
     std::cout<<"Poszukiwacze skarbow"<<std::endl;
    std::cout << "MENU (wsad)" << std::endl;
    for(int i = 0; i < 5; i++)
    {
         
         
ramka(0,8);
            switch(i)
                     {
                     case 0: 
                          if(nWybor == 0) {SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 224);} 
                          std::cout << "Nowa gra";
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); break;
                     case 1: 
                          if(nWybor == 1) {SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 224);} 
                          std::cout << "Wczytaj ";
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); break;
                     case 2: 
                          if(nWybor == 2) {SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 224);} 
                          std::cout << "Opcje   ";
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); break;
                     case 3: 
                          if(nWybor == 3) {SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 224);} 
                          std::cout << "Autor   ";
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); break;
                     case 4: 
                          if(nWybor == 4) {SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 224);} 
                          std::cout << "Wyjscie ";
                          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); break;
                     }         
                     ramka(1,8);

    }
    
    //system("pause");
    

znak = getch();
if(znak ==115){ nWybor++; }
if(znak ==119){ nWybor--; }
if(nWybor<0) {nWybor=4;}
if(nWybor>=5) {nWybor=0;}
system("cls");

if(znak==100)
{
    switch(nWybor)           
    {
 case 0: 
             char czy;
             system("cls");
             std::cout<<"Znajdz skarb";
             getch();
             for(;;)
             {
       gra();
       std::cout << ". Jeszcze raz na wyzszym poziomie?? (t/n)";
       czy = getch();
       if(czy ==110){break;}
       lvlgry++;
       if(lvlgry>5) {lvlgry=5;}
       system("cls");
           } break;
           
 case 1: system("cls"); std::cout<<"Nie masz co wczytywac"; getch(); break;
 case 2: system("cls");
    char znakpoziom;
    int wybranewpoziom;
    wybranewpoziom=0;
    
    for(;;)
    {
           ramka(0,13);
           if(wybranewpoziom == 0) {SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 224);} 
     std::cout<<"Poziom    "<< static_cast<char>(174) << lvlgry << static_cast<char>(175);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); 

           ramka(1,13);
           ramka (0,7);
           if(wybranewpoziom == 1) {SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 224);} 
                std::cout << "Powrot ";
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); 
           ramka(1,7);
               if(getch()==224)
               {
     znakpoziom=getch();
     if(( znakpoziom == 77 )&&( wybranewpoziom == 0 )){ lvlgry++; }
     if(( znakpoziom == 75 )&&( wybranewpoziom == 0 )){ lvlgry--; }
     if(lvlgry>5) {lvlgry=5;}
     if(lvlgry<=0) {lvlgry=1;}
     if( znakpoziom == 80 ) { wybranewpoziom++; }
     if( znakpoziom == 72 ) { wybranewpoziom--; }
     if((( znakpoziom == 75 )||(znakpoziom == 77))&&( wybranewpoziom == 1 )){ break; }
     if(wybranewpoziom>1) { wybranewpoziom = 0;}
     if(wybranewpoziom < 0) {wybranewpoziom = 1;}
     system("cls");
                       }
           
     
    }
     break;
 case 3: 
         system("cls");
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
         ramka(0,20);
          std::cout << "Autor: Marcin Mrugas";
          ramka(1,20);
          
          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
          ramka(0,20);SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 224);
          std::cout << "        Powrot      ";
          SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
          ramka(1,20);
          getch();
           break;
 case 4: return 0;
    }
    
}

system("cls"); 
}

while( znak != 27); //ESC

}
