#include "Math.h"
#include <vector>

class Actor
{
public:
    Actor();
    virtual ~Actor();

    void Update(float deltaTime);

    Vector2 GetPosition() const { return position; }
    Vector2 SetPosition(const Vector2 &pos) { position = pos; }

private:
    Vector2 position;
};