/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UILabel;

@interface TPAudioRouteCell : UITableViewCell  {
    BOOL _isActiveRoute;
    UILabel *_audioRouteNameLabel;
}

@property BOOL isActiveRoute;
@property UILabel * audioRouteNameLabel;


- (void)setAudioRouteNameLabel:(id)arg1;
- (BOOL)isActiveRoute;
- (id)audioRouteNameLabel;
- (void)setIsMuteButtonWithImage:(id)arg1;
- (void)setIsActiveRoute:(BOOL)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
