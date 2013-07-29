/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString;

@interface MCCardDAVAccountPayload : MCPayload  {
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSString *_principalURL;
    BOOL _useSSL;
    int _port;
    NSString *_accountPersistentUUID;
}

@property(readonly) NSString * accountDescription;
@property(readonly) NSString * hostname;
@property(copy) NSString * username;
@property(copy) NSString * password;
@property(readonly) NSString * principalURL;
@property(readonly) BOOL useSSL;
@property(readonly) int port;
@property(copy) NSString * accountPersistentUUID;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (id)principalURL;
- (BOOL)useSSL;
- (void)setAccountPersistentUUID:(id)arg1;
- (id)accountPersistentUUID;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void)setPassword:(id)arg1;
- (id)title;
- (void)setUsername:(id)arg1;
- (id)username;
- (id)accountDescription;
- (id)hostname;
- (id)password;
- (int)port;
- (void).cxx_destruct;
- (id)description;

@end
