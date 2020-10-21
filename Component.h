
#include <cstdint>
class Component
{
private:
    /* data */
public:
    Component(class Actor *owner, int updateOrder = 100);
    virtual ~Component();
    virtual void Update(float deltatime);
    virtual void ProcessInput(const uint8_t *keyState) {}
    int GetUpdateOrder() const { return mUpdateOrder; }

protected:
    class Actor *mOwner;
    int mUpdateOrder;
};
