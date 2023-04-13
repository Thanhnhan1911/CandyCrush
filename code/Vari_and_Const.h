#ifndef VARICONST_H_
#define VARICONST_H_

#include "Button.h"
//#include "Game_Utils.h"
#include "LTexture.h"
#include "Game_base.h"


SDL_Window* gWindow = nullptr;
SDL_Renderer* gRenderer = nullptr;
SDL_Color textColor = {255, 255, 255};

Mix_Chunk* gClick = nullptr;
Mix_Music* gMusic = nullptr;
Mix_Music* gMenuMusic = nullptr;

TTF_Font *gFont = NULL;


SDL_Rect gPlayButton[BUTTON_TOTAL];
SDL_Rect gHelpButton[BUTTON_TOTAL];
SDL_Rect gExitButton[BUTTON_TOTAL];
SDL_Rect gBackButton[BUTTON_TOTAL];
SDL_Rect gRestartButton[BUTTON_TOTAL];
SDL_Rect gQuitButton[BUTTON_TOTAL];

LTexture gMenuTexture;
LTexture gInstructionTexture;
LTexture gGridTexture;

LTexture ChooseTexture;

LTexture HoriTexture;
LTexture VertTexture;

LTexture ScoreTexture;
LTexture MoveTexture;
LTexture TargetTexture;

LTexture VictoryTexture;

LTexture LoseTexture;

LTexture nhan;

LTexture ItemTexture[NumItem + 10];

LTexture gPlayButtonTexture;
LTexture gHelpButtonTexture;
LTexture gExitButtonTexture;
LTexture gBackButtonTexture;
LTexture gRestartButtonTexture;
LTexture gQuitButtonTexture;

Button PlayButton(PLAY_BUTTON_POSX, PLAY_BUTTON_POSY);
Button HelpButton(HELP_BUTTON_POSX, HELP_BUTTON_POSY);
Button ExitButton(EXIT_BUTTON_POSX, EXIT_BUTTON_POSY);
Button BackButton(BACK_BUTTON_POSX, BACK_BUTTON_POSY);
Button RestartButton(RE_BUTTON_POSX, RE_BUTTON_POSY);
Button QuitButton(QUIT_BUTTON_POSX, QUIT_BUTTON_POSY);


#endif // VARICONST_H_
