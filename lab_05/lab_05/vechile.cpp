#include "Vechile.h"


namespace Vechile {
	Vechile::Vechile() {
		direction.x = 0;
		direction.y = 0;
		direction.z = 0;
		currentPosition.x = 0;
		currentPosition.y = 0;
		currentPosition.z = 0;
		logWrite = true;
	}
	void Vechile::SetDirection(double x, double y, double z) {
		direction.x = x;
		direction.y = y;
		direction.z = z;
	}
	void Vechile::Move(int time) {
		currentPosition.x += direction.x * time;
		currentPosition.y += direction.y * time;
		currentPosition.z += direction.z * time;
		if (logWrite) {
			moveLog.push_back(currentPosition);
		}
	}
	void Vechile::ChangeLogState() {
		logWrite = !(logWrite);
	}
	std::vector<Point> Vechile::GetMoveLog()
	{
		return moveLog;
	}
}