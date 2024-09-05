// 2D Environment - Night (Completed)

//#include <iostream>
//#include <GLFW/glfw3.h>
//using namespace std;
//const GLint swidth = 1400, sheight = 1200;
//GLfloat translatex = 0;
//GLfloat translatey = 0;
//GLfloat scale = 0.0f;
//GLfloat scalex = 1.0;
//GLfloat scaley = 0;
//GLfloat rotatex = 0;
//GLfloat rotatey = 0;
//GLfloat rotationAngle = 0;
//GLfloat Angle = 20;
//
//bool LeftClick = false;
//bool RightClick = false;
//// variables to change the speed of boat translation and scaling and rotation
//const GLfloat translationspeed = 0.01;
//const GLfloat scalingspeed = 0.02f;
//const GLfloat rotationspeed = 1.0f;
//
//GLfloat Xorigin = (swidth / 2);
//// boat auto - movement
//GLfloat translateBoatX = -0.07;
//GLfloat translateStepX = 0.0005f;
//
//
//// Mouse functions declaration
//static void cursorposition(GLFWwindow* window, double xpos, double ypos);
//void mousebutton(GLFWwindow* window, int button, int act, int mods);
//void buttonscroll(GLFWwindow* window, double xoffset, double yoffset);
//
//void KeyCallBack(GLFWwindow* graphicalwindow, int key, int scancode, int action, int modes);
//
//
//void moon()
//{
//	const float numsteps = 100;
//	const float angle = (3.14 * 2) / numsteps;
//
//	float xpos = 0; float ypos = 0; float radius = 0.10f;
//
//	float prevx = xpos;
//	float prevy = ypos - radius;
//	for (int i = 0; i <= numsteps; i++)
//	{
//		float newx = radius * sin(angle * i);
//		float newy = -radius * cos(angle * i);;
//		glBegin(GL_TRIANGLES);
//		glColor3f(1.0, 1.0, 1.0);
//		glVertex3f(0, 0, 0);
//		glVertex3f(prevx, prevy, 0);
//		glVertex3f(newx, newy, 0);
//		glEnd();
//		prevx = newx;
//		prevy = newy;
//	}
//}
//
//int main()
//{
//	cout << " hello graphics programming " << endl;
//	glfwInit();
//	GLFWwindow* Graphicwindow = glfwCreateWindow(swidth, sheight, " my first graphical window in OpenGL", nullptr, nullptr);
//	glfwMakeContextCurrent(Graphicwindow);
//
//	// Mouse functions calling 
//	glfwSetCursorPosCallback(Graphicwindow, cursorposition);
//	glfwSetMouseButtonCallback(Graphicwindow, mousebutton);
//	glfwSetScrollCallback(Graphicwindow, buttonscroll);
//
//	glfwSetKeyCallback(Graphicwindow, KeyCallBack);
//
//	float river[] =
//	{
//		-1, 0.45, 0.0, // A
//		1 , 0.45, 0.0, // B
//		-1, -1 , 0.0,  // D
//
//		-1, -1 , 0.0,  // D
//		1 , 0.45, 0.0, // B
//		1 , -1 , 0.0   // C
//	};
//	float river_color[] =
//	{
//		0, 0.5, 0.7,
//		0, 0.5, 0.7,
//		0, 0.5, 0.7,
//
//		0, 0.5, 0.7,
//		0, 0.5, 0.7,
//		0, 0.5, 0.7
//	};
//	float star[] =
//	{
//		0.3 , 0.4 , 0.0,   // L
//		0.4 , 0.5 , 0.0,   // A
//		0.5 , 0.4 , 0.0,   // B
//
//		0.5 , 0.4 ,0.0 ,   // B
//		0.7 ,0.4 ,0.0,     // C
//		0.6 ,0.3 ,0.0,     // D
//
//		0.6 , 0.3 , 0.0,   // D
//		0.7 , 0.2 ,0.0,    // E
//		0.5 , 0.2 ,0.0,    // F
//
//		0.5 , 0.2 ,0.0,    // F
//		0.4 , 0.1 , 0.0,   // G
//		0.3 , 0.2 , 0.0,   // H
//
//		0.3 , 0.2 , 0.0 ,  // H
//		0.1 , 0.2 , 0.0,   // I
//		0.2 , 0.3 , 0.0,   // J
//
//		0.2 , 0.3 , 0.0 ,  // J
//		0.1 , 0.4 , 0.0 ,  // K
//		0.3 , 0.4 , 0.0    // L
//	};
//	float star_color[] =
//	{
//		1, 1 , 1,
//		1, 1 , 1,
//		1, 1 , 1, // 1st
//
//		1, 1 , 1,
//		1, 1 , 1,
//		1, 1 , 1, // 2nd
//
//		1, 1 , 1,
//		1, 1 , 1,
//		1, 1 , 1, // 3rd
//
//		1, 1 , 1,
//		1, 1 , 1,
//		1, 1 , 1, // 4th
//
//		1, 1 , 1,
//		1, 1 , 1,
//		1, 1 , 1, //5th
//
//		1, 1 , 1,
//		1, 1 , 1, // 6th
//		1, 1 , 1
//	};
//	float mountain[] =
//	{
//		-0.8,  0.45, 0.0,  // H 
//		-1  ,  0.45, 0.0,  // A
//		-0.95,  0.60, 0.0, // B
//
//		-0.80,  0.45, 0.0, // H 
//		-0.95,  0.60, 0.0, // B
//		-0.85,  0.70, 0.0, // C
//
//		-0.80,  0.45, 0.0, // H 
//		-0.85,  0.70, 0.0, // C
//		-0.80,  0.70, 0.0, // D
//
//		-0.8,   0.45, 0.0, // H 
//		-0.80,  0.70, 0.0, // D
//		-0.75,  0.70, 0.0, // E 
//
//		-0.8,   0.45, 0.0, // H 
//		-0.75,  0.70, 0.0, // E
//		-0.65,  0.60, 0.0, // F
//
//		-0.8,   0.45, 0.0, // H 
//		-0.65,  0.60, 0.0, // F
//		-0.60,  0.45, 0.0  // G
//	};
//	float mountain_color[] =
//	{
//		0.5 , 0.3 , 0,
//		0.5 , 0.3 , 0,
//		0.5 , 0.3 , 0,
//
//		0.5 , 0.3 , 0,
//		0.5 , 0.3 , 0,
//		0.5 , 0.3 , 0,
//
//		0.5 , 0.3 , 0,
//		0.5 , 0.3 , 0,
//		0.5 , 0.3 , 0,
//
//		0.5 , 0.3 , 0,
//		0.5 , 0.3 , 0,
//		0.5 , 0.3 , 0,
//
//		0.5 , 0.3 , 0,
//		0.5 , 0.3 , 0,
//		0.5 , 0.3 , 0,
//
//		0.5 , 0.3 , 0,
//		0.5 , 0.3 , 0,
//		0.5 , 0.3 , 0
//	};
//	float tree[] =
//	{
//		-0.6 , 0.6 , 0.0, //B
//		-0.55, 0.65, 0.0, //C
//		-0.50, 0.60, 0.0, //D
//
//		-0.50, 0.60, 0.0, //D
//		-0.50, 0.45, 0.0, //E
//		-0.6 , 0.6 , 0.0, //B
//
//		-0.6 , 0.6 , 0.0, //B
//		-0.50, 0.45, 0.0, //E
//		-0.60, 0.45, 0.0, //A            // tree_bottom till here
//
//		-0.60, 0.60, 0.0, //B
//		-0.70, 0.55, 0.0, //A1
//		-0.65, 0.65, 0.0, //B1
//
//		-0.65, 0.65, 0.0, //B1
//		-0.70, 0.70, 0.0, //C1
//		-0.60, 0.70, 0.0, //D1
//
//		-0.60, 0.70, 0.0, //D1
//		-0.60, 0.80, 0.0, //E1
//		-0.55, 0.75, 0.0, //F1
//
//		-0.55, 0.75, 0.0, //F1
//		-0.50, 0.80, 0.0, //G1
//		-0.50, 0.70, 0.0, //H1
//
//		-0.50, 0.70, 0.0, //H1
//		-0.40, 0.70, 0.0, //I1
//		-0.45, 0.65, 0.0, //J1
//
//		-0.45, 0.65, 0.0, //J1
//		-0.40, 0.55, 0.0, //K1
//		-0.50, 0.60, 0.0, //D       
//
//		-0.60, 0.70, 0.0, //D1
//		-0.55, 0.75, 0.0, //F1
//		-0.50, 0.70, 0.0, //H1
//
//		-0.65, 0.65, 0.0, //B1
//		-0.60, 0.70, 0.0, //D1
//		-0.50, 0.70, 0.0, //H1
//
//		-0.50, 0.70, 0.0, //H1
//		-0.45, 0.65, 0.0, //J1
//		-0.65, 0.65, 0.0, //B1       
//
//		-0.45, 0.65, 0.0, //J1
//		-0.50, 0.60, 0.0, //D  
//		-0.55, 0.65, 0.0, //C
//
//		-0.65, 0.65, 0.0, //B1
//		-0.6 , 0.6 , 0.0, //B
//		-0.55, 0.65, 0.0, //C          // tree leaves till here
//	};
//	float tree_color[] =
//	{
//		0.4, 0.1, 0.0,
//		0.4, 0.1, 0.0,
//		0.4, 0.1, 0.0,
//
//		0.4, 0.1, 0.0,
//		0.4, 0.1, 0.0,
//		0.4, 0.1, 0.0,
//
//		0.4, 0.1, 0.0,
//		0.4, 0.1, 0.0,
//		0.4, 0.1, 0.0,     // tree bottom color till here
//
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//		0.3 , 0.6, 0,
//
//		0.3 , 0.6 , 0,
//		0.3 , 0.6 , 0,
//		0.3 , 0.6 , 0,
//	};
//	float tree1[] =
//	{
//		-0.6 , 0.6 , 0.0, //B
//		-0.55, 0.65, 0.0, //C
//		-0.50, 0.60, 0.0, //D
//
//		-0.50, 0.60, 0.0, //D
//		-0.50, 0.45, 0.0, //E
//		-0.6 , 0.6 , 0.0, //B
//
//		-0.6 , 0.6 , 0.0, //B
//		-0.50, 0.45, 0.0, //E
//		-0.60, 0.45, 0.0, //A            // tree_bottom till here
//
//		-0.60, 0.60, 0.0, //B
//		-0.70, 0.55, 0.0, //A1
//		-0.65, 0.65, 0.0, //B1
//
//		-0.65, 0.65, 0.0, //B1
//		-0.70, 0.70, 0.0, //C1
//		-0.60, 0.70, 0.0, //D1
//
//		-0.60, 0.70, 0.0, //D1
//		-0.60, 0.80, 0.0, //E1
//		-0.55, 0.75, 0.0, //F1
//
//		-0.55, 0.75, 0.0, //F1
//		-0.50, 0.80, 0.0, //G1
//		-0.50, 0.70, 0.0, //H1
//
//		-0.50, 0.70, 0.0, //H1
//		-0.40, 0.70, 0.0, //I1
//		-0.45, 0.65, 0.0, //J1
//
//		-0.45, 0.65, 0.0, //J1
//		-0.40, 0.55, 0.0, //K1
//		-0.50, 0.60, 0.0, //D       
//
//		-0.60, 0.70, 0.0, //D1
//		-0.55, 0.75, 0.0, //F1
//		-0.50, 0.70, 0.0, //H1
//
//		-0.65, 0.65, 0.0, //B1
//		-0.60, 0.70, 0.0, //D1
//		-0.50, 0.70, 0.0, //H1
//
//		-0.50, 0.70, 0.0, //H1
//		-0.45, 0.65, 0.0, //J1
//		-0.65, 0.65, 0.0, //B1       
//
//		-0.45, 0.65, 0.0, //J1
//		-0.50, 0.60, 0.0, //D  
//		-0.55, 0.65, 0.0, //C
//
//		-0.65, 0.65, 0.0, //B1
//		-0.6 , 0.6 , 0.0, //B
//		-0.55, 0.65, 0.0, //C          // tree leaves till here
//	};
//	float tree1_color[] =
//	{
//		0.4, 0.1, 0.0,
//		0.4, 0.1, 0.0,
//		0.4, 0.1, 0.0,
//
//		0.4, 0.1, 0.0,
//		0.4, 0.1, 0.0,
//		0.4, 0.1, 0.0,
//
//		0.4, 0.1, 0.0,
//		0.4, 0.1, 0.0,
//		0.4, 0.1, 0.0,     // tree bottom color till here
//
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//		0 , 0.3 , 0,
//	};
//	float tree2[] =
//	{
//		-0.2 , 0.3 , 0.0, //C
//		-0.2 , 0.1 , 0.0, //D
//		-0.3 , 0.1 , 0.0, //A
//
//		-0.3 , 0.1 , 0.0, //A
//		-0.3 , 0.3 , 0.0, //B
//		-0.2 , 0.3 , 0.0, //C
//
//		-0.1 , 0.3 , 0.0, //G
//		-0.4 , 0.3 , 0.0, //E
//		-0.25, 0.5 , 0.0, //F
//	};
//	float tree2_color[] =
//	{
//		0.4 , 0.1 , 0.0,
//		0.4 , 0.1 , 0.0,
//		0.4 , 0.1 , 0.0,
//
//		0.4 , 0.1 , 0.0,
//		0.4 , 0.1 , 0.0,
//		0.4 , 0.1 , 0.0,    // tree bottom color
//
//		0.8 , 0.7 , 0.7 ,
//		0.8 , 0.7 , 0.7 ,
//		0.8 , 0.7 , 0.7         // tree leaves
//	};
//	float land[] =
//	{
//		0.00, -1.00, 0.0,      // O
//		-1.0, -1.00, 0.0,      // P
//		-1.0, -0.40, 0.0,      // Q
//
//		-1.0 , -0.4, 0.0,      // Q
//		-1.0 , 0.1 , 0.0,      // A
//		-0.1 , 0.1 , 0.0,      // B
//
//		-0.1, 0.10 , 0.0,      // B
//		-1.0, -0.40, 0.0,      // Q
//		0.00 , 0.00, 0.0,      // C             
//
//		0.00 , 0.00, 0.0,      // C
//		0.10 , -0.1, 0.0,      // D
//		0.05, -0.15, 0.0,      // E
//
//		0.05, -0.15 , 0.0,     // E
//		0.12, -0.20 , 0.0,     // F
//		0.07, -0.25 , 0.0,     // G
//
//		0.07, -0.25 , 0.0,     // G
//		0.20, -0.30 , 0.0,     // H
//		0.20, -0.50 , 0.0,     // I
//
//		0.20, -0.50 , 0.0,     // I
//		0.07, -0.25 , 0.0,     // G
//		0.08, -0.60 , 0.0,     // J
//
//		0.08, -0.60 , 0.0,     // J
//		0.15, -0.70 , 0.0,     // K
//		0.09, -0.75 , 0.0,     // L
//
//		0.09, -0.75, 0.0,      // L
//		0.17, -0.85, 0.0,      // M
//		0.07, -1.00, 0.0,      // N
//
//		-1.0, -0.40, 0.0,      // Q
//		0.00, 0.00 , 0.0,      // C 
//		0.05, -0.15, 0.0,      // E
//
//		-1.0, -0.40, 0.0,      // Q
//		0.05, -0.15, 0.0,      // E
//		0.07, -0.25, 0.0,      // G
//
//		-1.0, -0.40, 0.0,      // Q
//		0.07, -0.25, 0.0,      // G
//		0.08, -0.60, 0.0,      // J
//
//		-1.0, -0.40, 0.0,      // Q
//		0.08, -0.60, 0.0,      // J
//		0.09, -0.75, 0.0,      // L
//
//		-1.0, -0.40, 0.0,      // Q
//		0.09, -0.75, 0.0,      // L
//		0.07, -1.00, 0.0,      // N             
//
//		-1.0, -0.40, 0.0,      // Q
//		0.07, -1.00, 0.0,      // N 
//		-1.0, -1.00, 0.0,      // P                  // TILL HERE 45
//	};
//	float land_color[] =
//	{
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//
//		0 , 0.6 , 0,
//		0 , 0.6 , 0,
//		0 , 0.6 , 0
//	};
//	float boat[] =
//	{
//		0.70, 0.25 , 0.0, // D
//		0.40, 0.25 , 0.0, // A
//		0.35, 0.40 , 0.0, // B
//
//		0.35, 0.40 , 0.0, // B
//		0.75, 0.40 , 0.0, // C
//		0.70, 0.25 , 0.0, // D     // BOAT BOTTOM BODY
//
//		0.40, 0.40 , 0.0, // E
//		0.50, 0.60 , 0.0, // F
//		0.60, 0.60 , 0.0, // G
//
//		0.60, 0.60 , 0.0, // G
//		0.70, 0.40 , 0.0, // H
//		0.40, 0.40 , 0.0, // E     // BOAT TOP BODY 
//
//		0.53, 0.60 , 0.0, // L
//		0.53, 0.80 , 0.0, // I
//		0.56, 0.80 , 0.0, // J
//
//		0.56, 0.80 , 0.0, // J
//		0.56, 0.60 , 0.0, // K
//		0.53, 0.60 , 0.0, // L     // BOAT POLE
//
//		0.46, 0.65 , 0.0, // M
//		0.48, 0.74 , 0.0, // N
//		0.64, 0.74 , 0.0, // O
//
//		0.64, 0.74 , 0.0, // O
//		0.62, 0.65 , 0.0, // P
//		0.46, 0.65 , 0.0, // M     // BOAT FLAG
//	};
//	float boat_color[] =
//	{
//		0 , 0 , 0,
//		0 , 0 , 0,
//		0 , 0 , 0,
//
//		0 , 0 , 0,
//		0 , 0 , 0,
//		0 , 0 , 0,
//
//		0.3 , 0 , 0.3,
//		0.3 , 0 , 0.3,
//		0.3 , 0 , 0.3,
//
//		0.3 , 0 , 0.3,
//		0.3 , 0 , 0.3,
//		0.3 , 0 , 0.3,
//
//		0.6 , 0.0 , 0.2,
//		0.6 , 0.0 , 0.2,
//		0.6 , 0.0 , 0.2,
//
//		0.6 , 0.0 , 0.2,
//		0.6 , 0.0 , 0.2,
//		0.6 , 0.0 , 0.2,
//
//		0.3 , 0.3 , 0.3,
//		0.3 , 0.3 , 0.3,
//		0.3 , 0.3 , 0.3,
//
//		0.3 , 0.3 , 0.3,
//		0.3 , 0.3 , 0.3,
//		0.3 , 0.3 , 0.3
//	};
//	float boat1[] =
//	{
//		0.70, 0.25 , 0.0, // D
//		0.40, 0.25 , 0.0, // A
//		0.35, 0.40 , 0.0, // B
//
//		0.35, 0.40 , 0.0, // B
//		0.75, 0.40 , 0.0, // C
//		0.70, 0.25 , 0.0, // D     // BOAT BOTTOM BODY
//
//		0.37, 0.40 , 0.0, // E
//		0.50, 0.70 , 0.0, // F
//		0.50, 0.40 , 0.0, // G
//	};
//	float boat1_color[] =
//	{
//		0.4 , 0.3 , 0.4,
//		0.4 , 0.3 , 0.4,
//		0.4 , 0.3 , 0.4,
//
//		0.4 , 0.3 , 0.4,
//		0.4 , 0.3 , 0.4,
//		0.4 , 0.3 , 0.4,
//
//		0.2 , 0.0 , 0.0,
//		0.2 , 0.0 , 0.0,
//		0.2 , 0.0 , 0.0
//	};
//	float smaller_upper_boat_color[] =
//	{
//		0.8, 0.3 , 0.5 ,
//		0.8, 0.3 , 0.5 ,
//		0.8, 0.3 , 0.5 ,
//
//		0.8, 0.3 , 0.5 ,
//		0.8, 0.3 , 0.5 ,
//		0.8, 0.3 , 0.5 ,   // lower body
//
//
//		0.7 , 0.6 , 0.7 ,
//		0.7 , 0.6 , 0.7 ,
//		0.7 , 0.6 , 0.7 ,
//
//		0.7 , 0.6 , 0.7 ,
//		0.7 , 0.6 , 0.7 ,
//		0.7 , 0.6 , 0.7 ,  // middle body
//
//
//		0.5 , 0.2 , 0.2,
//		0.5 , 0.2 , 0.2,
//		0.5 , 0.2 , 0.2,
//
//		0.5 , 0.2 , 0.2,
//		0.5 , 0.2 , 0.2,
//		0.5 , 0.2 , 0.2,
//
//
//		0.5 , 0.4 , 0.6,
//		0.5 , 0.4 , 0.6,
//		0.5 , 0.4 , 0.6,
//
//		0.5 , 0.4 , 0.6,
//		0.5 , 0.4 , 0.6,
//		0.5 , 0.4 , 0.6
//	};
//	float hut[] =
//	{
//		-0.4 , -0.2 , 0.0 , // A
//		-0.4 , 0.00 , 0.0 , // B
//		-0.1 , 0.00 , 0.0 , // D
//
//		-0.1 , 0.00 , 0.0 , // D
//		-0.1 , -0.2 , 0.0 , // C
//		-0.4 , -0.2 , 0.0 , // A    // BOTTOM BODY 
//
//		-0.4 , 0.00 , 0.0 , // B
//		-0.25, 0.00 , 0.0 , // O
//		-0.35, 0.10 , 0.0 , // E
//
//		-0.35, 0.10 , 0.0 , // E
//		-0.25, 0.00 , 0.0 , // O
//		-0.30, 0.20 , 0.0 , // F
//
//		-0.30, 0.20 , 0.0 , // F
//		-0.25, 0.00 , 0.0 , // O
//		-0.20, 0.20 , 0.0 , // G
//
//		-0.20, 0.20 , 0.0 , // G
//		-0.25, 0.00 , 0.0 , // O
//		-0.15, 0.10 , 0.0 , // H
//
//		-0.15, 0.10 , 0.0 , // H
//		-0.25, 0.00 , 0.0 , // O
//		-0.10, 0.00 , 0.0 , // D     // TILL HERE - UPPER BODY
//
//
//		-0.28 , -0.20 , 0.0 , // D1
//		-0.28 , -0.05 , 0.0 , // A1
//		-0.20 , -0.05 , 0.0 , // B1
//
//		-0.20 , -0.05 , 0.0 , // B1
//		-0.20 , -0.20 , 0.0 , // C1
//		-0.28 , -0.20 , 0.0   // D1    // TILL HERE - HUT'S GATE
//	};
//	float hut_color_O3[] =
//	{
//		0.6, 0.3, 0.0,
//		0.6, 0.3, 0.0,
//		0.6, 0.3, 0.0,
//
//		0.6, 0.3, 0.0,
//		0.6, 0.3, 0.0,
//		0.6, 0.3, 0.0,    // BOTTOM BODY COLOR
//
//		0.6, 0.3, 0.0,
//		0.6, 0.3, 0.0,
//		0.6, 0.3, 0.0,
//
//		0.6, 0.3, 0.0,
//		0.6, 0.3, 0.0,
//		0.6, 0.3, 0.0,
//
//		0.6, 0.3, 0.0,
//		0.6, 0.3, 0.0,
//		0.6, 0.3, 0.0,
//
//		0.6, 0.3, 0.0,
//		0.6, 0.3, 0.0,
//		0.6, 0.3, 0.0,
//
//		0.6, 0.3, 0.0,
//		0.6, 0.3, 0.0,
//		0.6, 0.3, 0.0,         // TILL HERE UPPER BODY COLOR
//
//		0.5, 0.2, 0.0,
//		0.5, 0.2, 0.0,
//		0.5, 0.2, 0.0,
//
//		0.5 , 0.2 , 0.0,
//		0.5 , 0.2 , 0.0,
//		0.5 , 0.2 , 0.0           // TILL HERE HUT'S GATE COLOR 
//	};
//	float road[] =
//	{
//		-0.260, -0.50 , 0.0 , // F1
//		-0.260, -0.20 , 0.0 , // A1
//		-0.160, -0.20 , 0.0 , // B1
//
//		-0.160, -0.20 , 0.0 , // B1
//		-0.160, -0.50 , 0.0 , // C1
//		-0.260, -0.50 , 0.0 , // F1
//
//		-0.520, -1.00 , 0.0 , // E1
//		-0.260, -0.50 , 0.0 , // F1
//		-0.160, -0.50 , 0.0 , // C1
//
//		-0.160, -0.50 , 0.0 , // C1
//		-0.380, -1.0 , 0.0 , // D1
//		-0.520, -1.0 , 0.0   // E1     // TILL HERE - ROAD
//	};
//	float road_color[] =
//	{
//		0.8 , 0.8 , 0.8,
//		0.8 , 0.8 , 0.8,
//		0.8 , 0.8 , 0.8,
//
//		0.8 , 0.8 , 0.8,
//		0.8 , 0.8 , 0.8,
//		0.8 , 0.8 , 0.8,
//
//		0.8 , 0.8 , 0.8,
//		0.8 , 0.8 , 0.8,
//		0.8 , 0.8 , 0.8,
//
//		0.8 , 0.8 , 0.8,
//		0.8 , 0.8 , 0.8,
//		0.8 , 0.8 , 0.8
//	};
//	float grass[] =
//	{
//		-0.20 , -0.40 , 0.0 , // O
//		-0.26 , -0.32 , 0.0 , // B
//
//		-0.26 , -0.32 , 0.0 , // B
//		-0.34 , -0.35 , 0.0 , // A
//
//		-0.34 , -0.35 , 0.0 , // A
//		-0.36 , -0.38 , 0.0 , // B
//
//		-0.20 , -0.40 , 0.0 , // O
//		-0.12 , -0.32 , 0.0 , // F
//
//		-0.12 , -0.32 , 0.0 , // F
//		-0.06 , -0.35 , 0.0 , // G
//
//		-0.06 , -0.35 , 0.0 , // G
//		-0.04 , -0.38 , 0.0 , // H
//
//		-0.20 , -0.40 , 0.0 , // O
//		-0.30 , -0.17 , 0.0 , // C
//
//		-0.20 , -0.40 , 0.0 , // O
//		-0.20 , -0.15 , 0.0 , // D
//
//		-0.20 , -0.40 , 0.0 , // O
//		-0.10 , -0.17 , 0.0 , // E
//	};
//	float grass_color[] =
//	{
//		0 , 0.8 , 0 ,
//		0 , 0.8 , 0 ,
//
//		0 , 0.8 , 0 ,
//		0 , 0.8 , 0 ,
//
//		0 , 0.8 , 0 ,
//		0 , 0.8 , 0 ,
//
//		0 , 0.8 , 0 ,
//		0 , 0.8 , 0 ,
//
//		0 , 0.8 , 0 ,
//		0 , 0.8 , 0 ,
//
//		0 , 0.8 , 0 ,
//		0 , 0.8 , 0 ,
//
//		0 , 0.8 , 0 ,
//		0 , 0.8 , 0 ,
//
//		0 , 0.8 , 0 ,
//		0 , 0.8 , 0 ,
//
//		0 , 0.8 , 0 ,
//		0 , 0.8 , 0
//	};
//	float pole[] =
//	{
//		0.53, 0.60 , 0.0, // L
//		0.53, 0.80 , 0.0, // I
//		0.56, 0.80 , 0.0, // J
//
//		0.56, 0.80 , 0.0, // J
//		0.56, 0.60 , 0.0, // K
//		0.53, 0.60 , 0.0, // L
//	};
//	float pole_color[] =
//	{
//		0.6 , 0.0 , 0.2,
//		0.6 , 0.0 , 0.2,
//		0.6 , 0.0 , 0.2,
//
//		0.6 , 0.0 , 0.2,
//		0.6 , 0.0 , 0.2,
//		0.6 , 0.0 , 0.2
//	};
//
//
//	while (!glfwWindowShouldClose(Graphicwindow))
//	{
//		glfwPollEvents();
//		glClearColor(0.0, 0.0, 0.0, 0.0); // bg color
//		glClear(GL_COLOR_BUFFER_BIT); 
//
//		//drawing - moon
//		glLoadIdentity();
//		glTranslatef(0.15f, 0.82f, 0);
//		moon();
//
//
//		// Object - river
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, river_color);
//		glVertexPointer(3, GL_FLOAT, 0, river);
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// ------------------------------------------------------------X-------------------------------------------------------------
//
//		// STARS -- >>
//		
//		// Object - star
//		glEnableClientState(GL_VERTEX_ARRAY); 
//		glEnableClientState(GL_COLOR_ARRAY);    
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, star_color);
//		glVertexPointer(3, GL_FLOAT, 0, star);
//		glTranslatef(-.70f, 0.80f, 0);
//		glScalef(0.15f, .20f, 0.0);
//		glRotatef(sin(Angle* glfwGetTime()), 0.03, 0.03, 0.03);
//		glDrawArrays(GL_TRIANGLES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - star1
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, star_color);
//		glVertexPointer(3, GL_FLOAT, 0, star);
//		glTranslatef(-.25f, 0.65f, 0);
//		glScalef(0.15f, .20f, 0.0);
//		glRotatef(sin(Angle * glfwGetTime()), 0.03, 0.03, 0.03);
//		glDrawArrays(GL_TRIANGLES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - star2
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, star_color);
//		glVertexPointer(3, GL_FLOAT, 0, star);
//		glTranslatef(0.65f, 0.75f, 0);
//		glScalef(0.15f, .20f, 0.0);
//		glRotatef(sin(Angle* glfwGetTime()), 0.03, 0.03, 0.03);
//		glDrawArrays(GL_TRIANGLES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//		// ------------------------------------------------------------X------------------------------------------------------------
//		
//		// Mountain -- >> 
//		
//		// Object - mountain
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);  
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, mountain_color);
//		glVertexPointer(3, GL_FLOAT, 0, mountain);
//		glTranslatef(-0.12f, 0.0f, 0);
//		glScalef(1.03f, 1.0f, 0.0);
//		glDrawArrays(GL_TRIANGLES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - mountain2
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, mountain_color);
//		glVertexPointer(3, GL_FLOAT, 0, mountain);
//		glTranslatef(0.2f, 0.0f, 0);
//		glDrawArrays(GL_TRIANGLES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - mountain3
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);  
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, mountain_color);
//		glVertexPointer(3, GL_FLOAT, 0, mountain);
//		glTranslatef(0.4f, -0.0f, 0);
//		glDrawArrays(GL_TRIANGLES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - mountain4
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, mountain_color);
//		glVertexPointer(3, GL_FLOAT, 0, mountain);
//		glTranslatef(0.8f, -0.0f, 0);
//		glDrawArrays(GL_TRIANGLES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - mountain5
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, mountain_color);
//		glVertexPointer(3, GL_FLOAT, 0, mountain);
//		glTranslatef(1.1f, -0.0f, 0);
//		glDrawArrays(GL_TRIANGLES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - mountain6
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);    
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, mountain_color);
//		glVertexPointer(3, GL_FLOAT, 0, mountain);
//		glTranslatef(1.5f, -0.0f, 0);
//		glDrawArrays(GL_TRIANGLES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - mountain7
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, mountain_color);
//		glVertexPointer(3, GL_FLOAT, 0, mountain);
//		glTranslatef(1.8f, -0.0f, 0);
//		glDrawArrays(GL_TRIANGLES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//		// ----------------------------------------------------------X-------------------------------------------------------------
//
//		// Object - shape 1 - tree (light green)
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, tree_color);
//		glVertexPointer(3, GL_FLOAT, 0, tree);
//		glTranslatef(-0.19f, 0.0f, 0);
//		glDrawArrays(GL_TRIANGLES, 0, 42);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - shape 1  - tree2 (light green)
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, tree_color);
//		glVertexPointer(3, GL_FLOAT, 0, tree);
//		glTranslatef(0.83f, 0.11f, 0);
//		glScalef(0.6f, 0.75f, 0.0);
//		glDrawArrays(GL_TRIANGLES, 0, 42);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//
//		// Object - shape 1 - tree1 (dark green)
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, tree1_color);
//		glVertexPointer(3, GL_FLOAT, 0, tree1);
//		glTranslatef(0.47f, 0.202f, 0);
//		glScalef(0.6f, 0.55f, 0.0);
//		glDrawArrays(GL_TRIANGLES, 0, 42);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - shape 1 - tree2 (dark green)
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, tree1_color);
//		glVertexPointer(3, GL_FLOAT, 0, tree1);
//		glTranslatef(0.49f, 0.202f, 0);
//		glScalef(0.6f, 0.55f, 0.0);
//		glDrawArrays(GL_TRIANGLES, 0, 42);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//		// ------------------------------------------------------------X-----------------------------------------------------------
//		// BOAT -- >>
//
//		// Object - big boat(lower)
//		glEnableClientState(GL_VERTEX_ARRAY); 
//		glEnableClientState(GL_COLOR_ARRAY);  
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, boat_color);
//		glVertexPointer(3, GL_FLOAT, 0, boat);
//		glTranslatef(0.1f, -0.9f, 0);
//		glDrawArrays(GL_TRIANGLES, 0, 24);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - smaller boat (lower)
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);  
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, boat_color);
//		glVertexPointer(3, GL_FLOAT, 0, boat);
//		glTranslatef(0.04f, -0.9f, 0);
//		glScalef(0.6f, 0.55f, 0.0);
//		glDrawArrays(GL_TRIANGLES, 0, 24);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		//Object - boat (upper boat) manually moving - using wasd keys
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, boat1_color);
//		glVertexPointer(3, GL_FLOAT, 0, boat1);
//		
//		glTranslatef(translatex, 0, 0); 
//		glRotatef(rotationAngle, 0.0, 0.0, 1.0f);
//		glScalef(1.0f + scale, 1.0f + scale, 0.0);
//		glDrawArrays(GL_TRIANGLES, 0, 9);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		//Object - automatic small boat (upper) 
//		glEnableClientState(GL_VERTEX_ARRAY); 
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, smaller_upper_boat_color);
//		glVertexPointer(3, GL_FLOAT, 0, boat);
//		translateBoatX -= translateStepX;
//		if (translateBoatX < -1.65)
//		{
//			translateBoatX = 1.02;
//		}
//		glTranslatef(translateBoatX, -0.050f, 0);
//		glScalef(0.6f, 0.55f, 0.0);
//		glDrawArrays(GL_TRIANGLES, 0, 24);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//		// ------------------------------------------------------------X-------------------------------------------------------
//
//		// Object - land 
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, land_color);
//		glVertexPointer(3, GL_FLOAT, 0, land);
//		glDrawArrays(GL_TRIANGLES, 0, 45);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// ------------------------------------------------------------X-----------------------------------------------------------
//
//		// Trees on land -->>>
//		
//		// Object - shape 2 - tree on land
//		glEnableClientState(GL_VERTEX_ARRAY); 
//		glEnableClientState(GL_COLOR_ARRAY);    
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, tree2_color);
//		glVertexPointer(3, GL_FLOAT, 0, tree2);
//		glTranslatef(-0.24f, -0.3f, 0);
//		glScalef(1.6f, 1.6f, 0.0);
//		glDrawArrays(GL_TRIANGLES, 0, 9);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - land ( smaller tree on left side )
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, tree2_color);
//		glVertexPointer(3, GL_FLOAT, 0, tree2);
//		glTranslatef(-0.45f, -0.43f, 0);
//		glScalef(1.4f, 1.4f, 0.0);
//		glDrawArrays(GL_TRIANGLES, 0, 9);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - Land ( tree behind hut )
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, tree2_color);
//		glVertexPointer(3, GL_FLOAT, 0, tree2);
//		glDrawArrays(GL_TRIANGLES, 0, 9);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//		// ----------------------------------------------------------X--------------------------------------------------------------
//		
//		// Hut -- >> 
//
//		// Object - Hut (smaller)
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, hut_color_O3);
//		glVertexPointer(3, GL_FLOAT, 0, hut);
//		glDrawArrays(GL_TRIANGLES, 0, 21);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - Hut (bigger)
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, hut_color_O3);
//		glVertexPointer(3, GL_FLOAT, 0, hut);
//		glTranslatef(-0.05f, 0.0f, 0);
//		glScalef(1.5f, 1.5f, 0.0);
//		glDrawArrays(GL_TRIANGLES, 0, 27);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//		// -----------------------------------------------------------X-------------------------------------------------------------
//
//
//		// Object  - Road
//		glEnableClientState(GL_VERTEX_ARRAY); 
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, road_color);
//		glVertexPointer(3, GL_FLOAT, 0, road);
//		glTranslatef(-0.20f, -0.1f, 0);
//		glDrawArrays(GL_TRIANGLES, 0, 12);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object   - Pole
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, pole_color);
//		glVertexPointer(3, GL_FLOAT, 0, pole);
//		glTranslatef(-0.66f, -0.80f, 0);
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object   - Pole1
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);   
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, pole_color);
//		glVertexPointer(3, GL_FLOAT, 0, pole);
//		glTranslatef(-0.78f, -0.99f, 0);
//		glScalef(0.8f, 1.15f, 0.0);
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object   - Pole2
//		glEnableClientState(GL_VERTEX_ARRAY);  
//		glEnableClientState(GL_COLOR_ARRAY);  
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, pole_color);
//		glVertexPointer(3, GL_FLOAT, 0, pole);
//		glTranslatef(-0.9f, -0.99f, 0);
//		glScalef(0.8f, 1.15f, 0.0);
//		glDrawArrays(GL_TRIANGLES, 0, 6);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// ----------------------------------------------------------X-------------------------------------------------------------
//
//		// Grass -- >>
//
//		// Object - Grass(RIGHT SIDE)
//		glEnableClientState(GL_VERTEX_ARRAY);  // This array is for vertices
//		glEnableClientState(GL_COLOR_ARRAY);   // This is for color 
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, grass_color);
//		glVertexPointer(3, GL_FLOAT, 0, grass);
//		glTranslatef(-0.2f, -0.68f, 0);
//		glScalef(0.4f, 0.35f, 0.0);
//		glDrawArrays(GL_LINES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - Grass(RIGHT SIDE)
//		glEnableClientState(GL_VERTEX_ARRAY);  // This array is for vertices
//		glEnableClientState(GL_COLOR_ARRAY);   // This is for color 
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, grass_color);
//		glVertexPointer(3, GL_FLOAT, 0, grass);
//		glTranslatef(-0.1f, -0.68f, 0);
//		glScalef(0.4f, 0.35f, 0.0);
//		glDrawArrays(GL_LINES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - Grass(RIGHT SIDE)
//		glEnableClientState(GL_VERTEX_ARRAY);  // This array is for vertices
//		glEnableClientState(GL_COLOR_ARRAY);   // This is for color 
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, grass_color);
//		glVertexPointer(3, GL_FLOAT, 0, grass);
//		glTranslatef(-0.0f, -0.68f, 0);
//		glScalef(0.4f, 0.35f, 0.0);
//		glDrawArrays(GL_LINES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - Grass(RIGHT SIDE)
//		glEnableClientState(GL_VERTEX_ARRAY);  // This array is for vertices
//		glEnableClientState(GL_COLOR_ARRAY);   // This is for color 
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, grass_color);
//		glVertexPointer(3, GL_FLOAT, 0, grass);
//		glTranslatef(0.1f, -0.68f, 0);
//		glScalef(0.4f, 0.35f, 0.0);
//		glDrawArrays(GL_LINES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - Grass(LEFT SIDE)
//		glEnableClientState(GL_VERTEX_ARRAY);  // This array is for vertices
//		glEnableClientState(GL_COLOR_ARRAY);   // This is for color 
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, grass_color);
//		glVertexPointer(3, GL_FLOAT, 0, grass);
//		glTranslatef(-0.6f, -0.68f, 0);
//		glScalef(0.4f, 0.35f, 0.0);
//		glDrawArrays(GL_LINES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - Grass(LEFT SIDE)
//		glEnableClientState(GL_VERTEX_ARRAY);  // This array is for vertices
//		glEnableClientState(GL_COLOR_ARRAY);   // This is for color 
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, grass_color);
//		glVertexPointer(3, GL_FLOAT, 0, grass);
//		glTranslatef(-0.73f, -0.65f, 0);
//		glScalef(0.4f, 0.35f, 0.0);
//		glDrawArrays(GL_LINES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		// Object - Grass(LEFT SIDE)
//		glEnableClientState(GL_VERTEX_ARRAY);  // This array is for vertices
//		glEnableClientState(GL_COLOR_ARRAY);   // This is for color 
//		glLoadIdentity();
//		glColorPointer(3, GL_FLOAT, 0, grass_color);
//		glVertexPointer(3, GL_FLOAT, 0, grass);
//		glTranslatef(-0.85f, -0.68f, 0);
//		glScalef(0.4f, 0.35f, 0.0);
//		glDrawArrays(GL_LINES, 0, 18);
//		glDisableClientState(GL_VERTEX_ARRAY);
//		glDisableClientState(GL_COLOR_ARRAY);
//
//
//		glfwSwapBuffers(Graphicwindow);
//	}
//	return 0;
//}
//
//// Defining Keyboard function
//void KeyCallBack(GLFWwindow* graphicalwindow, int key, int scancode, int action, int modes)
//
//{
//	if (action == GLFW_PRESS || action == GLFW_REPEAT)
//	{
//		switch (key)
//		{
//		case GLFW_KEY_A:
//		{
//			cout << " Pressing 'A' --> Moving Left " << endl;
//			translatex -= translationspeed;
//			break;
//		}
//		case GLFW_KEY_D:
//		{
//			cout << " Pressing 'D' --> Moving Right " << endl;
//			translatex += translationspeed;
//			break;
//		}
//		default:
//		{
//			cout << " You have entered wrong key \n";
//		}
//		break;
//		}
//	}
//}
//
//// Defining Mouse Functions
//void mousebutton(GLFWwindow* window, int button, int act, int mods)
//{
//	if (button == GLFW_MOUSE_BUTTON_LEFT && act == GLFW_PRESS)
//	{
//		cout << " Clicked left mouse button - Moving Left " << endl;
//		rotationAngle += rotationspeed;
//		LeftClick = true;
//	}
//	if (button == GLFW_MOUSE_BUTTON_RIGHT && act == GLFW_PRESS)
//	{
//		cout << " Clicked right mouse button - Moving Right " << endl;
//		rotationAngle -= rotationspeed;
//		RightClick = true;
//	}
//	//if (button == GLFW_MOUSE_BUTTON_LEFT && act == GLFW_RELEASE)
//	//{
//	//	//cout << " Clicked left mouse button - Moving Left " << endl;
//	//	//rotateY -= rotationspeed;
//	//	LeftClick = false;
//	//}
//	//if (button == GLFW_MOUSE_BUTTON_RIGHT && act == GLFW_RELEASE)
//	//{
//	//	//cout << " Clicked right mouse button - Moving Right " << endl;
//	//	//rotateY += rotationspeed;
//	//	RightClick = false;
//	//}
//}
//static void cursorposition(GLFWwindow* window, double xpos, double ypos)
//{
//	if( xpos < Xorigin && translatex > -1.335f )
//	{
//		translatex -= translationspeed;
//		cout << " boat movement x axis " << translatex << endl;
//	}
//	if ( xpos > Xorigin && translatex < 0.24f )
//	{
//		translatex += translationspeed;
//		cout << " boat movement x axis" << translatex << endl;
//	}
//}
//void buttonscroll(GLFWwindow* window, double xoffset, double yoffset)
//{
//	if (yoffset == 1.0f)
//	{
//		cout << " Scrolling Up - Scale Increasing " << xoffset << endl;
//		scale += 0.1f;
//	}
//	if (yoffset == -1.0f)
//	{
//		cout << " Scrolling Down - Scale Decreasing " << xoffset << endl;
//		scale -= 0.1f;
//	}
//}



// -------------------------------------------------------------------XX------------------------------------------------------------



//  2D Environment - Night Journey (Completed)




#include <iostream>
#include <GLFW/glfw3.h>
using namespace std;
const GLint swidth = 1400, sheight = 1200;
GLfloat Angle = 20;


GLfloat translatex = 0;
GLfloat translatey = 0;
GLfloat scalex = 1.0;
GLfloat scaley = 0;
GLfloat rotatex = 0;
GLfloat rotatey = 0;


const GLfloat translationspeed = 0.01;
const GLfloat scalingspeed = 0.02f;
const GLfloat rotationspeed = 0.20f;

static void cursorposition(GLFWwindow* window, double xpos, double ypos);
void mousebutton(GLFWwindow* window, int button, int act, int mods);
void buttonscroll(GLFWwindow* window, double xoffset, double yoffset);

// Declaration of function
void KeyCallBack(GLFWwindow* graphicalwindow, int key, int scancode, int action, int modes);

void mywheel()
{
	const float numsteps = 100;
	const float angle = (3.14 * 2) / numsteps;

	float xpos = 0; float ypos = 0; float radius = 0.04f;

	float prevx = xpos;
	float prevy = ypos - radius;
	for (int i = 0; i <= numsteps; i++)
	{
		float newx = radius * sin(angle * i);
		float newy = -radius * cos(angle * i);;
		glBegin(GL_TRIANGLES);
		glColor3f(0.0, 0.0, 0.0);
		glVertex3f(0, 0, 0);
		glVertex3f(prevx, prevy, 0);
		glVertex3f(newx, newy, 0);
		glEnd();
		prevx = newx;
		prevy = newy;
	}
}
int main()
{
	cout << " hello graphics programming " << endl;
	glfwInit();
	GLFWwindow* Graphicwindow = glfwCreateWindow(swidth, sheight, " my first graphical window in OpenGL", nullptr, nullptr);
	glfwMakeContextCurrent(Graphicwindow);

	glfwSetCursorPosCallback(Graphicwindow, cursorposition);
	glfwSetMouseButtonCallback(Graphicwindow, mousebutton);
	glfwSetScrollCallback(Graphicwindow, buttonscroll);

	glfwSetKeyCallback(Graphicwindow, KeyCallBack);
	float hut[] =
	{
		0.4 , 0.5 , 0.0, //B
		0.9 , 0.4 , 0.0, //C
		0.9 , 0.3 , 0.0, //D

		0.9 , 0.3 , 0.0, //D
		0.4 , 0.3 , 0.0, //A
		0.4 , 0.5 , 0.0, //B

		0.4 , 0.3 , 0.0, //A
		0.9 , 0.3 , 0.0, //D
		0.9 , 0.1 , 0.0, //E

		0.9 , 0.1 , 0.0, //E
		0.5 , 0.1 , 0.0, //F
		0.4 , 0.3 , 0.0, //A

		0.5 , 0.1 , 0.0, //F
		0.2 , 0.1 , 0.0, //G
		0.2 , 0.2 , 0.0, //H

		0.2 , 0.2 , 0.0, //H
		0.5 , 0.2 , 0.0, //L
		0.5 , 0.1 , 0.0, //F

		0.5 , 0.2 , 0.0, //L
		0.1 , 0.2 , 0.0, //I
		0.2 , 0.3 , 0.0, //J

		0.2 , 0.3 , 0.0, //J
		0.5 , 0.3 , 0.0, //K
		0.5 , 0.2 , 0.0, //L

		0.8 , 0.15 , 0.0, // P
		0.6 , 0.15 , 0.0, // M
		0.6 , 0.25 , 0.0, // N

		0.6 , 0.25 , 0.0, // N
		0.8 , 0.25 , 0.0, // O 
		0.8 , 0.15 , 0.0, // P
	};
	float hut_color[] =
	{
		0 , 0.3 , 0.3,
		0 , 0.3 , 0.3,
		0 , 0.3 , 0.3,

		0 , 0.3 , 0.3,
		0 , 0.3 , 0.3,
		0 , 0.3 , 0.3,

		0.5 , 0.5 , 0.3,
		0.5 , 0.5 , 0.3,
		0.5 , 0.5 , 0.3,

		0.5 , 0.5 , 0.3,
		0.5 , 0.5 , 0.3,
		0.5 , 0.5 , 0.3,

		0.5 , 0.5 , 0.3,
		0.5 , 0.5 , 0.3,
		0.5 , 0.5 , 0.3,

		0.5 , 0.5 , 0.3,
		0.5 , 0.5 , 0.3,
		0.5 , 0.5 , 0.3,

		0 , 0.3 , 0.3,
		0 , 0.3 , 0.3,
		0 , 0.3 , 0.3,

		0 , 0.3 , 0.3,
		0 , 0.3 , 0.3,
		0 , 0.3 , 0.3,

		0 , 0 , 0.2,
		0 , 0 , 0.2,
		0 , 0 , 0.2,

		0 , 0 , 0.2,
		0 , 0 , 0.2,
		0 , 0 , 0.2
	};

	float Land[] =
	{
		-1 , -0.9 , 0.0, // B
		-1 , -0.1 , 0.0, // A
		1 , -0.1 , 0.0,  // D

		1 , -0.1 , 0.0,  // D	
		1 , -0.9 , 0.0,  // C
	    -1 , -0.9 , 0.0  // B
	};
	float Land_color[] =
	{
		0.8 , 0.6 , 0,
		0.8 , 0.6 , 0,
		0.8 , 0.6 , 0,

		0.8 , 0.6 , 0,
		0.8 , 0.6 , 0,
		0.8 , 0.6 , 0
	};
	float bus[] =
	{
		0.2 , -0.5 , 0.0, //A
		0.2 , -0.3 , 0.0, //B
		0.7 , -0.3 , 0.0, //C

		0.7 , -0.3 , 0.0, //C
		0.7 , -0.5 , 0.0, //D
		0.2 , -0.5 , 0.0, //A

		0.425 , -0.375 , 0.0, // A2 (WINDOW)
		0.425 , -0.325 , 0.0, // B2 (WINDOW)
		0.475 , -0.325 , 0.0, // C2 (WINDOW)

		0.475 , -0.325 , 0.0, // C2 (WINDOW)
		0.475 , -0.375 , 0.0, // D2 (WINDOW)
		0.425 , -0.375 , 0.0, // A2 (WINDOW)

		0.525 , -0.375 , 0.0, // A3 (WINDOW)
		0.525 , -0.325 , 0.0, // B3 (WINDOW)
		0.575 , -0.325 , 0.0, // C3 (WINDOW)

		0.575 , -0.325 , 0.0, // C3 (WINDOW)
		0.575 , -0.375 , 0.0, // D3 (WINDOW)
		0.525 , -0.375 , 0.0, // A3 (WINDOW)

		0.625 , -0.375 , 0.0, // A4 (WINDOW)
		0.625 , -0.325 , 0.0, // B4 (WINDOW)
		0.675 , -0.325 , 0.0, // C4 (WINDOW)

		0.675 , -0.325 , 0.0, // C4 (WINDOW)
		0.675 , -0.375 , 0.0, // D4 (WINDOW)
		0.625 , -0.375 , 0.0, // A4 (WINDOW)

		0.225 , -0.5   , 0.0, // F (DOOR)
		0.225 , -0.45  , 0.0, // G (DOOR)
		0.3  ,  -0.45  , 0.0, // H (DOOR)

		0.3  , -0.45   , 0.0, // H (DOOR)
		0.3  , -0.5    , 0.0, // I (DOOR)
		0.225 , -0.5   , 0.0, // F (DOOR)

		0.575 , -0.5   , 0.0, // F (Rear - DOOR)
		0.575 , -0.45  , 0.0, // G (Rear - DOOR)
		0.655 , -0.45  , 0.0, // H (Rear - DOOR)

		0.655 , -0.45  , 0.0, // H (Rear - DOOR)
		0.655 , -0.5   , 0.0, // I (Rear - DOOR)
		0.575 , -0.5   , 0.0, // F (Rear - DOOR)

		0.2   , -0.5  , 0.0, //A (HEADLIGHT)
		0.180 , -0.5 ,  0.0, //B (HEADLIGHT)
		0.180, -0.480, 0.0,  //C (HEADLIGHT)

		0.180, -0.480 , 0.0, //C (HEADLIGHT)
		0.2  , -0.480 , 0.0, //D (HEADLIGHT)
		0.2  , -0.5   , 0.0  //A (HEADLIGHT)
	};
	float bus_color[] =
	{
		0.4 , 0.0 , 0, // bus body color
		0.4 , 0.0 , 0, // bus body color
		0.4 , 0.0 , 0, // bus body color
			  
		0.4 , 0.0 , 0, // bus body color
		0.4 , 0.0 , 0, // bus body color
		0.4 , 0.0 , 0, // bus body color

		0 , 0.6 , 0.9, // bus window leftest
		0 , 0.6 , 0.9, // bus window leftest
		0 , 0.6 , 0.9, // bus window leftest

		0 , 0.6 , 0.9, // bus window leftest
		0 , 0.6 , 0.9, // bus window leftest
		0 , 0.6 , 0.9, // bus window leftest

		0 , 0.6 , 0.9, // bus window middle
		0 , 0.6 , 0.9, // bus window middle
		0 , 0.6 , 0.9, // bus window middle

		0 , 0.6 , 0.9, // bus window middle
		0 , 0.6 , 0.9, // bus window middle
		0 , 0.6 , 0.9, // bus window middle

		0 , 0.6 , 0.9, // bus window rightest
		0 , 0.6 , 0.9, // bus window rightest
		0 , 0.6 , 0.9, // bus window rightest

		0 , 0.6 , 0.9, // bus window rightest
		0 , 0.6 , 0.9, // bus window rightest
		0 , 0.6 , 0.9, // bus window rightest

		0.8 , 0.8 , 0.8,   // door front  
		0.8 , 0.8 , 0.8,   // door front 
		0.8 , 0.8 , 0.8,   // door front 

		0.8 , 0.8 , 0.8,   // door front 
		0.8 , 0.8 , 0.8,   // door front 
		0.8 , 0.8 , 0.8,   // door front 

		0.8 , 0.8 , 0.8,   // door rear
		0.8 , 0.8 , 0.8,   // door rear
		0.8 , 0.8 , 0.8,   // door rear

		0.8 , 0.8 , 0.8,   // door rear
		0.8 , 0.8 , 0.8,   // door rear
		0.8 , 0.8 , 0.8,   // door rear

		0.8, 0.7, 0, // back-headlight
		0.8, 0.7, 0, // back-headlight
		0.8, 0.7, 0, // back-headlight

		0.8, 0.7, 0, // back-headlight
		0.8, 0.7, 0, // back-headlight
		0.8, 0.7, 0  // back-headlight
	};
	float tree1[] =
	{
		-0.2 , 0.3 , 0.0, //C
		-0.2 , 0.1 , 0.0, //D
		-0.3 , 0.1 , 0.0, //A

		-0.3 , 0.1 , 0.0, //A
		-0.3 , 0.3 , 0.0, //B
		-0.2 , 0.3 , 0.0, //C

		-0.1 , 0.3 , 0.0, //G
		-0.4 , 0.3 , 0.0, //E
		-0.25, 0.5 , 0.0, //F
	};
	float tree1_color[] =
	{
		0.4 , 0.1 , 0.0,
		0.4 , 0.1 , 0.0,
		0.4 , 0.1 , 0.0,

		0.4 , 0.1 , 0.0,
		0.4 , 0.1 , 0.0,
		0.4 , 0.1 , 0.0,

		0.0 , 0.5 , 0.3,
		0.0 , 0.5 , 0.3,
		0.0 , 0.5 , 0.3,
	};

	float bird1[] =
	{
		-0.3 , 0.8 , 0.0, // A
		-0.15 , 0.7 , 0.0,// B

		-0.15 , 0.7 , 0.0,// B
		0.0 , 0.8 , 0.0   // C
	};
	float bird1_color[] =
	{
		0 , 0 , 0,
		0 , 0 , 0,

		0 , 0 , 0,
		0 , 0 , 0
	};

	float star[] =
	{
		0.3 , 0.4 , 0.0,   // L
		0.4 , 0.5 , 0.0,   // A
		0.5 , 0.4 , 0.0,   // B

		0.5 , 0.4 ,0.0 ,   // B
		0.7 ,0.4 ,0.0,     // C
		0.6 ,0.3 ,0.0,     // D

		0.6 , 0.3 , 0.0,   // D
		0.7 , 0.2 ,0.0,    // E
		0.5 , 0.2 ,0.0,    // F

		0.5 , 0.2 ,0.0,    // F
		0.4 , 0.1 , 0.0,   // G
		0.3 , 0.2 , 0.0,   // H

		0.3 , 0.2 , 0.0 ,  // H
		0.1 , 0.2 , 0.0,   // I
		0.2 , 0.3 , 0.0,   // J

		0.2 , 0.3 , 0.0 ,  // J
		0.1 , 0.4 , 0.0 ,  // K
		0.3 , 0.4 , 0.0    // L

	};
	float star_color[] =
	{
		0.9 ,0.9 , 0.9 ,
		0.9 ,0.9 , 0.9 ,
		0.9 ,0.9 , 0.9 , // 1st

		0.9 ,0.9 , 0.9 ,
		0.9 ,0.9 , 0.9 ,
		0.9 ,0.9 , 0.9 , // 2nd

		0.9 ,0.9 , 0.9 ,
		0.9 ,0.9 , 0.9 ,
		0.9 ,0.9 , 0.9 , // 3rd

		0.9 ,0.9 , 0.9 ,
		0.9 ,0.9 , 0.9 ,
		0.9 ,0.9 , 0.9 , // 4th

		0.9 ,0.9 , 0.9 ,
		0.9 ,0.9 , 0.9 ,
		0.9, 0.9 , 0.9 , // 5th

		0.9 ,0.9 , 0.9 ,
		0.9 ,0.9 , 0.9 , 
		0.9 ,0.9 , 0.9   // 6th
	};
	float Apple[] =
	{
		0.25 , 0.55 , 0.0
	};
	float Apple_color[] =
	{
		0.3 , 0 , 0
	};

	while (!glfwWindowShouldClose(Graphicwindow))
	{
		glfwPollEvents();
		glClearColor(0.0, 0.0, 0.1, 0.0);
		glClear(GL_COLOR_BUFFER_BIT);

		// Object - house
		glEnableClientState(GL_VERTEX_ARRAY);  
		glEnableClientState(GL_COLOR_ARRAY);  
		glLoadIdentity();
		glColorPointer(3, GL_FLOAT, 0, hut_color);
		glVertexPointer(3, GL_FLOAT, 0, hut);
		glTranslatef(-0.370f, -0.2f, 0);
		glScalef(0.6f, 0.6f, 0.0);
		glDrawArrays(GL_TRIANGLES, 0, 30);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);

		// Object - house 2
		glEnableClientState(GL_VERTEX_ARRAY); 
		glEnableClientState(GL_COLOR_ARRAY);   
		glLoadIdentity();
		glColorPointer(3, GL_FLOAT, 0, hut_color);
		glVertexPointer(3, GL_FLOAT, 0, hut);
		glTranslatef(0.1f, -0.2f, 0);
		glScalef(0.7f, 0.7f, 0.0);
		glDrawArrays(GL_TRIANGLES, 0, 30);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);


		// Object - grass
		glEnableClientState(GL_VERTEX_ARRAY);  
		glEnableClientState(GL_COLOR_ARRAY);   
		glLoadIdentity();
		glColorPointer(3, GL_FLOAT, 0, Land_color);
		glVertexPointer(3, GL_FLOAT, 0, Land);
		glDrawArrays(GL_TRIANGLES, 0, 6);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);


		// object - wheel (back side)
		glLoadIdentity();
		glTranslatef(0.32 + translatex, -0.51, 0.0);
		mywheel();

		// object - wheel (back side)
		glLoadIdentity();
		glTranslatef(0.60 + translatex, -0.51, 0.0);
		mywheel();

		// Object - bus 
		glEnableClientState(GL_VERTEX_ARRAY);  
		glEnableClientState(GL_COLOR_ARRAY);   
		glLoadIdentity();                      
		glColorPointer(3, GL_FLOAT, 0, bus_color);
		glVertexPointer(3, GL_FLOAT, 0, bus);
		if (translatex < -1.85)
		{
			translatex = 1.05;
		}
		glTranslatef(translatex, 0.0, 0);    
		glScalef(scalex, 1.0, 0);
		glDrawArrays(GL_TRIANGLES, 0, 66);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);

		// object - wheel (front side)
		glLoadIdentity();
		glTranslatef(0.30 + translatex, -0.51, 0.0);
		mywheel();

		// object - wheel (front side)
		glLoadIdentity();
		glTranslatef(0.58 + translatex, -0.51, 0.0);
		mywheel();

		// Object - tree1
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);
		glLoadIdentity();
		glColorPointer(3, GL_FLOAT, 0, tree1_color);
		glVertexPointer(3, GL_FLOAT, 0, tree1);
		glScalef(1, 1, 0.0);
		glTranslatef(-0.2f, -0.2, 0);
		glDrawArrays(GL_TRIANGLES, 0, 9);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);


		// Object - tree2
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);
		glLoadIdentity();
		glColorPointer(3, GL_FLOAT, 0, tree1_color);
		glVertexPointer(3, GL_FLOAT, 0, tree1);
		glTranslatef(-0.5f, -0.2, 0);
		glDrawArrays(GL_TRIANGLES, 0, 9);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);

		// Object - tree3
		glEnableClientState(GL_VERTEX_ARRAY); 
		glEnableClientState(GL_COLOR_ARRAY);   
		glLoadIdentity();
		glColorPointer(3, GL_FLOAT, 0, tree1_color);
		glVertexPointer(3, GL_FLOAT, 0, tree1);
		glTranslatef(1.1f, -0.2, 0);             
		glDrawArrays(GL_TRIANGLES, 0, 9);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);


		// Object - tree4
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);
		glLoadIdentity();
		glColorPointer(3, GL_FLOAT, 0, tree1_color);
		glVertexPointer(3, GL_FLOAT, 0, tree1);
		glScalef(0.4f, 0.4f, 0.0);
		glTranslatef(-1.250f, -0.350, 0);
		glDrawArrays(GL_TRIANGLES, 0, 9);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);


		// Object - tree5
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);
		glLoadIdentity();
		glColorPointer(3, GL_FLOAT, 0, tree1_color);
		glVertexPointer(3, GL_FLOAT, 0, tree1);
		glScalef(0.4f, 0.4f, 0.0);
		glTranslatef(2.6f, -0.350, 0);
		glDrawArrays(GL_TRIANGLES, 0, 9);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);


		// Object - bird
		glEnableClientState(GL_VERTEX_ARRAY);  
		glEnableClientState(GL_COLOR_ARRAY);   
		glLoadIdentity();
		glColorPointer(3, GL_FLOAT, 0, bird1_color);
		glVertexPointer(3, GL_FLOAT, 0, bird1);
		glTranslatef(-0.6f, -0.2, 0);           
		glDrawArrays(GL_LINES, 0, 4);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);



		//  Object- bird1
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);
		glLoadIdentity();
		glColorPointer(3, GL_FLOAT, 0, bird1_color);
		glVertexPointer(3, GL_FLOAT, 0, bird1);
		glTranslatef(-0.1f, 0.1, 0);
		glDrawArrays(GL_LINES, 0, 4);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);


		//  Object- bird2

		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);
		glLoadIdentity();
		glColorPointer(3, GL_FLOAT, 0, bird1_color);
		glVertexPointer(3, GL_FLOAT, 0, bird1);
		glTranslatef(0.2f, -0.5, 0);
		glDrawArrays(GL_LINES, 0, 4);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);


		// Object - bird3

		glEnableClientState(GL_VERTEX_ARRAY);  
		glEnableClientState(GL_COLOR_ARRAY);   
		glLoadIdentity();
		glColorPointer(3, GL_FLOAT, 0, bird1_color);
		glVertexPointer(3, GL_FLOAT, 0, bird1);
		glTranslatef(0.5f, -0.2, 0);            
		glDrawArrays(GL_LINES, 0, 4);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);



		// Object - star
		glEnableClientState(GL_VERTEX_ARRAY);  
		glEnableClientState(GL_COLOR_ARRAY);  
		glLoadIdentity();
		glColorPointer(3, GL_FLOAT, 0, star_color);
		glVertexPointer(3, GL_FLOAT, 0, star);
		glScalef(0.2, 0.2, 0.0);
		glTranslatef(-4.150f, 2.6, 0);            
		glRotatef(sin(Angle * glfwGetTime()), 0.03, 0.03, 0.03);
		glDrawArrays(GL_TRIANGLES, 0, 18);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);


		//// Object - star1
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);
		glLoadIdentity();
		glColorPointer(3, GL_FLOAT, 0, star_color);
		glVertexPointer(3, GL_FLOAT, 0, star);
		glScalef(0.2, 0.2, 0.0);
		glTranslatef(-1.6f, 4.1, 0);
		glRotatef(sin(Angle* glfwGetTime()), 0.03, 0.03, 0.03);
		glDrawArrays(GL_TRIANGLES, 0, 18);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);

		// Object - star2

		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);
		glLoadIdentity();
		glColorPointer(3, GL_FLOAT, 0, star_color);
		glVertexPointer(3, GL_FLOAT, 0, star);
		glScalef(0.2, 0.2, 0.0);
		glTranslatef(-0.1f, 1.1, 0);
		glRotatef(sin(Angle* glfwGetTime()), 0.03, 0.03, 0.03);
		glDrawArrays(GL_TRIANGLES, 0, 18);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);


		// Object - star3
		glEnableClientState(GL_VERTEX_ARRAY);  
		glEnableClientState(GL_COLOR_ARRAY);    
		glLoadIdentity();
		glColorPointer(3, GL_FLOAT, 0, star_color);
		glVertexPointer(3, GL_FLOAT, 0, star);
		glScalef(0.2, 0.2, 0.0);
		glTranslatef(1.4f, 2.7, 0);             
		glRotatef(sin(Angle * glfwGetTime()), 0.03, 0.03, 0.03);
		glDrawArrays(GL_TRIANGLES, 0, 18);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);


		// drawing - apple
		glEnableClientState(GL_VERTEX_ARRAY); 
		glEnableClientState(GL_COLOR_ARRAY);   // This is for color 
		glLoadIdentity();
		glPointSize(10);
		glColorPointer(3, GL_FLOAT, 0, Apple_color);
		glVertexPointer(3, GL_FLOAT, 0, Apple);
		glScalef(0.1, 0.1, 0.0);
		glTranslatef(-8.1f, 1.65f, 0);            
		glDrawArrays(GL_POINTS, 0, 1);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);

		// Object - apple1
		glEnableClientState(GL_VERTEX_ARRAY);  
		glEnableClientState(GL_COLOR_ARRAY);   
		glLoadIdentity();
		glPointSize(10);
		glColorPointer(3, GL_FLOAT, 0, Apple_color);
		glVertexPointer(3, GL_FLOAT, 0, Apple);
		glScalef(0.1, 0.1, 0.0);
		glTranslatef(-7.6f, 1.65f, 0);            
		glDrawArrays(GL_POINTS, 0, 1);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);

		// Object - apple2
		glEnableClientState(GL_VERTEX_ARRAY);  
		glEnableClientState(GL_COLOR_ARRAY);   
		glLoadIdentity();
		glPointSize(10);
		glColorPointer(3, GL_FLOAT, 0, Apple_color);
		glVertexPointer(3, GL_FLOAT, 0, Apple);
		glScalef(0.1, 0.1, 0.0);
		glTranslatef(-7.8f, 1.25f, 0);           
		glDrawArrays(GL_POINTS, 0, 1);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);

		// Object - apple3
		glEnableClientState(GL_VERTEX_ARRAY);  
		glEnableClientState(GL_COLOR_ARRAY);   
		glLoadIdentity();
		glPointSize(10);
		glColorPointer(3, GL_FLOAT, 0, Apple_color);
		glVertexPointer(3, GL_FLOAT, 0, Apple);
		glScalef(0.1, 0.1, 0.0);
		glTranslatef(-7.3f, 1.05f, 0);            
		glDrawArrays(GL_POINTS, 0, 1);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);

		// Object - apple4
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);
		glLoadIdentity();
		glPointSize(10);
		glColorPointer(3, GL_FLOAT, 0, Apple_color);
		glVertexPointer(3, GL_FLOAT, 0, Apple);
		glScalef(0.1, 0.1, 0.0);
		glTranslatef(-8.2f, 0.95f, 0);
		glDrawArrays(GL_POINTS, 0, 1);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);

		// Object - apple (right tree in the two trees)
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_COLOR_ARRAY);
		glLoadIdentity();
		glPointSize(10);
		glColorPointer(3, GL_FLOAT, 0, Apple_color);
		glVertexPointer(3, GL_FLOAT, 0, Apple);
		glScalef(0.1, 0.1, 0.0);
		glTranslatef(-4.4f, 1.65f, 0);
		glDrawArrays(GL_POINTS, 0, 1);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);

		// Object - apple1 (right tree in the two trees)
		glEnableClientState(GL_VERTEX_ARRAY); 
		glEnableClientState(GL_COLOR_ARRAY);   
		glLoadIdentity();
		glPointSize(10);
		glColorPointer(3, GL_FLOAT, 0, Apple_color);
		glVertexPointer(3, GL_FLOAT, 0, Apple);
		glScalef(0.1, 0.1, 0.0);
		glTranslatef(-5.0f, 1.65f, 0);             
		glDrawArrays(GL_POINTS, 0, 1);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);

		// Object - apple2 (right tree in the two trees)
		glEnableClientState(GL_VERTEX_ARRAY);  
		glEnableClientState(GL_COLOR_ARRAY);   
		glLoadIdentity();
		glPointSize(10);
		glColorPointer(3, GL_FLOAT, 0, Apple_color);
		glVertexPointer(3, GL_FLOAT, 0, Apple);
		glScalef(0.1, 0.1, 0.0);
		glTranslatef(-4.2f, 1.15f, 0);             
		glDrawArrays(GL_POINTS, 0, 1);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);

		// Object - apple3 (right tree in the two trees)
		glEnableClientState(GL_VERTEX_ARRAY);  
		glEnableClientState(GL_COLOR_ARRAY);   
		glLoadIdentity();
		glPointSize(10);
		glColorPointer(3, GL_FLOAT, 0, Apple_color);
		glVertexPointer(3, GL_FLOAT, 0, Apple);
		glScalef(0.1, 0.1, 0.0);
		glTranslatef(-5.0f, 1.05f, 0);            
		glDrawArrays(GL_POINTS, 0, 1);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);

		// Object - apple4 (right tree in the two trees)
		glEnableClientState(GL_VERTEX_ARRAY);  
		glEnableClientState(GL_COLOR_ARRAY);   
		glLoadIdentity();
		glPointSize(10);
		glColorPointer(3, GL_FLOAT, 0, Apple_color);
		glVertexPointer(3, GL_FLOAT, 0, Apple);
		glScalef(0.1, 0.1, 0.0);
		glTranslatef(-4.5f, 0.95f, 0);             
		glDrawArrays(GL_POINTS, 0, 1);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_COLOR_ARRAY);

		glfwSwapBuffers(Graphicwindow);
	}
	return 0;
}

// Definition of key function
void KeyCallBack(GLFWwindow* graphicalwindow, int key, int scancode, int action, int modes)

{
	const GLfloat translatefactor = 0.01;
	const GLfloat scalefactor = 0.02f;
	//const GLfloat rotatefactor = 20.0f;
	if (action == GLFW_PRESS || action == GLFW_REPEAT)
	{
		switch (key)
		{
		case GLFW_KEY_A:
		{
			translatex -= translatefactor;
			break;
		}
		case GLFW_KEY_D:
		{
			translatex += translatefactor;
			break;
		}
		default:
		{
			cout << " You have entered wrong key \n";
		}
		break;
		}
	}
}
// Defining Mouse Functions
void mousebutton(GLFWwindow* window, int button, int act, int mods)
{
	if (button == GLFW_MOUSE_BUTTON_RIGHT && act == GLFW_PRESS)
	{
		cout << " Clicked right mouse button - Moving Right " << endl;
		rotatey += rotationspeed;
	}
	if (button == GLFW_MOUSE_BUTTON_LEFT && act == GLFW_PRESS)
	{
		cout << " Clicked left mouse button - Moving Left " << endl;
		rotatey -= rotationspeed;
	}
}
static void cursorposition(GLFWwindow* window, double xpos, double ypos)
{
	if (xpos > 0.0f)
	{
		cout << " xpos == " << xpos << endl;
		translatex -= translationspeed;
	}
	else if (xpos < 0.0f)
	{
		cout << " xpos == " << xpos << endl;
		translatex += translationspeed;
	}
}
void buttonscroll(GLFWwindow* window, double xoffset, double yoffset)
{
	if (xoffset >= 0)
	{
		cout << " Scrolling Up - Scale Increasing " << xoffset << endl;
		scalex += scalingspeed;
	}
	else if (xoffset < 0)
	{
		cout << " Scrolling Down - Scale Decreasing " << xoffset << endl;
		scalex -= scalingspeed;
	}
}



// ---------------------------------------------------------------------XX------------------------------------------------------------------------





