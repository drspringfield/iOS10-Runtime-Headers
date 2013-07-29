/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCControllerButtonInput : GCControllerElement  {
}

@property(copy) id valueChangedHandler;
@property(readonly) float value;
@property(getter=isPressed,readonly) BOOL pressed;


- (void)setValueChangedHandler:(id)arg1;
- (id)valueChangedHandler;
- (BOOL)isPressed;
- (BOOL)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (BOOL)_setValue:(float)arg1;
- (float)value;

@end
