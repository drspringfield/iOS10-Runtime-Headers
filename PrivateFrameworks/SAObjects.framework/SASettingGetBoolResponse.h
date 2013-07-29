/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SASettingEntity;

@interface SASettingGetBoolResponse : SASettingGetValueResponse  {
}

@property(retain) SASettingEntity * setting;

+ (id)getBoolResponseWithSetting:(id)arg1;
+ (id)getBoolResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getBoolResponse;

- (id)setting;
- (void)setSetting:(id)arg1;
- (id)initWithSetting:(id)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
