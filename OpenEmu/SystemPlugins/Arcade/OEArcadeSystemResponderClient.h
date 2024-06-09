/*
 Copyright (c) 2011, OpenEmu Team
 
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
     * Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.
     * Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
     * Neither the name of the OpenEmu Team nor the
       names of its contributors may be used to endorse or promote products
       derived from this software without specific prior written permission.
 
 THIS SOFTWARE IS PROVIDED BY OpenEmu Team ''AS IS'' AND ANY
 EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL OpenEmu Team BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#import <Foundation/Foundation.h>

@protocol OESystemResponderClient;

typedef enum _OEArcadeButton
{
    OEArcadeButtonUp,
    OEArcadeButtonDown,
    OEArcadeButtonLeft,
    OEArcadeButtonRight,
    OEArcadeButton1,
    OEArcadeButton2,
    OEArcadeButton3,
    OEArcadeButton4,
    OEArcadeButton5,
    OEArcadeButton6,
    OEArcadeButtonP1Start,
    OEArcadeButtonInsertCoin,
    OEArcadeButtonService,
    
    // UI commands
    OEArcadeUIConfigure,
    
    // Keyboard keys
    OEArcadeA,
    OEArcadeB,
    OEArcadeC,
    OEArcadeD,
    OEArcadeE,
    OEArcadeF,
    OEArcadeG,
    OEArcadeH,
    OEArcadeI,
    OEArcadeJ,
    OEArcadeK,
    OEArcadeL,
    OEArcadeM,
    OEArcadeN,
    OEArcadeO,
    OEArcadeP,
    OEArcadeQ,
    OEArcadeR,
    OEArcadeS,
    OEArcadeT,
    OEArcadeU,
    OEArcadeV,
    OEArcadeW,
    OEArcadeX,
    OEArcadeY,
    OEArcadeZ,
    OEArcade0,
    OEArcade1,
    OEArcade2,
    OEArcade3,
    OEArcade4,
    OEArcade5,
    OEArcade6,
    OEArcade7,
    OEArcade8,
    OEArcade9,
    OEArcadeF1,
    OEArcadeF2,
    OEArcadeF3,
    OEArcadeF4,
    OEArcadeF5,
    OEArcadeF6,
    OEArcadeF7,
    OEArcadeF8,
    OEArcadeF9,
    OEArcadeF10,
    OEArcadeF11,
    OEArcadeF12,
    OEArcadeF13,
    OEArcadeF14,
    OEArcadeF15,
    OEArcadeF16,
    OEArcadeF17,
    OEArcadeF18,
    OEArcadeF19,
    OEArcadeF20,
    OEArcadeESC,
    OEArcadeTILDE,
    OEArcadeMINUS,
    OEArcadeEQUALS,
    OEArcadeBACKSPACE,
    OEArcadeTAB,
    OEArcadeOPENBRACE,
    OEArcadeCLOSEBRACE,
    OEArcadeENTER,
    OEArcadeCOLON,
    OEArcadeQUOTE,
    OEArcadeBACKSLASH,
    OEArcadeBACKSLASH2,
    OEArcadeCOMMA,
    OEArcadeSTOP,
    OEArcadeSLASH,
    OEArcadeSPACE,
    OEArcadeINSERT,
    OEArcadeDEL,
    OEArcadeHOME,
    OEArcadeEND,
    OEArcadePGUP,
    OEArcadePGDN,
    OEArcadeLEFT,
    OEArcadeRIGHT,
    OEArcadeUP,
    OEArcadeDOWN,
    OEArcade0_PAD,
    OEArcade1_PAD,
    OEArcade2_PAD,
    OEArcade3_PAD,
    OEArcade4_PAD,
    OEArcade5_PAD,
    OEArcade6_PAD,
    OEArcade7_PAD,
    OEArcade8_PAD,
    OEArcade9_PAD,
    OEArcadeSLASH_PAD,
    OEArcadeASTERISK,
    OEArcadeMINUS_PAD,
    OEArcadePLUS_PAD,
    OEArcadeDEL_PAD,
    OEArcadeENTER_PAD,
    OEArcadeBS_PAD,
    OEArcadeTAB_PAD,
    OEArcade00_PAD,
    OEArcade000_PAD,
    OEArcadeCOMMA_PAD,
    OEArcadeEQUALS_PAD,
    OEArcadePRTSCR,
    OEArcadePAUSE,
    OEArcadeLSHIFT,
    OEArcadeRSHIFT,
    OEArcadeLCONTROL,
    OEArcadeRCONTROL,
    OEArcadeLALT,
    OEArcadeRALT,
    OEArcadeSCRLOCK,
    OEArcadeNUMLOCK,
    OEArcadeCAPSLOCK,
    OEArcadeLWIN,
    OEArcadeRWIN,
    OEArcadeMENU,
    OEArcadeCANCEL,
    
    OEArcadeButtonCount
} OEArcadeButton;

@protocol OEArcadeSystemResponderClient <OESystemResponderClient, NSObject>

- (oneway void)didPushArcadeButton:(OEArcadeButton)button forPlayer:(NSUInteger)player;
- (oneway void)didReleaseArcadeButton:(OEArcadeButton)button forPlayer:(NSUInteger)player;

@end
