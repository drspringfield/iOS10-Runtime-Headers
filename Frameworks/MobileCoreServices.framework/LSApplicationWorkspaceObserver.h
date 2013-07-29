/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSUUID;

@interface LSApplicationWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol, NSSecureCoding> {
    NSUUID *_uuid;
}

@property(retain) NSUUID * uuid;

+ (BOOL)supportsSecureCoding;

- (id)uuid;
- (id)init;
- (void)setUuid:(id)arg1;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)networkUsageChanged:(BOOL)arg1;
- (void)applicationInstallsDidResume:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidPause:(id)arg1;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
