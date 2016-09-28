/**
 *
 *
 */


// aviophobia headers
#include <LogManager.h>
#include <GameManager.h>

// game headers
#include <Global.h>



int main(int argc, char **argv) {
	av::LogManager &logManager = av::LogManager::getInstance();

	logManager.setFlush(true);

	av::GameManager &gameManager = av::GameManager::getInstance();

	gameManager.startUp();

	redwingInit();

	gameManager.run();

	return -1;
}
