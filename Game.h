#include "SDL.h"
#include <unordered_map>
#include <string>
#include <vector>
class Game
{
public:
    Game();

    bool Initialize();
    void RunLoop();

    void Shutdown();

    void AddActor(class Actor *actor);
    void RemoveActor(class Actor *actor);

private:
    void ProcessInput();
    void UpdateGame();
    void GenerateOutput();
    SDL_Window *mWindow;
    SDL_Renderer *mRenderer;
    bool mIsRunning;

    //actorの配列
    std::vector<class Actpr *> mActors;
    //待機actorの配列
    std::vector<class Acror *> mPendingActors;
};