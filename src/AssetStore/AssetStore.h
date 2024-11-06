#ifndef ASSETSTORE_H
#define ASSETSTORE_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_render.h>
#include <map>
#include <string>

class AssetStore {
  private:
    std::map<std::string, SDL_Texture*> textures;
    // TODO: create map for fonts
    // TODO: create map for audio

  public:
    AssetStore();
    ~AssetStore();

    void ClearAssets();
    void AddTexture(SDL_Renderer* renderer, const std::string& assetId, const std::string& filePath);

    SDL_Texture* GetTexture(const std::string& assetId);
};

#endif
