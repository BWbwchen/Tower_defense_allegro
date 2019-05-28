CC = g++
CFLAG = -Wall
TARGET = game.out
SOURCEFILE = Allegro5Exception.cpp AudioHelper.cpp Bullet.cpp Collider.cpp DirtyEffect.cpp Enemy.cpp ExplosionEffect.cpp FireBullet.cpp GameEngine.cpp Group.cpp IControl.cpp IObject.cpp IScene.cpp Image.cpp ImageButton.cpp LOG.cpp Label.cpp LaserBullet.cpp LaserTurret.cpp LoseScene.cpp MachineGunTurret.cpp MissileBullet.cpp MissileTurret.cpp Plane.cpp PlaneEnemy.cpp PlayScene.cpp Point.cpp Resources.cpp Slider.cpp SoldierEnemy.cpp Sprite.cpp StageSelectScene.cpp TankEnemy.cpp Turret.cpp TurretButton.cpp WinScene.cpp main.cpp
OBJFILE = Allegro5Exception.o AudioHelper.o Bullet.o Collider.o DirtyEffect.o Enemy.o ExplosionEffect.o FireBullet.o GameEngine.o Group.o IControl.o IObject.o IScene.o Image.o ImageButton.o LOG.o Label.o LaserBullet.o LaserTurret.o LoseScene.o MachineGunTurret.o MissileBullet.o MissileTurret.o Plane.o PlaneEnemy.o PlayScene.o Point.o Resources.o Slider.o SoldierEnemy.o Sprite.o StageSelectScene.o TankEnemy.o Turret.o TurretButton.o WinScene.o
ALLEGRO = `pkg-config --libs allegro-5 allegro_font-5 allegro_ttf-5 allegro_dialog-5 allegro_primitives-5 allegro_image-5 allegro_audio-5 allegro_acodec-5`

LIB = -I..

all: 
	$(CC) -c -g main.cpp
	$(CC) $(CFLAG) $(LIB) -o $(TARGET) $(OBJFILE) main.o $(ALLEGRO) 
	./$(TARGET)

compile: 
	$(CC) -c -g $(SOURCEFILE)

fuck:
	$(CC) $(CFLAG) -o $(TARGET) $(LIB) $(SOURCEFILE) $(ALLEGRO) 