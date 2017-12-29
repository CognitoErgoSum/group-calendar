#include "Display.h"
#include <iostream>

void bitmapString(float x, float y, std::string renderString){
	glRasterPos2f(x,y);
	void * font = GLUT_BITMAP_HELVETICA_18;
	for(std::string::iterator i = renderString.begin(); i != renderString.end(); i++){
		char c = *i;
	    glutBitmapCharacter(font,c);
	}
}


/* Handler for window-repaint event. Call back when the window first appears and
   whenever the window needs to be re-painted. */
void display() {
   glClearColor(0.0f, 0.8f, 0.8f, 1.0f); // Set background color to black and opaque
   glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer

   // Draw Title
   glColor3f(1.0, 1.0, 1.0);
   std::string s = "Group Calendar";

   // End Draw Title
   /*
   // Draw a White 1x1 Rectangle centered at origin
   glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(1.0f, 1.0f, 1.0f); // White
      glVertex2f(-0.5f, -0.5f);    // x, y
      glVertex2f( 0.5f, -0.5f);
      glVertex2f( 0.5f,  0.5f);
      glVertex2f(-0.5f,  0.5f);
   glEnd();*/

   glFlush();  // Render now
}

Display::Display(int argc, char * argv[]){
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(GLUT_SCREEN_WIDTH, GLUT_SCREEN_HEIGHT);   // Set the window's initial width & height
	glutInitWindowPosition(GLUT_SCREEN_WIDTH, GLUT_SCREEN_HEIGHT); // Position the window's initial top-left corner
	glutCreateWindow("Available Timeslots"); // Create a window with the given title
	glutFullScreen();
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the infinitely event-processing loop
}
