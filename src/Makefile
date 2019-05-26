CC = g++
CFLAG = -Wall
TARGET = game.out
SOURCEFILE = Allegro5Exception.cpp AudioHelper.cpp Bullet.cpp Collider.cpp DirtyEffect.cpp Enemy.cpp ExplosionEffect.cpp FireBullet.cpp GameEngine.cpp Group.cpp IControl.cpp IObject.cpp IScene.cpp Image.cpp ImageButton.cpp LOG.cpp Label.cpp LaserBullet.cpp LaserTurret.cpp LoseScene.cpp MachineGunTurret.cpp MissileBullet.cpp MissileTurret.cpp Plane.cpp PlaneEnemy.cpp PlayScene.cpp Point.cpp Resources.cpp Slider.cpp SoldierEnemy.cpp Sprite.cpp StageSelectScene.cpp TankEnemy.cpp Turret.cpp TurretButton.cpp WinScene.cpp main.cpp
ALLEGRO = `pkg-config --libs allegro-5 allegro_font-5 allegro_ttf-5 allegro_dialog-5 allegro_primitives-5 allegro_image-5 allegro_audio-5 allegro_acodec-5`

LIB = -I..

all: 
	$(CC) $(CFLAG) -o $(TARGET) $(LIB)  $(SOURCEFILE) $(ALLEGRO)




