#include "ofGraphicsBaseTypes.h"
#include "ofRectangle.h"

#if !defined(GLM_FORCE_CTOR_INIT)
	#define GLM_FORCE_CTOR_INIT
#endif
#if !defined(GLM_ENABLE_EXPERIMENTAL)
	#define GLM_ENABLE_EXPERIMENTAL
#endif
#include <glm/vec2.hpp>
#include <glm/trigonometric.hpp>

void ofBaseDraws::draw(const glm::vec2 & point) const {
	draw(point.x, point.y);
}

void ofBaseDraws::draw(const ofRectangle & rect) const {
	draw(rect.x, rect.y, rect.width, rect.height);
}

void ofBaseDraws::draw(const glm::vec2 & point, float w, float h) const {
	draw(point.x, point.y, w, h);
}

void ofBaseRenderer::rotateDeg(float degrees, float vecX, float vecY, float vecZ){
	rotateRad(glm::radians(degrees), vecX, vecY, vecZ);
}

void ofBaseRenderer::rotateXDeg(float degrees){
	rotateXRad(glm::radians(degrees));
}

void ofBaseRenderer::rotateYDeg(float degrees){
	rotateYRad(glm::radians(degrees));
}

void ofBaseRenderer::rotateZDeg(float degrees){
	rotateZRad(glm::radians(degrees));
}

void ofBaseRenderer::rotateDeg(float degrees){
	rotateRad(glm::radians(degrees));
}
