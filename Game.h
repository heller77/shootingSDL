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

private:
    void ProcessInput();
    void UpdateGame();
    void GenerateOutput();
    SDL_Window *mWindow;
    SDL_Renderer *mRenderer;
    bool mIsRunning;
};