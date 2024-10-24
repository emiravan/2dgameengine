#ifndef TRANSFROMCOMPONENT_H
#define TRANSFROMCOMPONENT_H

#include <glm/glm.hpp>

struct TransformComponent {
        glm::vec2 position;
        glm::vec2 scale;
        double rotation;
};

#endif
