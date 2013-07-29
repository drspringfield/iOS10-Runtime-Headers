/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString, NSDictionary;

@interface MSASEnqueuedCommand : NSObject <NSCoding> {
    NSString *_command;
    NSDictionary *_variantParam;
    NSDictionary *_invariantParam;
}

@property(copy) NSString * command;
@property(retain) NSDictionary * variantParam;
@property(retain) NSDictionary * invariantParam;

+ (id)commandwithCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3;
+ (id)command;

- (void)setCommand:(id)arg1;
- (void)setInvariantParam:(id)arg1;
- (void)setVariantParam:(id)arg1;
- (id)initWithCommand:(id)arg1 variantParam:(id)arg2 invariantParam:(id)arg3;
- (BOOL)canBeGroupedWithCommand:(id)arg1;
- (id)variantParam;
- (id)invariantParam;
- (id)command;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
