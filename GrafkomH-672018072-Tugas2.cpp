#include <iostream>
#include <Windows.h>
#include <GL/freeglut.h>
#include <GL/glut.h>
#include <GL/GL.h>
#include <stdio.h>

void layang() {

    //Kertas
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glColor3f(1.8, 0.8, 1.1);
    glVertex2d(0, 350);
    glColor3f(0.9, 1.3, 0.5);
    glVertex2d(-350, 0);
    glColor3f(1.0, 0.6, 1.9);
    glVertex2d(0, -350);
    glColor3f(0.3, 1.9, 1.3);
    glVertex2d(350, 0);
    glEnd();
    glFlush();

    //Rangka Luar
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2d(0, 350);
    glVertex2d(-350, 0);
    glVertex2d(0, -350);
    glVertex2d(350, 0);
    glEnd();
    glFlush();

    //Rangka Dalam Horizontal
    glBegin(GL_LINES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2d(350, 0);
    glVertex2d(-350, 0);
    glEnd();
    glFlush();

    //Rangka Dalam Vertikal
    glBegin(GL_LINES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2d(0, 350);
    glVertex2d(0, -350);
    glEnd();
    glFlush();

}

void main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(400, 400);
    glutCreateWindow("GrafkomH-672018072-Tugas2");
    gluOrtho2D(-400.0, 400.0, -400.0, 400.0);
    glutDisplayFunc(layang);
    glutMainLoop();
}