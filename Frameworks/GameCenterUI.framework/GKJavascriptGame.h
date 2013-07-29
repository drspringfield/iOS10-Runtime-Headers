/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSNumber, NSString, GKGame;

@interface GKJavascriptGame : NSObject  {
    GKGame *_game;
}

@property(readonly) NSNumber * adamId;
@property(readonly) NSNumber * externalVersion;
@property(readonly) NSString * bundleId;
@property(readonly) NSString * bundleVersion;
@property(retain) GKGame * game;

+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;

- (id)bundleId;
- (id)adamId;
- (id)initWithGame:(id)arg1;
- (void)setGame:(id)arg1;
- (id)game;
- (id)externalVersion;
- (id)attributeKeys;
- (id)bundleVersion;
- (void)dealloc;

@end
