#include <GL/freeglut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);  // Clear the color buffer

    glBegin(GL_LINES);  // Start drawing lines
    glVertex2f(-0.5f, -0.5f);  // Line starting point
    glVertex2f(0.5f, 0.5f);    // Line ending point
    glEnd();  // End drawing lines

    glutSwapBuffers();  // Swap the front and back buffers to display the rendered image
}

void reshape(int width, int height) {
    glViewport(0, 0, width, height);  // Set the viewport to cover the entire window
    glMatrixMode(GL_PROJECTION);     // Switch to the projection matrix
    glLoadIdentity();                // Reset the projection matrix

    // Set the orthographic projection (2D)
    gluOrtho2D(-1, 1, -1, 1);

    glMatrixMode(GL_MODELVIEW);  // Switch back to the modelview matrix
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);  // Initialize GLUT
    glutCreateWindow("OpenGL Line Example");  // Create a window with the given title
    glutInitWindowSize(400, 400);  // Set the window's initial width and height

    glutDisplayFunc(display);  // Register the display callback function
    glutReshapeFunc(reshape);  // Register the reshape callback function

    glutMainLoop();  // Enter the GLUT event-processing loop
    return 0;
}

