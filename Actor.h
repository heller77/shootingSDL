#include "Math.h"
#include <vector>

class Actor
{
public:
    Actor(class Game *game);
    virtual ~Actor();

    void Update(float deltaTime);

    void UpdateComponent(float deltaTime);

    Vector2 GetPosition() const { return mPosition; }
    Vector2 SetPosition(const Vector2 &pos) { mPosition = pos; }
    void AddComponent(class Component *component);
    void RemoveComponent(class Component *component);

private:
    Vector2 mPosition;

    std::vector<class Component *> mComponents;
    class Game *mGame;
};