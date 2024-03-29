//======================================================
//    yos_sound.h
//    Sample Yoshi Sound Related Header
//
//    Copyright (C) 1999-2001 NINTENDO Co.,Ltd.
//======================================================

#ifndef YOS_SOUND_H
#define YOS_SOUND_H

#include <AgbSound.h>
#include "sound/m4aLib.h"

#define YOS_BGM_GAME      (0)
#define YOS_BGM_GAMEOVER  (1)
#define YOS_BGM_TITLE    (26)

#define YOS_SE_KURURIN    (2)
#define YOS_SE_HA         (3)
#define YOS_SE_KUBIFURI   (4)
#define YOS_SE_JUMP0      (5)
#define YOS_SE_JUMP1      (6)
#define YOS_SE_FUN        (7)
#define YOS_SE_AWAWA      (8)
#define YOS_SE_ARRA      (10)
#define YOS_SE_START     (11)
#define YOS_SE_STPH1     (12)
#define YOS_SE_TONT1     (13) //Stepping when stationary
#define YOS_SE_TONT2     (14)
#define YOS_SE_UPUP      (15) //Swinging arms
#define YOS_SE_JMPST     (16) //Landing
#define YOS_SE_PAKON     (17) //Stomping on enemies
#define YOS_SE_DMGN1     (20) //Damage
#define YOS_SE_DMGN2     (21)
#define YOS_SE_ONPP2     (22)
#define YOS_SE_ONPP1     (23)
#define YOS_SE_DERUP     (24)
#define YOS_SE_TORUP     (25)
#define YOS_SE_KAITN     (27)
#define YOS_SE_SID1      (28)
#define YOS_SE_SID2      (29)
#define YOS_SE_DSIN      (31)
#define YOS_SE_ONPP3     (34)
#define YOS_SE_RAKA      (35)
#define YOS_SE_UKUU      (36)
#define YOS_SE_GAONN     (39)
#define YOS_SE_APIR      (40)
#define YOS_SE_WARE      (41)
#define YOS_SE_ATAR      (42)


extern SoundArea sound;
extern MusicPlayerArea music;
extern MusicPlayerArea phrase;
extern MusicPlayerTrack track[8];
extern int maxchn;
extern SongHeader *demosong[43];

#ifdef USE_SOUND_SYSCALL
#define SoundInit(P1)   SoundDriverInit(P1)
#define SoundMode(P1)   SoundDriverMode(P1)
#define SoundMain()     SoundDriverMain()
#define SoundVSync()    SoundDriverVSync()
#define SoundClearAll() SoundChannelClear()
#define MidiKey2fr(P1,P2,P3)    MidiKey2Freq(P1,P2,P3)

#define MPlayOpen(P1,P2,P3)     MusicPlayerOpen(P1,P2,P3)
#define MPlayStart(P1,P2)       MusicPlayerStart(P1,P2)
#define MPlayStop(P1)           MusicPlayerStop(P1)
#define MPlayContinue(P1)       MusicPlayerContinue(P1)
#define MPlayFadeOut(P1,P2)     MusicPlayerFadeOut(P1,P2)
#endif

#endif
