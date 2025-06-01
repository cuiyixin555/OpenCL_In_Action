#include <GL/glut.h>
#include <stdio.h>

/* Respond when the window dimension changes */
void reshape(int width, int height) {
   printf("New dimensions: %d %d\n", width, height);
}

/* Respond when the window needs to redraw itself */
void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   printf("Displaying the window\n");
   glutSwapBuffers();
}

int main(int argc, char **argv) {

   /* Create and configure the window */
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE  );
   glutInitWindowSize(500, 150);
   glutInitWindowPosition(200, 100);
   glutCreateWindow("Introducing GLUT");

   /* Configure event handling */
   glutDisplayFunc(display);
   glutReshapeFunc(reshape);
   glClearColor(1.0, 1.0, 1.0, 0.0);
   glutMainLoop();
   return 0;
}

