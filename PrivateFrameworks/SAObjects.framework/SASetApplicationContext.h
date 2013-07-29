/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SASetApplicationContext : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * orderedContext;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)setApplicationContext;
+ (id)setApplicationContextWithDictionary:(id)arg1 context:(id)arg2;

- (void)setOrderedContext:(id)arg1;
- (id)orderedContext;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
