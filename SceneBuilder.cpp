#include "SceneBuilder.h"
#include "ShapeBuilder.h"
#include "Mesh.h"

using namespace std;


void SceneBuilder::UBuildScene(vector<GLMesh>& scene)
{
	// seed the rand() function once
	srand(time(nullptr));


	// DESK
	GLMesh desk_gMesh01;
	desk_gMesh01.p = {
		0.0f, 1.0f, 1.0f, 1.0f,				// color r, g, b a
		10.0f, 3.0f, 5.0f,					// scale x, y, z
		0.0f, 1.0f, 0.0f, 0.0f,				// x amount of rotation, rotate x, y, z
		45.0f, 0.0f, 1.0f, 0.0f,			// y amount of rotation, rotate x, y, z
		0.0f, 0.0f, 0.0f, 1.0f,				// z amount of rotation, rotate x, y, z
		1.0f, 0.0f, 0.0f,					// translate x, y, z
		1.0f, 1.0f
	};
	desk_gMesh01.texFilename = "textures\\desk.png";
	ShapeBuilder::UBuildPlane(desk_gMesh01);
	scene.push_back(desk_gMesh01);


	// PICTURE FRAME
	GLMesh picframe_gMesh01;
	picframe_gMesh01.p = {
		1.0f,	1.0f,	1.0f,	1.0f,		// color r, g, b a
		3.0f,	0.3f,	4.0f,				// scale x, y, z
		0.0f,	5.0f,	0.0f,	0.0f,		// x amount of rotation, rotate x, y, z
		45.0f,	0.0f,	1.0f,	0.0f,		// y amount of rotation, rotate x, y, z
		0.0f,	0.0f,	0.0f,	1.0f,		// z amount of rotation, rotate x, y, z
		0.0f,	0.02f,	-1.0f,				// translate x, y, z
		1.0f,	1.0f
	};
	picframe_gMesh01.texFilename = "textures\\picframe1.png";
	ShapeBuilder::UBuildCube(picframe_gMesh01);
	scene.push_back(picframe_gMesh01);


	//RUBIK'S CUBE
	GLMesh rubiks_gMesh01;
	rubiks_gMesh01.p = {
		1.0f,	1.0f,	1.0f,	1.0f,		// color r, g, b a
		1.4f,	1.4f,	1.4f,				// scale x, y, z
		0.0f,	1.0f,	0.0f,	0.0f,		// x amount of rotation, rotate x, y, z
		25.0f,	0.0f,	1.0f,	0.0f,		// y amount of rotation, rotate x, y, z
		0.0f,	0.0f,	0.0f,	1.0f,		// z amount of rotation, rotate x, y, z
		0.0f,	0.1f,	3.0f,				// translate x, y, z
		1.0f,	1.0f
	};
	rubiks_gMesh01.texFilename = "textures\\rubiks.png";
	ShapeBuilder::UBuildCube(rubiks_gMesh01);
	scene.push_back(rubiks_gMesh01);


	//TAPE ROLL
	GLMesh hollow_cyl;
	hollow_cyl.p = {
		1.0f,	1.0f,	1.0f,	1.0f,		// color r, g, b a
		1.4f,	1.4f,	1.4f,				// scale x, y, z
		0.0f,	1.0f,	0.0f,	0.0f,		// x amount of rotation, rotate x, y, z
	 -125.0f,	0.0f,	1.0f,	0.0f,		// y amount of rotation, rotate x, y, z
		0.0f,	0.0f,	0.0f,	1.0f,		// z amount of rotation, rotate x, y, z
		-3.0f,	0.02f,	3.0f,				// translate x, y, z
		1.0f,	1.0f
	};
	hollow_cyl.texFilename = "textures\\white.png";
	hollow_cyl.innerRadius = 0.25f;
	hollow_cyl.radius = 0.5f;
	hollow_cyl.height = 0.25f;
	hollow_cyl.number_of_sides = 144.0f;
	ShapeBuilder::UBuildHollowCylinder(hollow_cyl);
	scene.push_back(hollow_cyl);


	// KEY CHAIN BODY
	GLMesh cyl_gMesh01;
	cyl_gMesh01.p = {
		1.0f, 1.0f, 1.0f, 1.0f,					// color r, g, b a
		0.25f, 1.0f, 0.25f,						// scale x, y, z
	    0.0f, -1.0f,	0.0f,	0.3f,			// x amount of rotation, rotate x, y, z
		180.0f,	1.0f,	1.0f,	0.0f,			// y amount of rotation, rotate x, y, z
		0.0f,	0.0f,	0.0f,	0.1f,			// z amount of rotation, rotate x, y, z
		2.0f,	0.25f,	-3.5f,					// translate x, y, z
		1.0f, 1.0f
	};
	cyl_gMesh01.height = 1.0f;
	cyl_gMesh01.radius = 1.5f;
	cyl_gMesh01.number_of_sides = 128.0f;
	cyl_gMesh01.texFilename = "textures\\key_chain_body.png";
	ShapeBuilder::UBuildCylinder(cyl_gMesh01);
	scene.push_back(cyl_gMesh01);


	// KEY CHAIN TOP
	GLMesh con_gMesh01;
	con_gMesh01.p = {
		1.0f, 1.0f, 1.0f, 1.0f,					// color r, g, b a
		0.25f, 1.0f, 0.25f,						// scale x, y, z
		0.0f, -1.0f,	0.0f,	0.3f,			// x amount of rotation, rotate x, y, z
		180.0f,	1.0f,	1.0f,	0.0f,			// y amount of rotation, rotate x, y, z
		0.0f,	0.0f,	0.0f,	-0.2f,			// z amount of rotation, rotate x, y, z
		3.0f,	0.25f,	-3.5f,					// translate x, y, z
		1.0f, 1.0f
	};
	con_gMesh01.height = 2.0f;
	con_gMesh01.radius = 1.5f;
	con_gMesh01.number_of_sides = 128.0f;
	con_gMesh01.texFilename = "textures\\key_chain_top.png";
	ShapeBuilder::UBuildCone(con_gMesh01);
	scene.push_back(con_gMesh01);


}


