#include "Game.h"

Game ::Game() : mWindow(nullptr), mIsRunning(true)
{
}

bool Game::Initialize()
{
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) != 0)
    {
        SDL_Log("unable to initialize SDL: %s", SDL_GetError());
        return false;
    }
    mWindow = SDL_CreateWindow("shootiin", 500, 200, 1024, 768, 0);
    if (!mWindow)
    {
        SDL_Log("Failed to create window: %s", SDL_GetError());
        return false;
    }

    return true;
}

void Game::RunLoop()
{
    while (mIsRunning)
    {

        ProcessInput();
        UpdateGame();
        GenerateOutput();
    }
}
void Game::ProcessInput()
{

    // const Uint8 *keyState = SDL_GetKeyboardState(NULL);
    // if (keyState[SDL_SCANCODE_ESCAPE])
    // {
    //     mIsRunning = false;
    // }
}
void Game::UpdateGame()
{
}
void Game::GenerateOutput()
{
    // SDL_SetRenderDrawColor(mRenderer, 220, 220, 220, 255);
    // SDL_RenderClear(mRenderer);
}
void Game::Shutdown()
{
    SDL_DestroyWindow(mWindow);
    SDL_Quit();
}
