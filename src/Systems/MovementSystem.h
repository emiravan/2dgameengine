#ifndef MOVEMENTSYSTEM_H
#define MOVEMENTSYSTEM_H

#include "../Components/RigidBodyComponent.h"
#include "../Components/TransformComponent.h"
#include "../ECS/ECS.h"
#include <string>

class MovementSystem : public System {
    public:
        MovementSystem() {
            // TODO:
            RequireComponent<TransformComponent>();
            RequireComponent<RigidBodyComponent>();
        }

        void Update(double deltaTime) {
            // TODO:
            //  Loop all entities that system is interested in
            for (auto entity : GetSystemEntities()) {
                // Update entity position based on its velocity
                auto &transform = entity.GetComponent<TransformComponent>();
                const auto rigidbody = entity.GetComponent<RigidBodyComponent>();

                transform.position.x += rigidbody.velocity.x * deltaTime;
                transform.position.y += rigidbody.velocity.y * deltaTime;

                Logger::Log("Entity id = " +
                            std::to_string(entity.GetId()) +
                            " position is now (" +
                            std::to_string(transform.position.x) +
                            ", " +
                            std::to_string(transform.position.y) + ")");
            }
        }
};

#endif
