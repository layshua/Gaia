#version 400

uniform mat4x4 u_Model;
uniform mat4x4 u_View;
uniform mat4x4 u_Persp;

in vec2 Position;
in vec2 Texcoord;

out vec3 vPosition;
out vec3 vPositionCamSpace;
out vec2 v_Texcoord;

void main(void) {
    //vec4 world = u_Model * vec4(Position, 1.0);
    //vec4 camera = u_View * world;
	//vPositionCamSpace = camera.xyz;
	//vPosition = Position.xyz;
	gl_Position = u_Persp * u_View * u_Model *  vec4(Position, 1.0, 1.0);
	v_Texcoord = Texcoord;
}
