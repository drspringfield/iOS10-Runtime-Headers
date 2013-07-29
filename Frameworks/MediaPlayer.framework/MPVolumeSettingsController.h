/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPVolumeSettingsController : UITwoSidedAlertController <UITwoSidedAlertControllerDelegate> {
    NSString *_audioCategory;
}


- (void)audioRoutingPicker:(id)arg1 didSelectRouteAtIndex:(int)arg2;
- (id)initWithAudioCategory:(id)arg1;
- (void)flip;
- (void).cxx_destruct;
- (void)twoSidedAlertControllerDidDismiss:(id)arg1;
- (id)createBackAlert;
- (id)createFrontAlert;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;

@end
