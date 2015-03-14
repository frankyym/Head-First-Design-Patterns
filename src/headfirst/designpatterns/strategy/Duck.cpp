#include <iostream>
using namespace std;

class FlyBehavior {
public:
	virtual void fly() = 0;
	virtual ~FlyBehavior() {};
};

class FlyNoWay : public FlyBehavior {
public:
	virtual void fly() {
		cout << "I can't fly" << endl;
	}
	virtual ~FlyNoWay() {
		cout << "bye bye fly no way" << endl;
	}
};

class FlyWithWing : public FlyBehavior {
public:
	virtual void fly() {
		cout << "Fly with wings" << endl;
	}
	virtual ~FlyWithWing() {
		cout << "bye bye fly with wing" << endl;
	}
};

class Duck {
public:
	Duck(FlyBehavior* fb) : flyBehavior_(fb) {}
	~Duck() {
		delete flyBehavior_;
	}
	void performFly() {
		flyBehavior_->fly();
	}
	void setFlyBehavior(FlyBehavior* fb) {
		if (flyBehavior_ == fb) return;
		delete flyBehavior_;
		flyBehavior_ = fb;
	}
private:
    FlyBehavior	*flyBehavior_;
};

int main() {
	Duck duck(new FlyNoWay());
	duck.performFly();
	duck.setFlyBehavior(new FlyWithWing());
	duck.performFly();
	return 0;
}
