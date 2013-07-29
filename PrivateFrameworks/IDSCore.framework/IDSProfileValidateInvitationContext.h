/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
 */

@class NSString, NSDictionary;

@interface IDSProfileValidateInvitationContext : IDSProfileMessage <NSCopying> {
    NSString *_basePhoneNumber;
    NSString *_regionID;
    NSString *_responseBasePhoneNumber;
    NSString *_responseRegionID;
    NSDictionary *_responseExtraInfo;
}

@property(copy) NSString * regionID;
@property(copy) NSString * basePhoneNumber;
@property(copy) NSString * responseRegionID;
@property(copy) NSString * responseBasePhoneNumber;
@property(copy) NSDictionary * responseExtraInfo;


- (void)setResponseExtraInfo:(id)arg1;
- (void)setResponseRegionID:(id)arg1;
- (void)setResponseBasePhoneNumber:(id)arg1;
- (void)setBasePhoneNumber:(id)arg1;
- (id)responseExtraInfo;
- (id)responseBasePhoneNumber;
- (id)responseRegionID;
- (void)setRegionID:(id)arg1;
- (id)requiredKeys;
- (id)messageBody;
- (id)basePhoneNumber;
- (id)regionID;
- (int)maxTimeoutRetries;
- (BOOL)wantsExtraTimeoutRetry;
- (void)handleResponseDictionary:(id)arg1;
- (id)bagKey;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
