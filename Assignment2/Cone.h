/*----------------------------------------------------------
* COSC363  Ray Tracer
*
*  The cone class
*  This is a subclass of Object, and hence implements the
*  methods intersect() and normal().
-------------------------------------------------------------*/

#ifndef H_CONE
#define H_CONE
#include <glm/glm.hpp>
#include "SceneObject.h"

/**
 * Defines a cone located at 'center'
 * with the specified radius and height
 */
class Cone : public SceneObject
{

private:
    glm::vec3 center;
    float radius;
    float height;


public:
	Cone() : center(glm::vec3(0)), radius(1), height(1) {} //Default constructor creates a unit cone

    Cone(glm::vec3 c, float r, float h) : center(c), radius(r), height(h) {}

	float intersect(glm::vec3 pos, glm::vec3 dir);

	glm::vec3 normal(glm::vec3 p);

};

#endif //!H_CONE
