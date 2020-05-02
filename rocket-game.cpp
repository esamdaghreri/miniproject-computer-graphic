//
//  Created by Esam Ali Yahya Daghreri on 14/10/2019.
//  Copyright © 2019 Esam. All rights reserved.
//

#define GL_SILENCE_DEPRECATION
#include <GLUT/glut.h>
#include "math.h"
#include <iostream>
using namespace std;
GLfloat hx = 50.0, hy = 0.0, rx1=0.0,rx2=0.0, rx3=0.0,jx1=0.0,jx2=0.0, jx3=0.0, jx4=0.0, jx5=0.0, ry1 = 650.0, ry2 = 200.0, ry3 = 280.0, hx1 = 0.0, hx2 = 0.0, hx3 = 0.0, hx4 = 0.0, hx5 = 0.0;

void init(void) // Make our limitation of y axis

{

    glClearColor(0.5, 0.5, 0.5, 0.5);

    glMatrixMode(GL_PROJECTION);

    gluOrtho2D(0, 1000, 0.0, 800); // decide the window from left to right and bottom to top.

}

void gameover(){
    cout << "Game Over" << endl;
    exit(0);
}
void move(void)
{
    
    rx1 = rx1 - 10;
    if(rx1<-2000.0)
    {
        rx1=0.0;
        
    }
    rx2 = rx2 - 9;
    if(rx2<-2000.0)
    {
        rx2=0.0;
        
    }
    rx3 = rx3 - 8;
    if(rx3<-2000.0)
    {
        rx3=0.0;
        
    }
    jx1 = jx1 - 13;
    if(jx1<-2800.0)
    {
        jx1=500.0;
        
    }
    jx2 = jx2 - 13;
    if(jx2<-3000.0)
    {
        jx2=500.0;
    }
    jx3 = jx3 - 13;
    if(jx3<-3100.0)
    {
        jx3=400.0;
    }
    jx4 = jx4 - 13;
    if(jx4<-3300.0)
    {
        jx4=800.0;
    }
    jx5 = jx5 - 15;
    if(jx5<-3400.0)
    {
        jx5=400.0;
    }
    hx1 = hx1 - 10;
    if(hx1 < -1600 )
    {
        hx1=0.0;
    }
    hx2 = hx2 - 10;
    if(hx2 < -1830 )
    {
        hx2=0.0;
        
    }
    hx3 = hx3 - 10;
    if(hx3 < -1950 )
    {
        hx3=0.0;
        
    }
    hx4 = hx4 - 10;
    if(hx4 < -2070 )
    {
        hx4=0.0;
        
    }
    hx5 = hx5 - 10;
    if(hx5 < -2200 )
    {
        hx5=0.0;
        
    }
    
    hy -= 5;  //automatic get down
    
    if(hy > 0 && hy < 51 && rx1 < -970 && rx1 > -1050){
        gameover();
    }
    if(hy > -420 && hy < -370 && rx2 < -1670 && rx2 > -1750){
        gameover();
    }
    if(hy > -350 && hy < -300 && rx3 < -1670 && rx3 > -1750){
        gameover();
    }
    if(hy > -130 && hy < -80 && jx1 < -2370 && jx1 > -2470){
        gameover();
    }
    if(hy > 120 && hy < 160 && jx2 < -2570 && jx2 > -2650){
        gameover();
    }
    if(hy > -600 && hy < -550 && jx3 < -2770 && jx3 > -2850){
        gameover();
    }
    if(hy > -280 && hy < -230 && jx4 < -2970 && jx4 > -3050){
        gameover();
    }
    if(hy > -220 && hy < -180 && jx5 < -3170 && jx5 > -3250){
        gameover();
    }
    if(hy > 160 || hy < -530){
        gameover();
    }
    glutPostRedisplay();
}




void Keyboard(unsigned char Key,int x,int y)
{
    if(Key == 32){
        hy = hy + 50;
    }
    glutPostRedisplay();
}

void helicopter(void)
{
    //helicopter-------------------------------------

    //wings front

    glPushMatrix();

    

    glBegin(GL_QUADS);

    glColor3f(0, 0, 0);

    glVertex2i(20, 48);

    glVertex2i(20, 45);

    glVertex2i(90, 45);

    glVertex2i(90, 48);

    glEnd();

    glFlush();



    //Base of wings front

    glBegin(GL_QUADS);

    glColor3f(0, 0, 0);

    glVertex2i(54, 45);

    glVertex2i(57, 45);

    glVertex2i(57, 35);

    glVertex2i(54, 35);

    glEnd();

    glFlush();



    //wings back PART ONE

    glBegin(GL_TRIANGLES);

    glColor3f(0, 0, 0);

    glVertex2i(10, 25);

    glVertex2i(13, 36);

    glVertex2i(17, 34);

    glEnd();

    glFlush();



    //wings back PART TWO

    glBegin(GL_TRIANGLES);

    glColor3f(0, 0, 0);

    glVertex2i(10, 25);

    glVertex2i(3, 16);

    glVertex2i(7, 14);

    glEnd();

    glFlush();





    //Tail triangle shape

    glBegin(GL_TRIANGLES);

    glColor3f(1, 0, 0);

    glVertex2i(10, 25);

    glVertex2i(40, 30);

    glVertex2i(40, 20);

    glEnd();

    glFlush();



    //Tail quads shape

    glBegin(GL_QUADS);

    glColor3f(1, 0, 0);

    glVertex2i(40, 30);

    glVertex2i(40, 20);

    glVertex2i(45, 15);

    glVertex2i(45, 35);

    glEnd();

    glFlush();



    //Body

    glBegin(GL_QUADS);

    glColor3f(1, 0, 0);

    glVertex2i(45, 35);

    glVertex2i(75, 35);

    glVertex2i(75, 15);

    glVertex2i(45, 15);

    glEnd();

    glFlush();



    //Window

    glBegin(GL_TRIANGLES);

    glColor3f(0, 0, 1);

    glVertex2i(60, 34);

    glVertex2i(60, 25);

    glVertex2i(75, 25);

    glEnd();

    glFlush();



    //front

    glBegin(GL_POLYGON);

    glColor3f(1, 0, 0);

    glVertex2i(75, 35);

    glVertex2i(90, 30);

    glVertex2i(100, 25);

    glVertex2i(90, 20);

    glVertex2i(75, 15);

    glEnd();

    glFlush();



    //foot part one

    glBegin(GL_TRIANGLES);

    glColor3f(1, 0, 0);

    glVertex2i(65, 15);

    glVertex2i(55, 5);

    glVertex2i(75, 5);

    glEnd();

    glFlush();



    //foot part two

    glBegin(GL_QUADS);

    glColor3f(0, 0, 0);

    glVertex2i(50, 5);

    glVertex2i(80, 5);

    glVertex2i(80, 0);

    glVertex2i(50, 0);

    glEnd();

    glPopMatrix();

}

void rooket (void)

{
    glPushMatrix();
    glLineWidth(0);
    //1
    glBegin(GL_TRIANGLES);                     //White Color triangle

    glColor3f(1,1,1);

    glVertex2f(10,20);

    glVertex2f(20,30);

    glVertex2f(20,10);

    glEnd();

    //2

    glBegin(GL_QUADS);                     //White Color triangle

    glColor3f(1,1,1);

    glVertex2f(20,30);

    glVertex2f(40,30);

    glVertex2f(40,10);

    glVertex2f(20,10);

    glEnd();

    //3

    glBegin(GL_QUADS);                     //White Color triangle

    glColor3f(1,1,1);

    glVertex2f(40,30);

    glVertex2f(50,30);

    glVertex2f(50,10);

    glVertex2f(40,10);

    glEnd();

    //4

    glBegin(GL_TRIANGLES);                     //White Color triangle

    glColor3f(1,1,1);

    glVertex2f(40,30);

    glVertex2f(55,40);

    glVertex2f(50,30);

    glEnd();

    //5

    glBegin(GL_TRIANGLES);                     //White Color triangle

    glColor3f(1,1,1);

    glVertex2f(40,10);

    glVertex2f(55,0);

    glVertex2f(50,10);

    glEnd();

    //6

    glBegin(GL_QUADS);                     //White Color triangle

    glColor3f(1,1,1);

    glVertex2f(50,30);

    glVertex2f(55,25);

    glVertex2f(55,15);

    glVertex2f(50,10);

    glEnd();

    //7

    glBegin(GL_QUADS);                     //White Color triangle

    glColor3f(1,1,1);

    glVertex2f(55,25);

    glVertex2f(70,30);

    glVertex2f(70,10);

    glVertex2f(55,15);

    glEnd();

    //8

    glBegin(GL_TRIANGLES);                     //Red Color triangle

    glColor3f(1, 0, 0);

    glVertex2f(70,30);

    glVertex2f(80,25);

    glVertex2f(70,20);

    glEnd();

    //9

    glBegin(GL_TRIANGLES);                     //Red Color triangle

    glColor3f(1, 0, 0);

    glVertex2f(70,25);

    glVertex2f(80,20);

    glVertex2f(70,15);

    glEnd();

    //10

    glBegin(GL_TRIANGLES);                     //Red Color triangle

    glColor3f(1, 0, 0);

    glVertex2f(70,20);

    glVertex2f(80,15);

    glVertex2f(70,10);

    glEnd();

    glPopMatrix();




}



void jet (void)

{
    glPushMatrix();
    glBegin(GL_QUADS);

    glColor3f(0.9, 0.9, 0.9);

    glVertex2i(25,20);

    glVertex2i(125,20);

    glVertex2i(125,5);

    glVertex2i(25,5);

    glEnd();

    glFlush();

    

    glBegin(GL_QUADS);

    glColor3f(0.4, 0.4, 0.4);

    glVertex2i(110,15);

    glVertex2i(130,15);

    glVertex2i(110,10);

    glVertex2i(130,10);

    glEnd();

    glFlush();

    

    /// FOR TRIANGLES

    glBegin(GL_TRIANGLES);

    glColor3f(0.4, 0.4, 0.4);

    glVertex2i(13,13);

    glVertex2i(25,20);

    glVertex2i(25,5);

    glEnd();

    glFlush();

    

    glBegin(GL_TRIANGLES);

    glColor3f(0.4, 0.4, 0.4);

    glVertex2i(105,20);

    glVertex2i(120,40);

    glVertex2i(120,20);

    glEnd();

    glFlush();



    glBegin(GL_TRIANGLES);

    glColor3f(0.4, 0.4, 0.4);

    glVertex2i(65,5);

    glVertex2i(65,10);

    glVertex2i(105,10);

    glEnd();

    glFlush();



    glBegin(GL_TRIANGLES);

    glColor3f(0.4, 0.4, 0.4);

    glVertex2i(110,10);

    glVertex2i(110,5);

    glVertex2i(130,5);

    glEnd();

    glPopMatrix();

}

void houses(void)
{
    glPushMatrix();
    glBegin(GL_TRIANGLES);                     //Blue Color triangle
    glColor3f(0.7,0.4,0);
    glVertex2f(10,50);
    glVertex2f(30,70);
    glVertex2f(50,50);
    glEnd();
    
    glBegin(GL_QUADS);                     //Blue Color triangle
    glColor3f(0.7,0.4,0);
    glVertex2f(10,0);
    glVertex2f(10,50);
    glVertex2f(50,50);
    glVertex2f(50,0);
    glEnd();
    
    glBegin(GL_QUADS);                     //Blue Color triangle
    glColor3f(0,0,0);
    glVertex2f(20,0);
    glVertex2f(20,10);
    glVertex2f(25,10);
    glVertex2f(25,0);
    glEnd();
    glBegin(GL_QUADS);                     //Blue Color triangle
    glColor3f(0,0,0);
    glVertex2f(20,0);
    glVertex2f(20,30);
    glVertex2f(30,40);
    glVertex2f(30,0);
    glEnd();
    //2
    glBegin(GL_QUADS);                     //Blue Color triangle
    glColor3f(0.7,0.4,0);
    glVertex2f(60,0);
    glVertex2f(60,50);
    glVertex2f(90,50);
    glVertex2f(90,0);
    glEnd();
    glBegin(GL_TRIANGLES);                     //Blue Color triangle
    glColor3f(0.7,0.4,0);
    glVertex2f(60,50);
    glVertex2f(75,75);
    glVertex2f(90,50);
    glEnd();
    glBegin(GL_QUADS);                     //Blue Color triangle
    glColor3f(0.7,0.4,0);
    glVertex2f(65,0);
    glVertex2f(60,15);
    glVertex2f(62,15);
    glVertex2f(62,0);
    glEnd();
    glBegin(GL_QUADS);                     //Blue Color triangle
    glColor3f(0,0,0);
    glVertex2f(70,30);
    glVertex2f(70,40);
    glVertex2f(80,40);
    glVertex2f(80,30);
    glEnd();
    //3
    glBegin(GL_QUADS);                     //Blue Color triangle
    glColor3f(0.2f,1.0f,1.0f);
    glVertex2f(100,0);
    glVertex2f(100,30);
    glVertex2f(130,30);
    glVertex2f(130,0);
    glEnd();
    glBegin(GL_QUADS);                     //Blue Color triangle
    glColor3f(0.7,0.4,0);
    glVertex2f(105,0);
    glVertex2f(105,25);
    glVertex2f(125,25);
    glVertex2f(125,0);
    glEnd();
    //4
    glBegin(GL_QUADS);                     //Blue Color triangle
    glColor3f(0.7,0.4,0);
    glVertex2f(140,0);
    glVertex2f(140,40);
    glVertex2f(150,40);
    glVertex2f(150,0);
    glEnd();
    glBegin(GL_TRIANGLES);                     //Blue Color triangle
    glColor3f(0.7,0.4,0);
    glVertex2f(140,40);
    glVertex2f(145,50);
    glVertex2f(150,40);
    glEnd();
    glPopMatrix();
}

void display(void)

{

    glClear(GL_COLOR_BUFFER_BIT);
    //sky
    glBegin(GL_QUADS);
    glColor3f(0.3,1.0,1.0);
    glVertex2i(0,0);
    glVertex2i(0,800);
    glVertex2i(1000,800);
    glVertex2i(1000,0);
    glEnd();
    glPushMatrix();
    glTranslatef(hx, 600+hy,0);
    helicopter();
    glPopMatrix();
//rocket 1
    glPushMatrix();
    glTranslatef(1100+rx1, ry1, 0);
    rooket();
    glPopMatrix();
//rocket 2
    glPushMatrix();
    glTranslatef(1800+rx2, ry2, 0);
    rooket();
    glPopMatrix();
//rocket 3
    glPushMatrix();
    glTranslatef(1800+rx3, ry3, 0);
    rooket();
    glPopMatrix();
//jet 1
    glPushMatrix();
    glTranslatef(2500+jx1, 500,0);
    jet();
    glPopMatrix();
//jet 2
    glPushMatrix();
    glTranslatef(2700+jx2, 750,0);
    jet();
    glPopMatrix();
//jet 3
    glPushMatrix();
    glTranslatef(2900+jx3, 50,0);
    jet();
    glPopMatrix();
//jet 4
    glPushMatrix();
    glTranslatef(3100+jx4, 330,0);
    jet();
    glPopMatrix();
//jet 5
    glPushMatrix();
    glTranslatef(3300+jx5, 400,0);
    jet();
    glPopMatrix();
    
//houses
    glPushMatrix();
    glTranslatef(1000 + hx1, 0, 0);
    houses();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(1230 + hx2, 0, 0);
    houses();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(1350 + hx3, 0, 0);
    houses();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(1470 + hx4, 0, 0);
    houses();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(1600 + hx5, 0, 0);
    houses();
    glPopMatrix();

    glutSwapBuffers();

    glFlush();



}


int main(int argc, char * argv[])

{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE |GLUT_RGBA);

    glutInitWindowPosition(50,50);

    glutInitWindowSize(1000,800);

    glutCreateWindow("WINDOW Line");

    init();
    
    glutIdleFunc(move);

    glutKeyboardFunc(Keyboard);

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}
