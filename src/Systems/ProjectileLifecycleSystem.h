#ifndef PROJECTILELIFECYCLESYSTEM_H
#define PROJECTILELIFECYCLESYSTEM_H

#include "../Components/ProjectileComponent.h"
#include "../ECS/ECS.h"

struct ProjectileLifecycleSystem : public System {
    public:
    ProjectileLifecycleSystem() {
        RequireComponent<ProjectileComponent>();
    }

    void Update() {
        for (auto entity : GetSystemEntities()) {
            auto projectile = entity.GetComponent<ProjectileComponent>();

            // Kill projectiles after they reach their duration limit
            if (SDL_GetTicks() - projectile.startTime > projectile.duration) {
                entity.Kill();
            }
        }
    }
};

#endif
