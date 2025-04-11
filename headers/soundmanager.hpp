#ifndef SOUNDMANAGER_HPP
#define SOUNDMANAGER_HPP

#include "definitions.hpp"
#include <SFML/Audio.hpp>

class SoundManager {
public:
  SoundManager();

  void loadSounds();
  void playSound(const std::string &key);
  void playMoveSound();
  void playCaptureSound();
  void playCheckSound();
  void playCheckmateSound();
  void playButtonClickSound();

private:
  std::map<std::string, sf::SoundBuffer> soundBuffers;
  std::map<std::string, sf::Sound> sounds;
};

#endif
