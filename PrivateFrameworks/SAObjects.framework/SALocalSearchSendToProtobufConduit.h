/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSData, NSArray;

@interface SALocalSearchSendToProtobufConduit : SADomainCommand  {
}

@property(copy) NSArray * attributes;
@property(copy) NSURL * endpoint;
@property(copy) NSData * rawRequest;
@property int timeoutInSeconds;

+ (id)sendToProtobufConduitWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sendToProtobufConduit;

- (void)setTimeoutInSeconds:(int)arg1;
- (int)timeoutInSeconds;
- (void)setRawRequest:(id)arg1;
- (id)rawRequest;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setEndpoint:(id)arg1;
- (id)endpoint;
- (void)setAttributes:(id)arg1;
- (id)attributes;
- (id)groupIdentifier;

@end
