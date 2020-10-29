#include "Actor.h"
#include "Game.h"
#include "Component.h"

Actor::Actor(Game *game)
    : mPosition(Vector2::Zero), mGame(game)
{
    mGame->AddActor(this);
}

Actor::~Actor()
{
    mGame->RemoveActor(this);

    while (!mComponents.empty())
    {
        delete mComponents.back();
    }
}
void Actor::Update(float deltaTime)
{
    UpdateComponent(deltaTime);
}

void Actor::UpdateComponent(float deltaTime)
{
    for (auto comp : mComponents)
    {
        comp->Update(deltaTime);
    }
}

void Actor::AddComponent(Component *component)
{
}
void Actor::RemoveComponent(Component *component)
{
}