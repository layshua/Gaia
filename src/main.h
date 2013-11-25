#ifndef MAIN_H
#define MAIN_H

#include <GL/glew.h>
#include <GL/glut.h>
#include <glm/glm.hpp>
#include <vector>
#include <cstring>
#include <iostream>
#include <string>
#include "SOIL.h"
#include "camera.h"
#include "plane.h"
#include "glslUtility.h"
#include "constants.h"

using std::cout;
using std::endl;
using glm::vec3;
using glm::vec2;

namespace triangle_attributes {
    enum {
        POSITION,
        TEXCOORD
    };
}

namespace quad_attributes {
    enum {
        POSITION,
        TEXCOORD
    };
}

Camera* cam;
Plane* plane;
GLuint curr_prog;
GLuint heightmap_tex;
GLuint normalmap_tex;
GLuint diffusemap_tex;

int mouse_buttons = 0;
int mouse_old_x = 0;
int mouse_old_y = 0;
int width;
int height;
int frame;
int timebase;
static float fps = 0;

const char *attributeWithTexLocation[] = {"Position", "Texcoord"};
const char *attributeLocation[] = {"Position"};

void mouse(int button, int state, int x, int y);
void motion(int x, int y);
void initShader();
void setUniforms();
void reshape(int w, int h);
void display(void);
void initTextures();
void drawQuad();


// quad for outputting normal map
unsigned int vertex_array;
unsigned int vbo_indices;
unsigned int num_indices;
//Don't need these to get it working, but needed for deallocation
unsigned int vbo_data;
unsigned int texcoord_data;

void initQuad();

#endif
