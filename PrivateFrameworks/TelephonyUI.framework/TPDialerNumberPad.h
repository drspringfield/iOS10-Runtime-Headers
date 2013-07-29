/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class <TPDialerKeypadDelegate>, TPDialerSoundController;

@interface TPDialerNumberPad : TPNumberPad <TPDialerKeypadProtocol> {
    BOOL _playsSounds;
    <TPDialerKeypadDelegate> *_delegate;
    TPDialerSoundController *_soundController;
}

@property BOOL playsSounds;
@property <TPDialerKeypadDelegate> * delegate;
@property(retain) TPDialerSoundController * soundController;

+ (id)dialerNumberPadNumericCharacters;
+ (id)dialerNumberPadFullCharacters;

- (BOOL)playsSounds;
- (void)setSoundController:(id)arg1;
- (id)soundController;
- (int)indexForHighlightedKey;
- (void)highlightKeyAtIndex:(int)arg1;
- (void)setSupportsHardPause:(BOOL)arg1;
- (BOOL)supportsHardPause;
- (void)setPlaysSounds:(BOOL)arg1;
- (void)buttonLongPressed:(id)arg1;
- (void)buttonUp:(id)arg1;
- (void)buttonDown:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)buttonTapped:(id)arg1;

@end
