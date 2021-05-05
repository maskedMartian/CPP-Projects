#include <iostream>

class Logger {
public:
	virtual ~Logger() = default;
	virtual void logTransfer(int from, int to, double amount) = 0;
};

class ConsoleLogger : public Logger {
public:
	void logTransfer(int from, int to, double amount) override {
		std::cout << "[Console] - transfer $" << amount << " from " << from << " to " << to << ".\n";
	}
};

class FileLogger : public Logger {
public:
	void logTransfer(int from, int to, double amount) override {
		std::cout << "[File   ] - transfer $" << amount << " from " << from << " to " << to << ".\n";
	}
};
class Bank {
private:
	Logger* logger;
public:
	Bank(Logger* logger) : logger{ logger } {}
	void updateLogger(Logger* newLogger) {
		logger = newLogger;
	}
	void makeTransfer(int from, int to, double amount) {
		//do transfer stuff
		logger->logTransfer(from, to, amount);
	}
};

int main() {
	ConsoleLogger cLogger;
	FileLogger fLogger;
	Bank bank{ &cLogger };
	bank.makeTransfer(1000, 2000, 49.95);
	bank.makeTransfer(2000, 4000, 20.00);
	bank.updateLogger(&fLogger);
	bank.makeTransfer(3000, 5000, 59.05);
	bank.makeTransfer(5000, 4000, 21.99);
	bank.updateLogger(&cLogger);
	bank.makeTransfer(1000, 3000, 69.00);

	return 0;
}