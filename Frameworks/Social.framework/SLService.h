/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@interface SLService : NSObject  {
}

+ (id)availableServices;
+ (id)allServices;
+ (id)serviceForServiceType:(id)arg1;

- (id)composeViewController;
- (BOOL)supportsVideoURL:(id)arg1;
- (BOOL)supportsImageURL:(id)arg1;
- (id)shareSheetClassName;
- (id)shareSheetHostingBundleIdentifier;
- (id)connectionName;
- (int)maximumVideoTimeLimit;
- (int)maximumVideoDataSize;
- (BOOL)isServiceTypeSupportedByConfiguration;
- (BOOL)isSheetAccessPermitted;
- (BOOL)hasAccounts;
- (BOOL)isFirstClassService;
- (void)addExtraParameters:(id)arg1 forRequest:(id)arg2;
- (BOOL)isAvailable;
- (id)serviceType;
- (id)accountType;
- (int)maximumVideoCount;
- (int)maximumImageCount;
- (int)maximumURLCount;
- (int)maximumImageDataSize;
- (id)activityImage;
- (id)activityTitle;

@end
