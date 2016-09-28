
// aviophobia header
#include <GameManager.h>
#include <EventKeyboard.h>

// local header
#include <Global.h>

int redwingInit() {
    av::GameManager &game_manager = av::GameManager::getInstance();
    game_manager.setGlobalEventHandler(&redwingGlobalEventHandler);
}

void redwingGlobalEventHandler(const av::Event *p_event) {
    if (p_event->getType().compare(av::EVENT_KEYBOARD) == 0) {
        av::EventKeyboard *p_ek= (av::EventKeyboard *) p_event;
        if (p_ek->getAction() == av::KEY_UP) {
            if (p_ek->getKey() == SDLK_q) {
                av::GameManager &game_manager = av::GameManager::getInstance();
                game_manager.setGameOver(true);
            }
        }
    }
}
