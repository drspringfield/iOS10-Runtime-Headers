/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMessage, MFMessageLibrary;

@interface _MFDALibraryConsumerFactory : NSObject <MFMessageDataConsumerFactory> {
    MFMessageLibrary *_library;
    MFMessage *_message;
}

@property(retain) MFMessageLibrary * library;
@property(retain) MFMessage * message;


- (id)dataConsumerForPart:(id)arg1;
- (id)library;
- (void)setLibrary:(id)arg1;
- (id)message;
- (void)dealloc;
- (void)setMessage:(id)arg1;

@end
