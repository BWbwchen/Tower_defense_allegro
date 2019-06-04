#include <allegro5/base.h>
#include <cmath>
#include <string>
// for random
#include <time.h>
#include <stdlib.h>

#include "AudioHelper.hpp"
#include "MyNewBullet.hpp"
#include "Group.hpp"
#include "MyTurret.hpp"
#include "PlayScene.hpp"
#include "Point.hpp"

const int MyTurret::Price = 500;
MyTurret::MyTurret(float x, float y) :
	Turret("play/tower-base.png", "play/turret-6.png", x, y, 1000, Price,  0.5) {
	// Move center downward, since we the turret head is slightly biased upward.
	Anchor.y += 8.0f / GetBitmapHeight();
}
void MyTurret::CreateBullet() {
    Engine::Point diff  = Engine::Point(cos(Rotation - ALLEGRO_PI / 2), sin(Rotation - ALLEGRO_PI / 2));
    Engine::Point diff2 = Engine::Point(cos(Rotation - ALLEGRO_PI / 4), sin(Rotation - ALLEGRO_PI / 4));
    Engine::Point diff3 = Engine::Point(cos(Rotation + ALLEGRO_PI / 4), sin(Rotation + ALLEGRO_PI / 4));
    Engine::Point diff4 = Engine::Point(cos(Rotation + ALLEGRO_PI / 2), sin(Rotation + ALLEGRO_PI / 2));
    Engine::Point diff5 = Engine::Point(cos(Rotation), sin(Rotation));

	float rotation = atan2(diff.y, diff.x);
	Engine::Point normalized = diff.Normalize();
	// Change bullet position to the front of the gun barrel.
	getPlayScene()->BulletGroup->AddNewObject(new MyNewBullet(Position + normalized * 36, diff, rotation, this));
	getPlayScene()->BulletGroup->AddNewObject(new MyNewBullet(Position + normalized * 36, diff2, rotation, this));
	getPlayScene()->BulletGroup->AddNewObject(new MyNewBullet(Position + normalized * 36, diff3, rotation, this));
	getPlayScene()->BulletGroup->AddNewObject(new MyNewBullet(Position + normalized * 36, diff4, rotation, this));
	getPlayScene()->BulletGroup->AddNewObject(new MyNewBullet(Position + normalized * 36, diff5, rotation, this));
	AudioHelper::PlayAudio("gun.wav");
}
