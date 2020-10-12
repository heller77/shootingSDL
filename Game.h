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
    void ProcessInput();
    void UpdateGame();
    void GenerateOutput();
    void Shutdown();

private:
    SDL_Window *mWindow;
    SDL_Renderer *mRenderer;
    bool mIsRunning;
};