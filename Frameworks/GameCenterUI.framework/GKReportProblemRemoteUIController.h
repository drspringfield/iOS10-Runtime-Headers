/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSURL, NSError, GKPlayer;

@interface GKReportProblemRemoteUIController : GKRemoteUIController  {
    GKPlayer *_problemPlayer;
    NSURL *_url;
}

@property(retain) GKPlayer * problemPlayer;
@property(retain) NSError * error;
@property(retain) NSURL * url;

+ (id)controllerForProblemPlayer:(id)arg1 completionHandler:(id)arg2;

- (id)bagKey;
- (void)setProblemPlayer:(id)arg1;
- (id)problemPlayer;
- (id)initWithProblemPlayer:(id)arg1;
- (id)postBodyForInitialLoad;
- (id)fallbackURL;
- (int)preferredLayoutStyle;
- (void)setUrl:(id)arg1;
- (id)url;

@end
