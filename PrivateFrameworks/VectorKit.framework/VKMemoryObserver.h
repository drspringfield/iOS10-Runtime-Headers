/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSObject<OS_dispatch_source>;

@interface VKMemoryObserver : NSObject  {
    id _target;
    SEL _selector;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}


- (void)_receivedMemoryNotification;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;

@end
