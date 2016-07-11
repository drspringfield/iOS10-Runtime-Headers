/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNTCC : NSObject {
    bool  _simulateAccessPrompt;
    unsigned int  _simulateAccessPromptDelay;
    bool  _simulateAccessPromptGranted;
    long long  _simulateType;
}

+ (id)sharedInstance;

- (id)_simulateQueue;
- (int)accessPreflight;
- (void)accessRequestWithCompletion:(id /* block */)arg1;
- (unsigned char)checkAuditToken:(struct { unsigned int x1[8]; })arg1;
- (unsigned char)isAccessRestricted;
- (void)simulate:(long long)arg1;
- (void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(bool)arg1 withDelay:(unsigned int)arg2;

@end