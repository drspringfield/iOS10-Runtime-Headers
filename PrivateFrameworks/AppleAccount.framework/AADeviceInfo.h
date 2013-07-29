/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSObject<OS_dispatch_semaphore>, APSConnection, NSData;

@interface AADeviceInfo : NSObject  {
    APSConnection *_apsConnection;
    BOOL _tokenDone;
    NSData *_token;
    NSObject<OS_dispatch_semaphore> *_tokenSema;
}

+ (id)userAgentHeader;
+ (id)signatureWithDictionary:(id)arg1;
+ (id)productVersion;
+ (id)serialNumber;
+ (id)clientInfoHeader;
+ (id)appleIDClientIdentifier;
+ (id)udid;
+ (id)apnsToken;
+ (id)osVersion;
+ (id)infoDictionary;

- (id)wifiMacAddress;
- (id)regionCode;
- (id)deviceClass;
- (id)productVersion;
- (id)osName;
- (id)productType;
- (id)serialNumber;
- (id)deviceInfoDictionary;
- (id)appleIDClientIdentifier;
- (id)udid;
- (id)apnsToken;
- (id)osVersion;
- (id)init;
- (void).cxx_destruct;
- (id)buildVersion;

@end
