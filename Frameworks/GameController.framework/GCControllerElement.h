/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameController.framework/GameController
 */

@class GCControllerElement;

@interface GCControllerElement : NSObject  {
}

@property(readonly) GCControllerElement * collection;
@property(getter=isAnalog,readonly) BOOL analog;


- (BOOL)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (BOOL)_setValue:(float)arg1;
- (BOOL)isAnalog;
- (id)collection;
- (float)value;

@end
