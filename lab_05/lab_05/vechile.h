#pragma once
#include <vector>

using namespace std;

namespace Vechile{
	struct Point 
	{
		double x, y, z;
	};
	class Vechile {
		friend double vectMove(Vechile v);
	private:
		Point direction, currentPosition;
		bool logWrite;
		vector<Point> moveLog;
	public:
		Vechile();
		virtual void Move(int);
		void SetDirection(double, double, double);
		void ChangeLogState();
		vector<Point> GetMoveLog();
	};
}