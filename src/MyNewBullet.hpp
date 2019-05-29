#ifndef MYNEWBULLET_HPP
#define MYNEWBULLET_HPP
#include "Bullet.hpp"

class Enemy;
class Turret;
namespace Engine {
struct Point;
}  // namespace Engine

class MyNewBullet : public Bullet {
public:
	explicit MyNewBullet(Engine::Point position, Engine::Point forwardDirection, float rotation, Turret* parent);
	void OnExplode(Enemy* enemy) override;
};
#endif // MYNEWBULLET_HPP
