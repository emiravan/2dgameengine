#ifndef TRANSFROMCOMPONENT_H
#define TRANSFROMCOMPONENT_H

#include <glm/ext/vector_float2.hpp>
#include <glm/glm.hpp>

struct TransformComponent {
        glm::vec2 position;
        glm::vec2 scale;
        double rotation;

        TransformComponent(glm::vec2 position = glm::vec2(0, 0), glm::vec2 scale = glm::vec2(1, 1), double rotation = 0.0) {
            this->position = position;
            this->scale = scale;
            this->rotation = rotation;
        }
};

#endif