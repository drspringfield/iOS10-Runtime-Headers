/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAUIAppPunchOut, NSString, SAUIDecoratedText, <SAClientBoundCommand>, NSNumber;

@interface SAGKAnswerProperty : AceObject <SAAceSerializable> {
}

@property(retain) <SAClientBoundCommand> * command;
@property(retain) SAUIDecoratedText * decoratedValue;
@property(retain) SAUIDecoratedText * decoratedValueAnnotation;
@property(copy) NSString * name;
@property(retain) SAUIAppPunchOut * punchOut;
@property(copy) NSNumber * selected;
@property(copy) NSString * value;
@property(copy) NSString * valueAnnotation;

+ (id)answerPropertyWithDictionary:(id)arg1 context:(id)arg2;
+ (id)answerProperty;

- (void)setCommand:(id)arg1;
- (void)setDecoratedValueAnnotation:(id)arg1;
- (id)decoratedValueAnnotation;
- (void)setDecoratedValue:(id)arg1;
- (id)decoratedValue;
- (void)setValueAnnotation:(id)arg1;
- (id)valueAnnotation;
- (void)setPunchOut:(id)arg1;
- (id)punchOut;
- (id)encodedClassName;
- (id)command;
- (id)name;
- (id)selected;
- (void)setSelected:(id)arg1;
- (id)groupIdentifier;
- (void)setValue:(id)arg1;
- (id)value;
- (void)setName:(id)arg1;

@end
