#include "Game.h"

Game ::Game() : mWindow(nullptr), mIsRunning(true), mRenderer(nullptr)
{
}

bool Game::Initialize()
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        SDL_Log("unable to initialize SDL: %s", SDL_GetError());
        return false;
    }
    mWindow = SDL_CreateWindow("shootiin", 500, 200, 1024, 768, 0);
    if (mWindow == NULL)
    {
        SDL_Log("Failed to create window: %s", SDL_GetError());
        return false;
    }
    mRenderer = SDL_CreateRenderer(
        mWindow, // Window to create renderer for
        -1,      // Usually -1
        SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    if (!mRenderer)
    {
        SDL_Log("Failed to create renderer: %s", SDL_GetError());
        return false;
    }
    SDL_Log("initialize success");
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
    SDL_DestroyRenderer(mRenderer);
    SDL_DestroyWindow(mWindow);
    SDL_Quit();
}
