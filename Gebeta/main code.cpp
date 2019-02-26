#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <iostream>
using namespace std;
using namespace sf;
int main()
{

  sf::RenderWindow window3(sf::VideoMode(800,600),"Gebeta");
  sf::SoundBuffer buffer;
  if(!buffer.loadFromFile("kirar.ogg"))
  {

      cout<<"error"<<endl;
  }
  sf::Sound sound;
  sound.setBuffer(buffer);
  sound.play();









  sf::Texture BackgroundTexture2;
  sf::Sprite background2;
  sf::Vector2u TextureSize;
  sf::Vector2u WindowSize;



  if(!BackgroundTexture2.loadFromFile("menupn.png"))
  {
    return -1;
  }
  else
  {
    TextureSize = BackgroundTexture2.getSize();
    WindowSize = window3.getSize();

    float ScaleX = (float) WindowSize.x / TextureSize.x;
    float ScaleY = (float) WindowSize.y / TextureSize.y;

    background2.setTexture(BackgroundTexture2);
    background2.setScale(ScaleX, ScaleY);
  }
bool draw = false;
bool draw2 = false;

  while(window3.isOpen())
  {
    sf::Event event;

    while(window3.pollEvent(event))
    {
        switch(event.type)
        {
            case sf::Event::Closed:
                window3.close();
        }
    }
/* sf::Event event1;
    while(window3.pollEvent(event1))
    {
       switch ( event1.type)
        {
      case sf::Event::MouseMoved:
            std::cout<<"x = " <<event1.mouseMove.x<<std::endl;
            std::cout<<"y = " <<event1.mouseMove.y<<std::endl;
            std::cout<<std::endl;
            break;
        }
    }

*/
        if( sf::Mouse::isButtonPressed(sf::Mouse::Left)
       && sf::Mouse::getPosition(window3).x >= 435
       && sf::Mouse::getPosition(window3).y >=226
       && sf::Mouse::getPosition(window3).x <= 485
       && sf::Mouse::getPosition(window3).y <= 260
       ){
//    sf::RenderWindow window3(sf::VideoMode(800,600),"Gebeta");

    Texture t1,t2,tEnd,tEnd2;
    Texture tMain,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20,x21,x22,x23,x24,x25,x26,x27,x28,x29,x30,x31,x32,x33,x34,x35,x36,x37,x38,x39,x40,x41,x42,x43,x44,x45,x46,x47,x48,end1,end2;

     tEnd.loadFromFile("comment 1.png");
     sf::Sprite sEnd(tEnd);
     sEnd.setPosition(354,488);
     tEnd2.loadFromFile("comment.png");
     sf::Sprite sEnd2(tEnd2);
     sEnd2.setPosition(354,488);
    end1.loadFromFile("end(2).png");
    end2.loadFromFile("end(3).png");
    t1.loadFromFile("main.png");
    //t2.loadFromFile("1a.png");
    x1.loadFromFile("1a.png");
    //tMain.loadFromFile("main.png");
    x2.loadFromFile("1b.png");
    x3.loadFromFile("1c.png");
    x4.loadFromFile("1d.png");
    x5.loadFromFile("2a.png");
    x6.loadFromFile("2b.png");
    x7.loadFromFile("2c.png");
    x8.loadFromFile("2d.png");
    x9.loadFromFile("3a.png");
    x10.loadFromFile("3b.png");
    x11.loadFromFile("3c.png");
    x12.loadFromFile("3d.png");
    x13.loadFromFile("4a.png");
    x14.loadFromFile("4b.png");
    x15.loadFromFile("4c.png");
    x16.loadFromFile("4d.png");
    x17.loadFromFile("5a.png");
    x18.loadFromFile("5b.png");
    x19.loadFromFile("5c.png");
    x20.loadFromFile("5d.png");
    x21.loadFromFile("6a.png");
    x22.loadFromFile("6b.png");
    x23.loadFromFile("6c.png");
    x24.loadFromFile("6d.png");
    x25.loadFromFile("7a.png");
    x26.loadFromFile("7b.png");
    x27.loadFromFile("7c.png");
    x28.loadFromFile("7d.png");
    x29.loadFromFile("8a.png");
    x30.loadFromFile("8b.png");
    x31.loadFromFile("8c.png");
    x32.loadFromFile("8d.png");
    x33.loadFromFile("9a.png");
    x34.loadFromFile("9b.png");
    x35.loadFromFile("9c.png");
    x36.loadFromFile("9d.png");
    x37.loadFromFile("10a.png");
    x38.loadFromFile("10b.png");
    x39.loadFromFile("10c.png");
    x40.loadFromFile("10d.png");
    x41.loadFromFile("11a.png");
    x42.loadFromFile("11b.png");
    x43.loadFromFile("11c.png");
    x44.loadFromFile("11d.png");
    x45.loadFromFile("12a.png");
    x46.loadFromFile("12b.png");
    x47.loadFromFile("12c.png");
    x48.loadFromFile("12d.png");


     sf::Vector2u TextureSize;
     sf::Vector2u WindowSize;

    Sprite s1(t1) ,s2(t2) ;
   Sprite sMain(tMain),y1(x1),y2(x2),y3(x3),y4(x4),y5(x5),y6(x6),y7(x7),y8(x8),y9(x9),y10(x10),y11(x11),y12(x12),y13(x13),y14(x14),y15(x15),y16(x16),y17(x17),y18(x18),y19(x19),y20(x20),y21(x21),y22(x22),y23(x23),y24(x24),y25(x25),y26(x26),y27(x27),y28(x28),y29(x29),y30(x30),y31(x31),y32(x32),y33(x33),y34(x34),y35(x35),y36(x36),y37(x37),y38(x38),y39(x39),y40(x40),y41(x41),y42(x42),y43(x43),y44(x44),y45(x45),y46(x46),y47(x47),y48(x48),y49(end1),y50(end2);
 y49.setPosition(sf::Vector2f(154,490));
 y50.setPosition(sf::Vector2f(100,44));
 y1.setPosition(sf::Vector2f(280,330));
 y2.setPosition(sf::Vector2f(280,350));
 y3.setPosition(sf::Vector2f(300,330));
 y4.setPosition(sf::Vector2f(300,350));
 y5.setPosition(sf::Vector2f(330,330));
 y6.setPosition(sf::Vector2f(330,350));
 y7.setPosition(sf::Vector2f(350,330));
 y8.setPosition(sf::Vector2f(350,350));
 y9.setPosition(sf::Vector2f(380,330));
 y10.setPosition(sf::Vector2f(380,350));
 y11.setPosition(sf::Vector2f(400,330));
 y12.setPosition(sf::Vector2f(400,350));
 y13.setPosition(sf::Vector2f(430,330));
 y14.setPosition(sf::Vector2f(430,350));
 y15.setPosition(sf::Vector2f(450,330));
 y16.setPosition(sf::Vector2f(450,350));
 y17.setPosition(sf::Vector2f(480,330));
 y18.setPosition(sf::Vector2f(480,350));
 y19.setPosition(sf::Vector2f(500,330));
 y20.setPosition(sf::Vector2f(500,350));
 y21.setPosition(sf::Vector2f(530,330));
 y22.setPosition(sf::Vector2f(530,350));
 y23.setPosition(sf::Vector2f(550,330));
 y24.setPosition(sf::Vector2f(550,350));
 y25.setPosition(sf::Vector2f(280,100));
 y26.setPosition(sf::Vector2f(280,120));
 y27.setPosition(sf::Vector2f(300,100));
 y28.setPosition(sf::Vector2f(300,120));
 y29.setPosition(sf::Vector2f(330,100));
 y30.setPosition(sf::Vector2f(330,120));
 y31.setPosition(sf::Vector2f(350,100));
 y32.setPosition(sf::Vector2f(350,120));
 y33.setPosition(sf::Vector2f(380,100));
 y34.setPosition(sf::Vector2f(380,120));
 y35.setPosition(sf::Vector2f(400,100));
 y36.setPosition(sf::Vector2f(400,120));
 y37.setPosition(sf::Vector2f(430,100));
 y38.setPosition(sf::Vector2f(430,120));
 y39.setPosition(sf::Vector2f(450,100));
 y40.setPosition(sf::Vector2f(450,120));
 y41.setPosition(sf::Vector2f(480,100));
 y42.setPosition(sf::Vector2f(480,120));
 y43.setPosition(sf::Vector2f(500,100));
 y44.setPosition(sf::Vector2f(500,120));
 y45.setPosition(sf::Vector2f(530,100));
 y46.setPosition(sf::Vector2f(530,120));
 y47.setPosition(sf::Vector2f(550,100));
 y48.setPosition(sf::Vector2f(550,120));


if(!t1.loadFromFile("main.png"))
  {
    cout<< " failed to load image " << endl ;
  }
  else
  {
    TextureSize = t1.getSize(); //Get size of texture.
    WindowSize = window3.getSize();             //Get size of window.

    float ScaleX = (float) WindowSize.x / TextureSize.x;
    float ScaleY = (float) WindowSize.y / TextureSize.y;     //Calculate scale.

    s1.setTexture(t1);
    s1.setScale(ScaleX, ScaleY);      //Set scale.
  }



    bool isMove=false;
    bool isMove1=false;
    bool isMove2=false;
    bool isMove3=false;
    bool isMove4=false;
    bool isMove5=false;
    bool isMove6=false;
    bool isMove7=false;
    bool isMove8=false;
    bool isMove9=false;
    bool isMove10=false;
    bool isMove11=false;
    bool isMove12=false;
    bool isMove13=false;
    bool isMove14=false;
    bool isMove15=false;
    bool isMove16=false;
    bool isMove17=false;
    bool isMove18=false;
    bool isMove19=false;
    bool isMove20=false;
    bool isMove21=false;
    bool isMove22=false;
    bool isMove23=false;
    bool isMove24=false;
    bool isMove25=false;
    bool isMove26=false;
    bool isMove27=false;
    bool isMove28=false;
    bool isMove29=false;
    bool isMove30=false;
    bool isMove31=false;
    bool isMove32=false;
    bool isMove33=false;
    bool isMove34=false;
    bool isMove35=false;
    bool isMove36=false;
    bool isMove37=false;
    bool isMove38=false;
    bool isMove39=false;
    bool isMove40=false;
    bool isMove41=false;
    bool isMove42=false;
    bool isMove43=false;
    bool isMove44=false;
    bool isMove45=false;
    bool isMove46=false;
    bool isMove47=false;
   // bool isMove48=false;

    float dx=0,dy=0;

    while (window3.isOpen())
    {
        Vector2i pos=Mouse::getPosition(window3);

        Event e;
//find
/*sf::Event event1;
    while(window3.pollEvent(event1))
    {
       switch ( event1.type)
        {
      case sf::Event::MouseMoved:
            std::cout<<"x = " <<event1.mouseMove.x<<std::endl;
            std::cout<<"y = " <<event1.mouseMove.y<<std::endl;
            std::cout<<std::endl;
            break;
        }
    }*/
        while (window3.pollEvent(e))
        {
            if (e.type ==Event::Closed)
                window3.close();

        /*        /// for s2
            if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (s2.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove=true;
                dx=pos.x - s2.getPosition().x;
                dy=pos.y - s2.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove=false;} */

            /// y1


            if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y1.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove=true;
                dx=pos.x - y1.getPosition().x;
                dy=pos.y - y1.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove=false;}
            ////


            /// for y2
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y2.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove1=true;
                dx=pos.x - y2.getPosition().x;
                dy=pos.y - y2.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove1=false;}
            ////

            ///for y3
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y3.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove2=true;
                dx=pos.x - y3.getPosition().x;
                dy=pos.y - y3.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove2=false;}
            ////

            /// for y4
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y4.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove3=true;
                dx=pos.x - y4.getPosition().x;
                dy=pos.y - y4.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove3=false;}
            ////
            /// for y5
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y5.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove4=true;
                dx=pos.x - y5.getPosition().x;
                dy=pos.y - y5.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove4=false;}
            ////
            /// for y6
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y6.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove5=true;
                dx=pos.x - y6.getPosition().x;
                dy=pos.y - y6.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove5=false;}
            ////
            /// for y7
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y7.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove6=true;
                dx=pos.x - y7.getPosition().x;
                dy=pos.y - y7.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove6=false;}
            ////
            ///
            /// for y8
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y8.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove7=true;
                dx=pos.x - y8.getPosition().x;
                dy=pos.y - y8.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove7=false;}
            ////
            ///
            /// for y9
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y9.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove8=true;
                dx=pos.x - y9.getPosition().x;
                dy=pos.y - y9.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove8=false;}
            ////
            ///
            /// for y10
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y10.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove9=true;
                dx=pos.x - y10.getPosition().x;
                dy=pos.y - y10.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove9=false;}
            ////
            ///
            /// for y11
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y11.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove10=true;
                dx=pos.x - y11.getPosition().x;
                dy=pos.y - y11.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove10=false;}
            ////
            ///
            /// for y12
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y12.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove11=true;
                dx=pos.x - y12.getPosition().x;
                dy=pos.y - y12.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove11=false;}
            ////
            ///
            /// for y13
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y13.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove12=true;
                dx=pos.x - y13.getPosition().x;
                dy=pos.y - y13.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove12=false;}
            ////
            ///
            /// for y14
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y14.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove13=true;
                dx=pos.x - y14.getPosition().x;
                dy=pos.y - y14.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove13=false;}
            ////
            ///
            /// for y15
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y15.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove14=true;
                dx=pos.x - y15.getPosition().x;
                dy=pos.y - y15.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove14=false;}
            ////
            ///
            /// for y16
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y16.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove15=true;
                dx=pos.x - y16.getPosition().x;
                dy=pos.y - y16.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove15=false;}
            ////
            ///
            /// for y17
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y17.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove16=true;
                dx=pos.x - y17.getPosition().x;
                dy=pos.y - y17.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove16=false;}
            ////
            ///
            /// for y18
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y18.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove17=true;
                dx=pos.x - y18.getPosition().x;
                dy=pos.y - y18.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove17=false;}
            ////
            ////// for y19
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y19.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove18=true;
                dx=pos.x - y19.getPosition().x;
                dy=pos.y - y19.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove18=false;}
            ////
            ///
            /// for y20
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y20.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove19=true;
                dx=pos.x - y20.getPosition().x;
                dy=pos.y - y20.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove19=false;}
            ////
            ///
            /// for y21
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y21.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove20=true;
                dx=pos.x - y21.getPosition().x;
                dy=pos.y - y21.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove20=false;}
            ////
            ///
            /// for y22
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y22.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove21=true;
                dx=pos.x - y22.getPosition().x;
                dy=pos.y - y22.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove21=false;}
            ////
            ///
            /// for y23
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y23.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove22=true;
                dx=pos.x - y23.getPosition().x;
                dy=pos.y - y23.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove22=false;}
            ////
            ///
            /// for y24
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y24.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove23=true;
                dx=pos.x - y24.getPosition().x;
                dy=pos.y - y24.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove23=false;}
            ////
            ///
            /// for y25
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y25.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove24=true;
                dx=pos.x - y25.getPosition().x;
                dy=pos.y - y25.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove24=false;}
            ////
            ///
            /// for y26
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y26.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove25=true;
                dx=pos.x - y26.getPosition().x;
                dy=pos.y - y26.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove25=false;}
            ////
            ///
            /// for y27
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y27.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove26=true;
                dx=pos.x - y27.getPosition().x;
                dy=pos.y - y27.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove26=false;}
            ////
            ///
            /// for y28
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y28.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove27=true;
                dx=pos.x - y28.getPosition().x;
                dy=pos.y - y28.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove27=false;}
            ////
            ///
            /// for y29
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y29.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove28=true;
                dx=pos.x - y29.getPosition().x;
                dy=pos.y - y29.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove28=false;}
            ////
            ///
            /// for y30
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y30.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove29=true;
                dx=pos.x - y30.getPosition().x;
                dy=pos.y - y30.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove29=false;}
            ////
            ///
            /// for y31
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y31.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove30=true;
                dx=pos.x - y31.getPosition().x;
                dy=pos.y - y31.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove30=false;}
            ////
            ///
            /// for y32
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y32.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove31=true;
                dx=pos.x - y32.getPosition().x;
                dy=pos.y - y32.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove31=false;}
            ////
            ///
            /// for y33
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y33.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove32=true;
                dx=pos.x - y33.getPosition().x;
                dy=pos.y - y33.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove32=false;}
            ////
            ///
            /// for y34
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y34.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove33=true;
                dx=pos.x - y34.getPosition().x;
                dy=pos.y - y34.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove33=false;}
            ////
            ///
            /// for y35
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y35.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove34=true;
                dx=pos.x - y35.getPosition().x;
                dy=pos.y - y35.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove34=false;}
            ////
            ///
            /// for y36
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y36.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove35=true;
                dx=pos.x - y36.getPosition().x;
                dy=pos.y - y36.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove35=false;}
            ////
            ///
            /// for y37
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y37.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove36=true;
                dx=pos.x - y37.getPosition().x;
                dy=pos.y - y37.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove36=false;}
            ////
            ///
            /// for y38
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y38.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove37=true;
                dx=pos.x - y38.getPosition().x;
                dy=pos.y - y38.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove37=false;}
            ////
            ///
            /// for y39
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y39.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove38=true;
                dx=pos.x - y39.getPosition().x;
                dy=pos.y - y39.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove38=false;}
            ////
            ///
            /// for y40
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y40.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove39=true;
                dx=pos.x - y40.getPosition().x;
                dy=pos.y - y40.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove39=false;}
            ////
            ///
            /// for y41
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y41.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove40=true;
                dx=pos.x - y41.getPosition().x;
                dy=pos.y - y41.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove40=false;}
            ////
            ///
            /// for y42
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y42.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove41=true;
                dx=pos.x - y42.getPosition().x;
                dy=pos.y - y42.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove41=false;}
            ////
            ///
            /// for y43
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y43.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove42=true;
                dx=pos.x - y43.getPosition().x;
                dy=pos.y - y43.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove42=false;}
            ////
            ///
            /// for y44
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y44.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove43=true;
                dx=pos.x - y44.getPosition().x;
                dy=pos.y - y44.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove43=false;}
            ////
            ///
            /// for y45
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y45.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove44=true;
                dx=pos.x - y45.getPosition().x;
                dy=pos.y - y45.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove44=false;}
            ////
            ///
            /// for y46
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y46.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove45=true;
                dx=pos.x - y46.getPosition().x;
                dy=pos.y - y46.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove45=false;}
            ////
            ///
            /// for y47
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y47.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove46=true;
                dx=pos.x - y47.getPosition().x;
                dy=pos.y - y47.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove46=false;}
            ////
            ///
            /// for y48
                        if (e.type ==Event::MouseButtonPressed)
               {
                   if (e.key.code == Mouse::Left) {
                  if (y48.getGlobalBounds().contains(pos.x,pos.y))
            {
                isMove47=true;
                dx=pos.x - y48.getPosition().x;
                dy=pos.y - y48.getPosition().y;
            }   }
               }
        if (e.type == Event::MouseButtonReleased){
            if(e.key.code == Mouse::Left)
            isMove47=false;}
            ////
            ///





        //if (isMove) s2.setPosition(pos.x-dx,pos.y-dy);
        if (isMove) y1.setPosition(pos.x-dx,pos.y-dy);
        if (isMove1) y2.setPosition(pos.x-dx,pos.y-dy);
        if (isMove2) y3.setPosition(pos.x-dx,pos.y-dy);
        if (isMove3) y4.setPosition(pos.x-dx,pos.y-dy);
        if (isMove4) y5.setPosition(pos.x-dx,pos.y-dy);
        if (isMove5) y6.setPosition(pos.x-dx,pos.y-dy);
        if (isMove6) y7.setPosition(pos.x-dx,pos.y-dy);
        if (isMove7) y8.setPosition(pos.x-dx,pos.y-dy);
        if (isMove8) y9.setPosition(pos.x-dx,pos.y-dy);
        if (isMove9) y10.setPosition(pos.x-dx,pos.y-dy);
        if (isMove10) y11.setPosition(pos.x-dx,pos.y-dy);
        if (isMove11) y12.setPosition(pos.x-dx,pos.y-dy);
        if (isMove12) y13.setPosition(pos.x-dx,pos.y-dy);
        if (isMove13) y14.setPosition(pos.x-dx,pos.y-dy);
        if (isMove14) y15.setPosition(pos.x-dx,pos.y-dy);
        if (isMove15) y16.setPosition(pos.x-dx,pos.y-dy);
        if (isMove16) y17.setPosition(pos.x-dx,pos.y-dy);
        if (isMove17) y18.setPosition(pos.x-dx,pos.y-dy);
        if (isMove18) y19.setPosition(pos.x-dx,pos.y-dy);
        if (isMove19) y20.setPosition(pos.x-dx,pos.y-dy);
        if (isMove20) y21.setPosition(pos.x-dx,pos.y-dy);
        if (isMove21) y22.setPosition(pos.x-dx,pos.y-dy);
        if (isMove22) y23.setPosition(pos.x-dx,pos.y-dy);
        if (isMove23) y24.setPosition(pos.x-dx,pos.y-dy);
        if (isMove24) y25.setPosition(pos.x-dx,pos.y-dy);
        if (isMove25) y26.setPosition(pos.x-dx,pos.y-dy);
        if (isMove26) y27.setPosition(pos.x-dx,pos.y-dy);
        if (isMove27) y28.setPosition(pos.x-dx,pos.y-dy);
        if (isMove28) y29.setPosition(pos.x-dx,pos.y-dy);
        if (isMove29) y30.setPosition(pos.x-dx,pos.y-dy);
        if (isMove30) y31.setPosition(pos.x-dx,pos.y-dy);
        if (isMove31) y32.setPosition(pos.x-dx,pos.y-dy);
        if (isMove32) y33.setPosition(pos.x-dx,pos.y-dy);
        if (isMove33) y34.setPosition(pos.x-dx,pos.y-dy);
        if (isMove34) y35.setPosition(pos.x-dx,pos.y-dy);
        if (isMove35) y36.setPosition(pos.x-dx,pos.y-dy);
        if (isMove36) y37.setPosition(pos.x-dx,pos.y-dy);
        if (isMove37) y38.setPosition(pos.x-dx,pos.y-dy);
        if (isMove38) y39.setPosition(pos.x-dx,pos.y-dy);
        if (isMove39) y40.setPosition(pos.x-dx,pos.y-dy);
        if (isMove40) y41.setPosition(pos.x-dx,pos.y-dy);
        if (isMove41) y42.setPosition(pos.x-dx,pos.y-dy);
        if (isMove42) y43.setPosition(pos.x-dx,pos.y-dy);
        if (isMove43) y44.setPosition(pos.x-dx,pos.y-dy);
        if (isMove44) y45.setPosition(pos.x-dx,pos.y-dy);
        if (isMove45) y46.setPosition(pos.x-dx,pos.y-dy);
        if (isMove46) y47.setPosition(pos.x-dx,pos.y-dy);
        if (isMove47) y48.setPosition(pos.x-dx,pos.y-dy);
                    //////

         if( sf::Mouse::isButtonPressed(sf::Mouse::Left)
       && sf::Mouse::getPosition(window3).x >= 99
       && sf::Mouse::getPosition(window3).y >=44
       && sf::Mouse::getPosition(window3).x <= 193
       && sf::Mouse::getPosition(window3).y <= 88
       ){
             draw=true;
             draw2=false;

        }


 if( sf::Mouse::isButtonPressed(sf::Mouse::Left)
       && sf::Mouse::getPosition(window3).x >= 153
       && sf::Mouse::getPosition(window3).y >=490
       && sf::Mouse::getPosition(window3).x <= 250
       && sf::Mouse::getPosition(window3).y <= 533
       )
{
        draw2=true;
        draw=false;
}

        }
    window3.clear();
   window3.draw(s1);
   // window3.draw(s2);
    window3.draw(y49);
    window3.draw(y50);
    window3.draw(y1);
    window3.draw(y2);
    window3.draw(y3);
    window3.draw(y4);
    window3.draw(y5);
    window3.draw(y6);
    window3.draw(y7);
    window3.draw(y8);
    window3.draw(y9);
    window3.draw(y10);
    window3.draw(y11);
    window3.draw(y12);
    //window3.draw(y13);
    //window3.draw(y14);
    window3.draw(y13);
    window3.draw(y14);
    window3.draw(y15);
    window3.draw(y16);
    window3.draw(y17);
    window3.draw(y18);
    window3.draw(y19);
    window3.draw(y20);
    window3.draw(y21);
    window3.draw(y22);
    window3.draw(y23);
    window3.draw(y24);
    window3.draw(y25);
    window3.draw(y26);
    window3.draw(y27);
    window3.draw(y28);
    window3.draw(y29);
    window3.draw(y30);
    window3.draw(y31);
    window3.draw(y32);
    window3.draw(y33);
    window3.draw(y34);
    window3.draw(y35);
    window3.draw(y36);
    window3.draw(y37);
    window3.draw(y38);
    window3.draw(y39);
    window3.draw(y40);
    window3.draw(y41);
    window3.draw(y42);
    window3.draw(y43);
    window3.draw(y44);
    window3.draw(y45);
    window3.draw(y46);
    window3.draw(y47);
    window3.draw(y48);
    if(draw)  window3.draw(sEnd);
    if(draw2)  window3.draw(sEnd2);
    window3.display();
    }}

 if( sf::Mouse::isButtonPressed(sf::Mouse::Left)
       && sf::Mouse::getPosition(window3).x >= 435
       && sf::Mouse::getPosition(window3).y >=292
       && sf::Mouse::getPosition(window3).x <= 485
       && sf::Mouse::getPosition(window3).y <= 323
       ){

          sf::RenderWindow window3(sf::VideoMode(800,600),"Gebeta");
  sf::Texture texture5;
  sf::Sprite sprite5;
  sf::Vector2u TextureSize;
  sf::Vector2u WindowSize;

  if(!texture5.loadFromFile("n.png"))
  {
    std::cout<< " failed to load image " <<std:: endl ;
  }
  else
  {
    TextureSize = texture5.getSize();
    WindowSize = window3.getSize();

    float ScaleX = (float) WindowSize.x / TextureSize.x;
    float ScaleY = (float) WindowSize.y / TextureSize.y;

    sprite5.setTexture(texture5);
    sprite5.setScale(ScaleX, ScaleY);
  }

  while(window3.isOpen())
  {
    sf::Event event;

    while(window3.pollEvent(event))
    {

        switch(event.type)
        {
            case sf::Event::Closed:
                window3.close();
        }

         if (event.type == sf::Event::KeyPressed)
                            {
                                switch (event.key.code)
                                {
                                case  sf::Keyboard::Escape : window3.close(); break;
                                case  sf::Keyboard::Space : window3.close(); break;
                                default : break;
                                }
                            }

    }
    window3.draw(sprite5);
    window3.display();
  }
 }
//

 if( sf::Mouse::isButtonPressed(sf::Mouse::Left)
       && sf::Mouse::getPosition(window3).x >= 434
       && sf::Mouse::getPosition(window3).y >=362
       && sf::Mouse::getPosition(window3).x <= 485
       && sf::Mouse::getPosition(window3).y <= 388
       ){
window3.close();

       }//





    window3.draw(background2);

    window3.display();
 }
}
