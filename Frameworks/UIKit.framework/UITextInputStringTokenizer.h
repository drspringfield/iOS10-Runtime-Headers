/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIResponder<UITextInput>;

@interface UITextInputStringTokenizer : NSObject <UITextInputTokenizer> {
    UIResponder<UITextInput> *_textInput;
}


- (id)initWithTextInput:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_getClosestTokenRangeForPosition:(id)arg1 granularity:(int)arg2 downstream:(BOOL)arg3;
- (BOOL)_isDownstreamForDirection:(int)arg1 atPosition:(id)arg2;
- (int)_indexForTextPosition:(id)arg1;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3;
- (BOOL)isPosition:(id)arg1 atBoundary:(int)arg2 inDirection:(int)arg3;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(int)arg2 inDirection:(int)arg3;

@end
